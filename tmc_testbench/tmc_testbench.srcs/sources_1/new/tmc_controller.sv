`timescale 1ns / 1ps

module tmc_controller #(
    parameter int C_AXI_ADDR_WIDTH = 32,
    parameter int C_AXI_DATA_WIDTH = 32,
    parameter logic [31:0] LOGICAL_BASE_ADDR      = 32'hC000_0000,
    parameter logic [31:0] TIER0_PHYS_BASE        = 32'hC000_0000,
    parameter logic [31:0] TIER1_PHYS_BASE        = 32'hC001_0000,
    parameter logic [31:0] CTRL_BASE_ADDR         = 32'hFFFF_0000,
    parameter logic [31:0] CTRL_ADDR_MASK         = 32'hFFFF_F000,
    parameter int BLOCK_BYTES                     = 256,
    parameter int TIER0_BYTES                     = 65536,
    parameter int TIER1_BYTES                     = 65536,
    parameter bit SCRATCH_DEFAULT_IN_FAR          = 1'b1
)(
    input  logic                               aclk,
    input  logic                               aresetn,
    input  logic [C_AXI_ADDR_WIDTH-1:0]        S_AXI_AWADDR,
    input  logic [2:0]                         S_AXI_AWPROT,
    input  logic                               S_AXI_AWVALID,
    output logic                               S_AXI_AWREADY,
    input  logic [C_AXI_DATA_WIDTH-1:0]        S_AXI_WDATA,
    input  logic [(C_AXI_DATA_WIDTH/8)-1:0]    S_AXI_WSTRB,
    input  logic                               S_AXI_WVALID,
    output logic                               S_AXI_WREADY,
    output logic [1:0]                         S_AXI_BRESP,
    output logic                               S_AXI_BVALID,
    input  logic                               S_AXI_BREADY,
    input  logic [C_AXI_ADDR_WIDTH-1:0]        S_AXI_ARADDR,
    input  logic [2:0]                         S_AXI_ARPROT,
    input  logic                               S_AXI_ARVALID,
    output logic                               S_AXI_ARREADY,
    output logic [C_AXI_DATA_WIDTH-1:0]        S_AXI_RDATA,
    output logic [1:0]                         S_AXI_RRESP,
    output logic                               S_AXI_RVALID,
    input  logic                               S_AXI_RREADY,
    output logic [C_AXI_ADDR_WIDTH-1:0]        M_AXI_AWADDR,
    output logic [7:0]                         M_AXI_AWLEN,
    output logic [2:0]                         M_AXI_AWSIZE,
    output logic [1:0]                         M_AXI_AWBURST,
    output logic                               M_AXI_AWVALID,
    input  logic                               M_AXI_AWREADY,
    output logic [C_AXI_DATA_WIDTH-1:0]        M_AXI_WDATA,
    output logic [(C_AXI_DATA_WIDTH/8)-1:0]    M_AXI_WSTRB,
    output logic                               M_AXI_WLAST,
    output logic                               M_AXI_WVALID,
    input  logic                               M_AXI_WREADY,
    input  logic [1:0]                         M_AXI_BRESP,
    input  logic                               M_AXI_BVALID,
    output logic                               M_AXI_BREADY,
    output logic [C_AXI_ADDR_WIDTH-1:0]        M_AXI_ARADDR,
    output logic [7:0]                         M_AXI_ARLEN,
    output logic [2:0]                         M_AXI_ARSIZE,
    output logic [1:0]                         M_AXI_ARBURST,
    output logic                               M_AXI_ARVALID,
    input  logic                               M_AXI_ARREADY,
    input  logic [C_AXI_DATA_WIDTH-1:0]        M_AXI_RDATA,
    input  logic [1:0]                         M_AXI_RRESP,
    input  logic                               M_AXI_RLAST,
    input  logic                               M_AXI_RVALID,
    output logic                               M_AXI_RREADY,
    output logic [71:0]                        M_AXIS_MM2S_CMD_TDATA,
    output logic                               M_AXIS_MM2S_CMD_TVALID,
    input  logic                               M_AXIS_MM2S_CMD_TREADY,
    output logic [71:0]                        M_AXIS_S2MM_CMD_TDATA,
    output logic                               M_AXIS_S2MM_CMD_TVALID,
    input  logic                               M_AXIS_S2MM_CMD_TREADY,
    input  logic [7:0]                         S_AXIS_MM2S_STS_TDATA,
    input  logic                               S_AXIS_MM2S_STS_TVALID,
    output logic                               S_AXIS_MM2S_STS_TREADY,
    input  logic [7:0]                         S_AXIS_S2MM_STS_TDATA,
    input  logic                               S_AXIS_S2MM_STS_TVALID,
    output logic                               S_AXIS_S2MM_STS_TREADY
);

    localparam int AXI_SIZE = (C_AXI_DATA_WIDTH <= 8)  ? 0 :
                              (C_AXI_DATA_WIDTH <= 16) ? 1 :
                              (C_AXI_DATA_WIDTH <= 32) ? 2 :
                              (C_AXI_DATA_WIDTH <= 64) ? 3 : 4;
    localparam int BLOCK_LSB = $clog2(BLOCK_BYTES);
    localparam int TIER0_BLOCKS = TIER0_BYTES / BLOCK_BYTES;
    localparam int TIER1_BLOCKS = TIER1_BYTES / BLOCK_BYTES;
    localparam int TOTAL_LOGICAL_BLOCKS = TIER0_BLOCKS + TIER1_BLOCKS - 1; // one scratch block reserved
    localparam int LOGICAL_BYTES_EXPOSED = TOTAL_LOGICAL_BLOCKS * BLOCK_BYTES;
    localparam int SLOT_W = ($clog2((TIER0_BLOCKS > TIER1_BLOCKS) ? TIER0_BLOCKS : TIER1_BLOCKS) > 0) ?
                            $clog2((TIER0_BLOCKS > TIER1_BLOCKS) ? TIER0_BLOCKS : TIER1_BLOCKS) : 1;
    localparam int LBLK_W = ($clog2(TOTAL_LOGICAL_BLOCKS) > 0) ? $clog2(TOTAL_LOGICAL_BLOCKS) : 1;
    localparam logic [31:0] CTRL_STATUS_ADDR     = CTRL_BASE_ADDR + 32'h0004;
    localparam logic [31:0] CTRL_TIER_SPLIT_ADDR = CTRL_BASE_ADDR + 32'h0008;
    localparam logic [31:0] CTRL_MODE_ADDR       = CTRL_BASE_ADDR + 32'h000C;
    localparam logic [31:0] CTRL_MM2S_LO_ADDR    = CTRL_BASE_ADDR + 32'h0010;
    localparam logic [31:0] CTRL_MM2S_HI_ADDR    = CTRL_BASE_ADDR + 32'h0014;
    localparam logic [31:0] CTRL_S2MM_LO_ADDR    = CTRL_BASE_ADDR + 32'h0018;
    localparam logic [31:0] CTRL_S2MM_HI_ADDR    = CTRL_BASE_ADDR + 32'h001C;
    localparam logic [31:0] CTRL_LAST_VICTIM_ADDR= CTRL_BASE_ADDR + 32'h0020;
    localparam logic [31:0] CTRL_PROMOTE_ADDR    = CTRL_BASE_ADDR + 32'h0024;
    localparam logic [31:0] CTRL_DEMOTE_ADDR     = CTRL_BASE_ADDR + 32'h0028;

    typedef enum logic [1:0] { WR_IDLE, WR_ISSUE_AXI, WR_WAIT_B } wr_state_t;
    typedef enum logic [1:0] { RD_IDLE, RD_ISSUE_AXI, RD_WAIT_R } rd_state_t;
    typedef enum logic [2:0] { MIG_IDLE, MIG_COPY_1, MIG_WAIT_1, MIG_COPY_2, MIG_WAIT_2, MIG_COPY_3, MIG_WAIT_3 } mig_state_t;

    wr_state_t wr_state;
    rd_state_t rd_state;
    mig_state_t mig_state;

    logic [31:0] wr_addr_latched;
    logic [31:0] wr_data_latched;
    logic [(C_AXI_DATA_WIDTH/8)-1:0] wr_strb_latched;
    logic [31:0] rd_addr_latched;
    logic [LBLK_W-1:0] wr_lblk_latched;
    logic [LBLK_W-1:0] rd_lblk_latched;
    logic wr_was_logical;
    logic rd_was_logical;

    logic [31:0] reg_ctrl;
    logic [31:0] reg_tier_split;
    logic [31:0] reg_mode;
    logic [71:0] reg_manual_mm2s_cmd;
    logic [71:0] reg_manual_s2mm_cmd;
    logic [31:0] reg_promote_count;
    logic [31:0] reg_demote_count;
    logic [31:0] reg_status;
    logic [7:0]  last_mm2s_sts;
    logic [7:0]  last_s2mm_sts;

    logic reg_scratch_in_far;
    logic waiting_mm2s_sts, waiting_s2mm_sts;

    logic logical_in_close [0:TOTAL_LOGICAL_BLOCKS-1];
    logic [SLOT_W-1:0] logical_slot [0:TOTAL_LOGICAL_BLOCKS-1];
    logic close_slot_valid [0:TIER0_BLOCKS-1];
    logic [LBLK_W-1:0] close_slot_logical [0:TIER0_BLOCKS-1];
    logic [31:0] close_alloc_age [0:TIER0_BLOCKS-1];
    logic far_slot_valid [0:TIER1_BLOCKS-1];
    logic [LBLK_W-1:0] far_slot_logical [0:TIER1_BLOCKS-1];
    logic [31:0] alloc_seq;

    logic relocation_pending;
    logic [LBLK_W-1:0] pending_logical_blk;
    logic [LBLK_W-1:0] mig_hot_logical;
    logic [LBLK_W-1:0] mig_victim_logical;
    logic [SLOT_W-1:0] mig_hot_far_slot;
    logic [SLOT_W-1:0] mig_victim_close_slot;
    logic [SLOT_W-1:0] last_victim_slot;

    logic victim_found;
    logic [SLOT_W-1:0] victim_slot_sel;
    logic [31:0] victim_age_sel;

    integer i;
    integer cidx;
    integer fidx;

    function automatic logic is_ctrl_addr(input logic [31:0] addr);
        return ((addr & CTRL_ADDR_MASK) == CTRL_BASE_ADDR);
    endfunction

    function automatic logic [31:0] close_usable_blocks(input logic scratch_in_far);
        if (scratch_in_far) close_usable_blocks = TIER0_BLOCKS;
        else close_usable_blocks = TIER0_BLOCKS - 1;
    endfunction

    function automatic logic [31:0] far_usable_blocks(input logic scratch_in_far);
        if (scratch_in_far) far_usable_blocks = TIER1_BLOCKS - 1;
        else far_usable_blocks = TIER1_BLOCKS;
    endfunction

    function automatic logic [SLOT_W-1:0] close_scratch_slot;
        close_scratch_slot = SLOT_W'(TIER0_BLOCKS - 1);
    endfunction

    function automatic logic [SLOT_W-1:0] far_scratch_slot;
        far_scratch_slot = SLOT_W'(TIER1_BLOCKS - 1);
    endfunction

    function automatic logic is_logical_addr(input logic [31:0] addr);
        return (addr >= LOGICAL_BASE_ADDR) &&
               (addr < (LOGICAL_BASE_ADDR + LOGICAL_BYTES_EXPOSED));
    endfunction

    function automatic logic [LBLK_W-1:0] logical_block_idx(input logic [31:0] addr);
        logic [31:0] rel;
        begin
            rel = addr - LOGICAL_BASE_ADDR;
            logical_block_idx = rel[BLOCK_LSB + LBLK_W - 1 : BLOCK_LSB];
        end
    endfunction

    function automatic logic [BLOCK_LSB-1:0] logical_offset(input logic [31:0] addr);
        logical_offset = addr[BLOCK_LSB-1:0];
    endfunction

    function automatic logic [71:0] mk_datamover_cmd(
        input logic [31:0] src_addr,
        input logic [22:0] btt
    );
        logic [71:0] cmd;
        begin
            cmd = '0;
            cmd[31:0] = src_addr;
            cmd[54:32] = btt;
            cmd[55] = 1'b1;
            mk_datamover_cmd = cmd;
        end
    endfunction

    function automatic logic [31:0] tier0_slot_phys(input logic [SLOT_W-1:0] slot_idx);
        return TIER0_PHYS_BASE + ({24'd0, slot_idx} << BLOCK_LSB);
    endfunction

    function automatic logic [31:0] tier1_slot_phys(input logic [SLOT_W-1:0] slot_idx);
        return TIER1_PHYS_BASE + ({24'd0, slot_idx} << BLOCK_LSB);
    endfunction

    function automatic logic [31:0] remap_addr(input logic [31:0] logical_addr);
        logic [LBLK_W-1:0] bidx;
        logic [SLOT_W-1:0] sidx;
        begin
            bidx = logical_block_idx(logical_addr);
            sidx = logical_slot[bidx];
            if (logical_in_close[bidx]) begin
                remap_addr = tier0_slot_phys(sidx) + {24'd0, logical_offset(logical_addr)};
            end else begin
                remap_addr = tier1_slot_phys(sidx) + {24'd0, logical_offset(logical_addr)};
            end
        end
    endfunction

    function automatic logic blocked_by_relocation(input logic [31:0] addr);
        logic [LBLK_W-1:0] bidx;
        begin
            blocked_by_relocation = 1'b0;
            if (mig_state != MIG_IDLE) begin
                if (reg_mode[1]) begin
                    blocked_by_relocation = 1'b1; // strict stall
                end else if (is_logical_addr(addr)) begin
                    bidx = logical_block_idx(addr);
                    blocked_by_relocation = (bidx == mig_hot_logical) || (bidx == mig_victim_logical);
                end
            end
        end
    endfunction

    always_comb begin
        int k;
        victim_found = 1'b0;
        victim_slot_sel = '0;
        victim_age_sel = 32'hFFFF_FFFF;
        for (k = 0; k < TIER0_BLOCKS; k = k + 1) begin
            if (close_slot_valid[k]) begin
                if (!(~reg_scratch_in_far && (k[SLOT_W-1:0] == close_scratch_slot()))) begin
                    if (!victim_found || (close_alloc_age[k] < victim_age_sel)) begin
                        victim_found = 1'b1;
                        victim_slot_sel = k[SLOT_W-1:0];
                        victim_age_sel = close_alloc_age[k];
                    end
                end
            end
        end
    end

    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            S_AXI_AWREADY <= 1'b0;
            S_AXI_WREADY  <= 1'b0;
            S_AXI_BRESP   <= 2'b00;
            S_AXI_BVALID  <= 1'b0;
            S_AXI_ARREADY <= 1'b0;
            S_AXI_RDATA   <= '0;
            S_AXI_RRESP   <= 2'b00;
            S_AXI_RVALID  <= 1'b0;

            M_AXI_AWADDR  <= '0;
            M_AXI_AWLEN   <= 8'd0;
            M_AXI_AWSIZE  <= AXI_SIZE[2:0];
            M_AXI_AWBURST <= 2'b01;
            M_AXI_AWVALID <= 1'b0;
            M_AXI_WDATA   <= '0;
            M_AXI_WSTRB   <= '0;
            M_AXI_WLAST   <= 1'b0;
            M_AXI_WVALID  <= 1'b0;
            M_AXI_BREADY  <= 1'b0;
            M_AXI_ARADDR  <= '0;
            M_AXI_ARLEN   <= 8'd0;
            M_AXI_ARSIZE  <= AXI_SIZE[2:0];
            M_AXI_ARBURST <= 2'b01;
            M_AXI_ARVALID <= 1'b0;
            M_AXI_RREADY  <= 1'b0;

            M_AXIS_MM2S_CMD_TDATA  <= '0;
            M_AXIS_MM2S_CMD_TVALID <= 1'b0;
            M_AXIS_S2MM_CMD_TDATA  <= '0;
            M_AXIS_S2MM_CMD_TVALID <= 1'b0;
            S_AXIS_MM2S_STS_TREADY <= 1'b1;
            S_AXIS_S2MM_STS_TREADY <= 1'b1;

            wr_state <= WR_IDLE;
            rd_state <= RD_IDLE;
            mig_state <= MIG_IDLE;
            wr_addr_latched <= '0;
            wr_data_latched <= '0;
            wr_strb_latched <= '0;
            rd_addr_latched <= '0;
            wr_lblk_latched <= '0;
            rd_lblk_latched <= '0;
            wr_was_logical <= 1'b0;
            rd_was_logical <= 1'b0;

            reg_ctrl <= 32'h0;
            reg_mode <= 32'h0;
            reg_manual_mm2s_cmd <= '0;
            reg_manual_s2mm_cmd <= '0;
            reg_promote_count <= '0;
            reg_demote_count <= '0;
            reg_status <= '0;
            last_mm2s_sts <= '0;
            last_s2mm_sts <= '0;
            waiting_mm2s_sts <= 1'b0;
            waiting_s2mm_sts <= 1'b0;
            reg_scratch_in_far <= SCRATCH_DEFAULT_IN_FAR;
            alloc_seq <= 32'd1;
            relocation_pending <= 1'b0;
            pending_logical_blk <= '0;
            mig_hot_logical <= '0;
            mig_victim_logical <= '0;
            mig_hot_far_slot <= '0;
            mig_victim_close_slot <= '0;
            last_victim_slot <= '0;
            reg_tier_split <= LOGICAL_BASE_ADDR + (close_usable_blocks(SCRATCH_DEFAULT_IN_FAR) << BLOCK_LSB);

            for (i = 0; i < TOTAL_LOGICAL_BLOCKS; i = i + 1) begin
                logical_in_close[i] = 1'b0;
                logical_slot[i] = '0;
            end
            for (i = 0; i < TIER0_BLOCKS; i = i + 1) begin
                close_slot_valid[i] = 1'b0;
                close_slot_logical[i] = '0;
                close_alloc_age[i] = 32'hFFFF_FFFF;
            end
            for (i = 0; i < TIER1_BLOCKS; i = i + 1) begin
                far_slot_valid[i] = 1'b0;
                far_slot_logical[i] = '0;
            end

            cidx = 0;
            fidx = 0;
            for (i = 0; i < TOTAL_LOGICAL_BLOCKS; i = i + 1) begin
                if (i < close_usable_blocks(SCRATCH_DEFAULT_IN_FAR)) begin
                    logical_in_close[i] = 1'b1;
                    logical_slot[i] = cidx[SLOT_W-1:0];
                    close_slot_valid[cidx] = 1'b1;
                    close_slot_logical[cidx] = i[LBLK_W-1:0];
                    close_alloc_age[cidx] = alloc_seq + i;
                    cidx = cidx + 1;
                end else begin
                    logical_in_close[i] = 1'b0;
                    logical_slot[i] = fidx[SLOT_W-1:0];
                    far_slot_valid[fidx] = 1'b1;
                    far_slot_logical[fidx] = i[LBLK_W-1:0];
                    fidx = fidx + 1;
                end
            end
            alloc_seq <= TOTAL_LOGICAL_BLOCKS + 32'd1;
        end else begin
            M_AXIS_MM2S_CMD_TVALID <= 1'b0;
            M_AXIS_S2MM_CMD_TVALID <= 1'b0;

            if (S_AXIS_MM2S_STS_TVALID) begin
                last_mm2s_sts <= S_AXIS_MM2S_STS_TDATA;
                reg_status[3] <= 1'b1;
                waiting_mm2s_sts <= 1'b0;
            end
            if (S_AXIS_S2MM_STS_TVALID) begin
                last_s2mm_sts <= S_AXIS_S2MM_STS_TDATA;
                reg_status[4] <= 1'b1;
                waiting_s2mm_sts <= 1'b0;
            end

            case (wr_state)
                WR_IDLE: begin
                    S_AXI_AWREADY <= !blocked_by_relocation(S_AXI_AWADDR);
                    S_AXI_WREADY  <= !blocked_by_relocation(S_AXI_AWADDR);
                    if (S_AXI_AWVALID && S_AXI_WVALID && S_AXI_AWREADY && S_AXI_WREADY) begin
                        wr_addr_latched <= S_AXI_AWADDR;
                        wr_data_latched <= S_AXI_WDATA;
                        wr_strb_latched <= S_AXI_WSTRB;
                        S_AXI_AWREADY <= 1'b0;
                        S_AXI_WREADY  <= 1'b0;
                        if (is_ctrl_addr(S_AXI_AWADDR)) begin
                            case (S_AXI_AWADDR)
                                CTRL_BASE_ADDR: begin
                                    reg_ctrl <= S_AXI_WDATA;
                                    if (S_AXI_WDATA[9]) begin
                                        reg_scratch_in_far <= S_AXI_WDATA[8];
                                        reg_tier_split <= LOGICAL_BASE_ADDR + (close_usable_blocks(S_AXI_WDATA[8]) << BLOCK_LSB);
                                        relocation_pending <= 1'b0;
                                        mig_state <= MIG_IDLE;
                                        alloc_seq <= 32'd1;
                                        for (i = 0; i < TOTAL_LOGICAL_BLOCKS; i = i + 1) begin
                                            logical_in_close[i] = 1'b0;
                                            logical_slot[i] = '0;
                                        end
                                        for (i = 0; i < TIER0_BLOCKS; i = i + 1) begin
                                            close_slot_valid[i] = 1'b0;
                                            close_slot_logical[i] = '0;
                                            close_alloc_age[i] = 32'hFFFF_FFFF;
                                        end
                                        for (i = 0; i < TIER1_BLOCKS; i = i + 1) begin
                                            far_slot_valid[i] = 1'b0;
                                            far_slot_logical[i] = '0;
                                        end
                                        cidx = 0;
                                        fidx = 0;
                                        for (i = 0; i < TOTAL_LOGICAL_BLOCKS; i = i + 1) begin
                                            if (i < close_usable_blocks(S_AXI_WDATA[8])) begin
                                                logical_in_close[i] = 1'b1;
                                                logical_slot[i] = cidx[SLOT_W-1:0];
                                                close_slot_valid[cidx] = 1'b1;
                                                close_slot_logical[cidx] = i[LBLK_W-1:0];
                                                close_alloc_age[cidx] = alloc_seq + i;
                                                cidx = cidx + 1;
                                            end else begin
                                                logical_in_close[i] = 1'b0;
                                                logical_slot[i] = fidx[SLOT_W-1:0];
                                                far_slot_valid[fidx] = 1'b1;
                                                far_slot_logical[fidx] = i[LBLK_W-1:0];
                                                fidx = fidx + 1;
                                            end
                                        end
                                        alloc_seq <= TOTAL_LOGICAL_BLOCKS + 32'd1;
                                    end
                                end
                                CTRL_TIER_SPLIT_ADDR: reg_tier_split <= S_AXI_WDATA;
                                CTRL_MODE_ADDR:       reg_mode <= S_AXI_WDATA;
                                CTRL_MM2S_LO_ADDR:    reg_manual_mm2s_cmd[31:0] <= S_AXI_WDATA;
                                CTRL_MM2S_HI_ADDR:    reg_manual_mm2s_cmd[63:32] <= S_AXI_WDATA;
                                CTRL_S2MM_LO_ADDR:    reg_manual_s2mm_cmd[31:0] <= S_AXI_WDATA;
                                CTRL_S2MM_HI_ADDR:    reg_manual_s2mm_cmd[63:32] <= S_AXI_WDATA;
                                default: ;
                            endcase

                            if (S_AXI_AWADDR == CTRL_BASE_ADDR && S_AXI_WDATA[1] && M_AXIS_MM2S_CMD_TREADY) begin
                                M_AXIS_MM2S_CMD_TDATA <= reg_manual_mm2s_cmd;
                                M_AXIS_MM2S_CMD_TVALID <= 1'b1;
                                reg_status[1] <= 1'b1;
                                waiting_mm2s_sts <= 1'b1;
                            end
                            if (S_AXI_AWADDR == CTRL_BASE_ADDR && S_AXI_WDATA[2] && M_AXIS_S2MM_CMD_TREADY) begin
                                M_AXIS_S2MM_CMD_TDATA <= reg_manual_s2mm_cmd;
                                M_AXIS_S2MM_CMD_TVALID <= 1'b1;
                                reg_status[2] <= 1'b1;
                                waiting_s2mm_sts <= 1'b1;
                            end

                            S_AXI_BRESP <= 2'b00;
                            S_AXI_BVALID <= 1'b1;
                        end else begin
                            if (is_logical_addr(S_AXI_AWADDR)) begin
                                wr_was_logical <= 1'b1;
                                wr_lblk_latched <= logical_block_idx(S_AXI_AWADDR);
                                M_AXI_AWADDR  <= remap_addr(S_AXI_AWADDR);
                                M_AXI_AWVALID <= 1'b1;
                                M_AXI_WDATA   <= S_AXI_WDATA;
                                M_AXI_WSTRB   <= S_AXI_WSTRB;
                                M_AXI_WLAST   <= 1'b1;
                                M_AXI_WVALID  <= 1'b1;
                                M_AXI_BREADY  <= 1'b0;
                                wr_state <= WR_ISSUE_AXI;
                            end else begin
                                wr_was_logical <= 1'b0;
                                S_AXI_BRESP <= 2'b11;
                                S_AXI_BVALID <= 1'b1;
                            end
                        end
                    end
                end

                WR_ISSUE_AXI: begin
                    if (M_AXI_AWVALID && M_AXI_AWREADY) begin
                        M_AXI_AWVALID <= 1'b0;
                    end
                    if (M_AXI_WVALID && M_AXI_WREADY) begin
                        M_AXI_WVALID <= 1'b0;
                        M_AXI_WLAST <= 1'b0;
                    end
                    if (!M_AXI_AWVALID && !M_AXI_WVALID) begin
                        M_AXI_BREADY <= 1'b1;
                        wr_state <= WR_WAIT_B;
                    end
                end

                WR_WAIT_B: begin
                    if (M_AXI_BVALID && M_AXI_BREADY) begin
                        M_AXI_BREADY <= 1'b0;
                        S_AXI_BRESP <= M_AXI_BRESP;
                        S_AXI_BVALID <= 1'b1;
                        if (reg_ctrl[0] && wr_was_logical && !logical_in_close[wr_lblk_latched]) begin
                            if (!relocation_pending && (mig_state == MIG_IDLE)) begin
                                relocation_pending <= 1'b1;
                                pending_logical_blk <= wr_lblk_latched;
                            end
                        end
                        wr_state <= WR_IDLE;
                    end
                end
            endcase

            if (S_AXI_BVALID && S_AXI_BREADY) begin
                S_AXI_BVALID <= 1'b0;
            end

            case (rd_state)
                RD_IDLE: begin
                    S_AXI_ARREADY <= !blocked_by_relocation(S_AXI_ARADDR);
                    if (S_AXI_ARVALID && S_AXI_ARREADY) begin
                        rd_addr_latched <= S_AXI_ARADDR;
                        S_AXI_ARREADY <= 1'b0;
                        if (is_ctrl_addr(S_AXI_ARADDR)) begin
                            case (S_AXI_ARADDR)
                                CTRL_BASE_ADDR:      S_AXI_RDATA <= reg_ctrl;
                                CTRL_STATUS_ADDR:    S_AXI_RDATA <= {8'h00, last_s2mm_sts, last_mm2s_sts, reg_status[7:0]};
                                CTRL_TIER_SPLIT_ADDR:S_AXI_RDATA <= reg_tier_split;
                                CTRL_MODE_ADDR:      S_AXI_RDATA <= reg_mode;
                                CTRL_MM2S_LO_ADDR:   S_AXI_RDATA <= reg_manual_mm2s_cmd[31:0];
                                CTRL_MM2S_HI_ADDR:   S_AXI_RDATA <= reg_manual_mm2s_cmd[63:32];
                                CTRL_S2MM_LO_ADDR:   S_AXI_RDATA <= reg_manual_s2mm_cmd[31:0];
                                CTRL_S2MM_HI_ADDR:   S_AXI_RDATA <= reg_manual_s2mm_cmd[63:32];
                                CTRL_LAST_VICTIM_ADDR:S_AXI_RDATA <= {24'd0, last_victim_slot};
                                CTRL_PROMOTE_ADDR:   S_AXI_RDATA <= reg_promote_count;
                                CTRL_DEMOTE_ADDR:    S_AXI_RDATA <= reg_demote_count;
                                default:             S_AXI_RDATA <= 32'hBAD0_0000;
                            endcase
                            S_AXI_RRESP <= 2'b00;
                            S_AXI_RVALID <= 1'b1;
                        end else begin
                            if (is_logical_addr(S_AXI_ARADDR)) begin
                                rd_was_logical <= 1'b1;
                                rd_lblk_latched <= logical_block_idx(S_AXI_ARADDR);
                                M_AXI_ARADDR <= remap_addr(S_AXI_ARADDR);
                                M_AXI_ARVALID <= 1'b1;
                                rd_state <= RD_ISSUE_AXI;
                            end else begin
                                rd_was_logical <= 1'b0;
                                S_AXI_RDATA <= 32'hBAD0_0001;
                                S_AXI_RRESP <= 2'b11;
                                S_AXI_RVALID <= 1'b1;
                            end
                        end
                    end
                end

                RD_ISSUE_AXI: begin
                    if (M_AXI_ARVALID && M_AXI_ARREADY) begin
                        M_AXI_ARVALID <= 1'b0;
                        M_AXI_RREADY <= 1'b1;
                        rd_state <= RD_WAIT_R;
                    end
                end

                RD_WAIT_R: begin
                    if (M_AXI_RVALID && M_AXI_RREADY) begin
                        S_AXI_RDATA <= M_AXI_RDATA;
                        S_AXI_RRESP <= M_AXI_RRESP;
                        S_AXI_RVALID <= 1'b1;
                        if (M_AXI_RLAST) begin
                            M_AXI_RREADY <= 1'b0;
                            rd_state <= RD_IDLE;
                            if (reg_ctrl[0] && rd_was_logical && !logical_in_close[rd_lblk_latched]) begin
                                if (!relocation_pending && (mig_state == MIG_IDLE)) begin
                                    relocation_pending <= 1'b1;
                                    pending_logical_blk <= rd_lblk_latched;
                                end
                            end
                        end
                    end
                end
            endcase

            if (S_AXI_RVALID && S_AXI_RREADY) begin
                S_AXI_RVALID <= 1'b0;
            end

            reg_status[0] <= (mig_state != MIG_IDLE);
            reg_status[5] <= relocation_pending;
            reg_status[6] <= reg_scratch_in_far;

            case (mig_state)
                MIG_IDLE: begin
                    if (relocation_pending && victim_found) begin
                        relocation_pending <= 1'b0;
                        mig_hot_logical <= pending_logical_blk;
                        mig_victim_close_slot <= victim_slot_sel;
                        mig_victim_logical <= close_slot_logical[victim_slot_sel];
                        mig_hot_far_slot <= logical_slot[pending_logical_blk];
                        last_victim_slot <= victim_slot_sel;
                        mig_state <= MIG_COPY_1;
                    end
                end

                MIG_COPY_1: begin
                    // Copy hot far block into scratch.
                    if (M_AXIS_MM2S_CMD_TREADY && M_AXIS_S2MM_CMD_TREADY) begin
                        if (reg_scratch_in_far) begin
                            M_AXIS_MM2S_CMD_TDATA <= mk_datamover_cmd(tier1_slot_phys(mig_hot_far_slot), BLOCK_BYTES[22:0]);
                            M_AXIS_S2MM_CMD_TDATA <= mk_datamover_cmd(tier1_slot_phys(far_scratch_slot()), BLOCK_BYTES[22:0]);
                        end else begin
                            M_AXIS_MM2S_CMD_TDATA <= mk_datamover_cmd(tier1_slot_phys(mig_hot_far_slot), BLOCK_BYTES[22:0]);
                            M_AXIS_S2MM_CMD_TDATA <= mk_datamover_cmd(tier0_slot_phys(close_scratch_slot()), BLOCK_BYTES[22:0]);
                        end
                        M_AXIS_MM2S_CMD_TVALID <= 1'b1;
                        M_AXIS_S2MM_CMD_TVALID <= 1'b1;
                        waiting_mm2s_sts <= 1'b1;
                        waiting_s2mm_sts <= 1'b1;
                        mig_state <= MIG_WAIT_1;
                    end
                end

                MIG_WAIT_1: begin
                    if (!waiting_mm2s_sts && !waiting_s2mm_sts) begin
                        mig_state <= MIG_COPY_2;
                    end
                end

                MIG_COPY_2: begin
                    // Demote victim close block into freed far slot.
                    if (M_AXIS_MM2S_CMD_TREADY && M_AXIS_S2MM_CMD_TREADY) begin
                        M_AXIS_MM2S_CMD_TDATA  <= mk_datamover_cmd(tier0_slot_phys(mig_victim_close_slot), BLOCK_BYTES[22:0]);
                        M_AXIS_S2MM_CMD_TDATA  <= mk_datamover_cmd(tier1_slot_phys(mig_hot_far_slot), BLOCK_BYTES[22:0]);
                        M_AXIS_MM2S_CMD_TVALID <= 1'b1;
                        M_AXIS_S2MM_CMD_TVALID <= 1'b1;
                        waiting_mm2s_sts <= 1'b1;
                        waiting_s2mm_sts <= 1'b1;
                        reg_demote_count <= reg_demote_count + 1'b1;
                        mig_state <= MIG_WAIT_2;
                    end
                end

                MIG_WAIT_2: begin
                    if (!waiting_mm2s_sts && !waiting_s2mm_sts) begin
                        mig_state <= MIG_COPY_3;
                    end
                end

                MIG_COPY_3: begin
                    // Promote hot block from scratch into victim close slot.
                    if (M_AXIS_MM2S_CMD_TREADY && M_AXIS_S2MM_CMD_TREADY) begin
                        if (reg_scratch_in_far) begin
                            M_AXIS_MM2S_CMD_TDATA <= mk_datamover_cmd(tier1_slot_phys(far_scratch_slot()), BLOCK_BYTES[22:0]);
                        end else begin
                            M_AXIS_MM2S_CMD_TDATA <= mk_datamover_cmd(tier0_slot_phys(close_scratch_slot()), BLOCK_BYTES[22:0]);
                        end
                        M_AXIS_S2MM_CMD_TDATA  <= mk_datamover_cmd(tier0_slot_phys(mig_victim_close_slot), BLOCK_BYTES[22:0]);
                        M_AXIS_MM2S_CMD_TVALID <= 1'b1;
                        M_AXIS_S2MM_CMD_TVALID <= 1'b1;
                        waiting_mm2s_sts <= 1'b1;
                        waiting_s2mm_sts <= 1'b1;
                        reg_promote_count <= reg_promote_count + 1'b1;
                        mig_state <= MIG_WAIT_3;
                    end
                end

                MIG_WAIT_3: begin
                    if (!waiting_mm2s_sts && !waiting_s2mm_sts) begin
                        // Commit remap table update atomically after data movement.
                        logical_in_close[mig_hot_logical] <= 1'b1;
                        logical_slot[mig_hot_logical] <= mig_victim_close_slot;
                        close_slot_valid[mig_victim_close_slot] <= 1'b1;
                        close_slot_logical[mig_victim_close_slot] <= mig_hot_logical;
                        close_alloc_age[mig_victim_close_slot] <= alloc_seq;
                        alloc_seq <= alloc_seq + 1'b1;

                        logical_in_close[mig_victim_logical] <= 1'b0;
                        logical_slot[mig_victim_logical] <= mig_hot_far_slot;
                        far_slot_valid[mig_hot_far_slot] <= 1'b1;
                        far_slot_logical[mig_hot_far_slot] <= mig_victim_logical;
                        mig_state <= MIG_IDLE;
                    end
                end
            endcase
        end
    end

endmodule

