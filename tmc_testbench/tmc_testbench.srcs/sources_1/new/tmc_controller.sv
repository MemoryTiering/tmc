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
    parameter bit SCRATCH_DEFAULT_IN_FAR          = 1'b1,
    parameter bit AUTO_SWAP_DEFAULT               = 1'b1,
    parameter bit STRICT_STALL_DEFAULT            = 1'b0
)(
    input  logic                                aclk,
    input  logic                                aresetn,
    input  logic [C_AXI_ADDR_WIDTH-1:0]         S_AXI_AWADDR,
    input  logic [2:0]                          S_AXI_AWPROT,
    input  logic                                S_AXI_AWVALID,
    output logic                                S_AXI_AWREADY,
    input  logic [C_AXI_DATA_WIDTH-1:0]         S_AXI_WDATA,
    input  logic [(C_AXI_DATA_WIDTH/8)-1:0]     S_AXI_WSTRB,
    input  logic                                S_AXI_WVALID,
    output logic                                S_AXI_WREADY,
    output logic [1:0]                          S_AXI_BRESP,
    output logic                                S_AXI_BVALID,
    input  logic                                S_AXI_BREADY,
    input  logic [C_AXI_ADDR_WIDTH-1:0]         S_AXI_ARADDR,
    input  logic [2:0]                          S_AXI_ARPROT,
    input  logic                                S_AXI_ARVALID,
    output logic                                S_AXI_ARREADY,
    output logic [C_AXI_DATA_WIDTH-1:0]         S_AXI_RDATA,
    output logic [1:0]                          S_AXI_RRESP,
    output logic                                S_AXI_RVALID,
    input  logic                                S_AXI_RREADY,
    output logic [C_AXI_ADDR_WIDTH-1:0]         M_AXI_AWADDR,
    output logic [7:0]                          M_AXI_AWLEN,
    output logic [2:0]                          M_AXI_AWSIZE,
    output logic [1:0]                          M_AXI_AWBURST,
    output logic                                M_AXI_AWVALID,
    input  logic                                M_AXI_AWREADY,
    output logic [C_AXI_DATA_WIDTH-1:0]         M_AXI_WDATA,
    output logic [(C_AXI_DATA_WIDTH/8)-1:0]     M_AXI_WSTRB,
    output logic                                M_AXI_WLAST,
    output logic                                M_AXI_WVALID,
    input  logic                                M_AXI_WREADY,
    input  logic [1:0]                          M_AXI_BRESP,
    input  logic                                M_AXI_BVALID,
    output logic                                M_AXI_BREADY,
    output logic [C_AXI_ADDR_WIDTH-1:0]         M_AXI_ARADDR,
    output logic [7:0]                          M_AXI_ARLEN,
    output logic [2:0]                          M_AXI_ARSIZE,
    output logic [1:0]                          M_AXI_ARBURST,
    output logic                                M_AXI_ARVALID,
    input  logic                                M_AXI_ARREADY,
    input  logic [C_AXI_DATA_WIDTH-1:0]         M_AXI_RDATA,
    input  logic [1:0]                          M_AXI_RRESP,
    input  logic                                M_AXI_RLAST,
    input  logic                                M_AXI_RVALID,
    output logic                                M_AXI_RREADY,
    output logic [71:0]                         M_AXIS_MM2S_CMD_TDATA,
    output logic                                M_AXIS_MM2S_CMD_TVALID,
    input  logic                                M_AXIS_MM2S_CMD_TREADY,
    output logic [71:0]                         M_AXIS_S2MM_CMD_TDATA,
    output logic                                M_AXIS_S2MM_CMD_TVALID,
    input  logic                                M_AXIS_S2MM_CMD_TREADY,
    input  logic [7:0]                          S_AXIS_MM2S_STS_TDATA,
    input  logic                                S_AXIS_MM2S_STS_TVALID,
    output logic                                S_AXIS_MM2S_STS_TREADY,
    input  logic [7:0]                          S_AXIS_S2MM_STS_TDATA,
    input  logic                                S_AXIS_S2MM_STS_TVALID,
    output logic                                S_AXIS_S2MM_STS_TREADY
);

    localparam int AXI_SIZE = (C_AXI_DATA_WIDTH <= 8)  ? 0 :
                              (C_AXI_DATA_WIDTH <= 16) ? 1 :
                              (C_AXI_DATA_WIDTH <= 32) ? 2 :
                              (C_AXI_DATA_WIDTH <= 64) ? 3 : 4;
    localparam int BLOCK_LSB = $clog2(BLOCK_BYTES);
    localparam int TIER0_BLOCKS = TIER0_BYTES / BLOCK_BYTES;
    localparam int TIER1_BLOCKS = TIER1_BYTES / BLOCK_BYTES;
    localparam int TOTAL_LOGICAL_BLOCKS = TIER0_BLOCKS + TIER1_BLOCKS - 1; 
    localparam int LOGICAL_BYTES_EXPOSED = TOTAL_LOGICAL_BLOCKS * BLOCK_BYTES;
    localparam int SLOT_W = ($clog2((TIER0_BLOCKS > TIER1_BLOCKS) ? TIER0_BLOCKS : TIER1_BLOCKS) > 0) ? 
                            $clog2((TIER0_BLOCKS > TIER1_BLOCKS) ? TIER0_BLOCKS : TIER1_BLOCKS) : 1;
    localparam int LBLK_W = ($clog2(TOTAL_LOGICAL_BLOCKS) > 0) ? $clog2(TOTAL_LOGICAL_BLOCKS) : 1;

    // Registers Map
    localparam logic [31:0] CTRL_STATUS_ADDR      = CTRL_BASE_ADDR + 32'h0004;
    localparam logic [31:0] CTRL_TIER_SPLIT_ADDR  = CTRL_BASE_ADDR + 32'h0008;
    localparam logic [31:0] CTRL_MODE_ADDR        = CTRL_BASE_ADDR + 32'h000C;
    localparam logic [31:0] CTRL_MM2S_LO_ADDR     = CTRL_BASE_ADDR + 32'h0010;
    localparam logic [31:0] CTRL_MM2S_HI_ADDR     = CTRL_BASE_ADDR + 32'h0014;
    localparam logic [31:0] CTRL_S2MM_LO_ADDR     = CTRL_BASE_ADDR + 32'h0018;
    localparam logic [31:0] CTRL_S2MM_HI_ADDR     = CTRL_BASE_ADDR + 32'h001C;
    localparam logic [31:0] CTRL_LAST_VICTIM_ADDR = CTRL_BASE_ADDR + 32'h0020;
    localparam logic [31:0] CTRL_PROMOTE_ADDR     = CTRL_BASE_ADDR + 32'h0024;
    localparam logic [31:0] CTRL_DEMOTE_ADDR      = CTRL_BASE_ADDR + 32'h0028;
    localparam logic [31:0] REG_CTRL_RESET_VALUE  = (AUTO_SWAP_DEFAULT << 0) | (SCRATCH_DEFAULT_IN_FAR << 8);
    localparam logic [31:0] REG_MODE_RESET_VALUE  = (STRICT_STALL_DEFAULT << 1);

    // BRAM Lookup Tables (Forces Synthesis to Block RAM)
    (* ram_style = "block" *) logic logical_in_close [0:TOTAL_LOGICAL_BLOCKS-1];
    (* ram_style = "block" *) logic [SLOT_W-1:0] logical_slot [0:TOTAL_LOGICAL_BLOCKS-1];
    (* ram_style = "block" *) logic [LBLK_W-1:0] close_slot_logical [0:TIER0_BLOCKS-1];
    (* ram_style = "block" *) logic [LBLK_W-1:0] far_slot_logical [0:TIER1_BLOCKS-1];

    // State Machines
    typedef enum logic [2:0] { WR_IDLE, WR_LOOKUP, WR_ISSUE_AXI, WR_WAIT_B, WR_SEND_B } wr_state_t;
    typedef enum logic [2:0] { RD_IDLE, RD_LOOKUP, RD_ISSUE_AXI, RD_WAIT_R, RD_SEND_R } rd_state_t;
    typedef enum logic [3:0] { MIG_IDLE, MIG_LOOKUP, MIG_COPY_1, MIG_WAIT_1, MIG_COPY_2, MIG_WAIT_2, MIG_COPY_3, MIG_WAIT_3, MIG_COMMIT_1, MIG_COMMIT_2 } mig_state_t;

    wr_state_t wr_state;
    rd_state_t rd_state;
    mig_state_t mig_state;

    // AXI Latches & Decoupling Flags
    logic [31:0] wr_addr_latched, wr_data_latched;
    logic [(C_AXI_DATA_WIDTH/8)-1:0] wr_strb_latched;
    logic aw_received, w_received;
    
    logic [31:0] rd_addr_latched;
    logic [LBLK_W-1:0] wr_lblk_latched, rd_lblk_latched;
    logic wr_was_logical, rd_was_logical;
    logic wr_hit_close, rd_hit_close;

    // Control Registers
    logic [31:0] reg_ctrl, reg_tier_split, reg_mode;
    logic [71:0] reg_manual_mm2s_cmd, reg_manual_s2mm_cmd;
    logic [31:0] reg_promote_count, reg_demote_count, reg_status;
    logic [7:0]  last_mm2s_sts, last_s2mm_sts;
    logic reg_scratch_in_far, waiting_mm2s_sts, waiting_s2mm_sts;

    // Eviction and Migration Trackers
    logic [SLOT_W-1:0] rr_victim_ptr;
    logic relocation_pending;
    logic [LBLK_W-1:0] pending_logical_blk, mig_hot_logical, mig_victim_logical;
    logic [SLOT_W-1:0] mig_hot_far_slot, mig_victim_close_slot, last_victim_slot;

    // Initialization Logic
    logic init_active;
    logic [LBLK_W:0] init_ctr;
    logic [SLOT_W-1:0] init_cidx, init_fidx;

    // --- BRAM Port A (Shared Write/Migration/Init) ---
    logic ram_we_a;
    logic [LBLK_W-1:0] ram_addr_a;
    logic ram_din_in_close;
    logic [SLOT_W-1:0] ram_din_slot;
    logic ram_dout_in_close_a;
    logic [SLOT_W-1:0] ram_dout_slot_a;

    // --- BRAM Port B (Dedicated Read Channel) ---
    logic [LBLK_W-1:0] ram_addr_b;
    logic ram_dout_in_close_b;
    logic [SLOT_W-1:0] ram_dout_slot_b;

    // --- Auxiliary BRAM Ports ---
    logic close_slot_we;
    logic [SLOT_W-1:0] close_slot_addr;
    logic [LBLK_W-1:0] close_slot_din;
    logic [LBLK_W-1:0] close_slot_dout;

    logic far_slot_we;
    logic [SLOT_W-1:0] far_slot_addr;
    logic [LBLK_W-1:0] far_slot_din;

    // Helper Functions
    function automatic logic is_ctrl_addr(input logic [31:0] addr);
        return ((addr & CTRL_ADDR_MASK) == CTRL_BASE_ADDR);
    endfunction

    function automatic logic [31:0] close_usable_blocks(input logic scratch_in_far);
        return (scratch_in_far) ? TIER0_BLOCKS : TIER0_BLOCKS - 1;
    endfunction

    function automatic logic [SLOT_W-1:0] close_scratch_slot;
        return SLOT_W'(TIER0_BLOCKS - 1);
    endfunction

    function automatic logic [SLOT_W-1:0] far_scratch_slot;
        return SLOT_W'(TIER1_BLOCKS - 1);
    endfunction

    function automatic logic is_logical_addr(input logic [31:0] addr);
        return (addr >= LOGICAL_BASE_ADDR) && (addr < (LOGICAL_BASE_ADDR + LOGICAL_BYTES_EXPOSED));
    endfunction

    function automatic logic [LBLK_W-1:0] logical_block_idx(input logic [31:0] addr);
        return (addr - LOGICAL_BASE_ADDR) >> BLOCK_LSB;
    endfunction

    function automatic logic [BLOCK_LSB-1:0] logical_offset(input logic [31:0] addr);
        return addr[BLOCK_LSB-1:0];
    endfunction

    function automatic logic [71:0] mk_datamover_cmd(input logic [31:0] src_addr, input logic [22:0] btt);
        logic [71:0] cmd = '0;
        cmd[22:0] = btt;
        cmd[23] = 1'b1;
        cmd[30] = 1'b1;
        cmd[63:32] = src_addr;
        return cmd;
    endfunction

    function automatic logic [31:0] tier0_slot_phys(input logic [SLOT_W-1:0] slot_idx);
        return TIER0_PHYS_BASE + ({24'd0, slot_idx} << BLOCK_LSB);
    endfunction

    function automatic logic [31:0] tier1_slot_phys(input logic [SLOT_W-1:0] slot_idx);
        return TIER1_PHYS_BASE + ({24'd0, slot_idx} << BLOCK_LSB);
    endfunction

    function automatic logic blocked_by_relocation(input logic [31:0] addr);
        logic [LBLK_W-1:0] bidx;
        begin
            blocked_by_relocation = 1'b0;
            if (mig_state != MIG_IDLE) begin
                if (reg_mode[1]) blocked_by_relocation = 1'b1; 
                else if (is_logical_addr(addr)) begin
                    bidx = logical_block_idx(addr);
                    blocked_by_relocation = (bidx == mig_hot_logical) || (bidx == mig_victim_logical) || (bidx == pending_logical_blk);
                end
            end else if (relocation_pending) begin
                if (reg_mode[1]) blocked_by_relocation = 1'b1;
                else if (is_logical_addr(addr)) begin
                    bidx = logical_block_idx(addr);
                    blocked_by_relocation = (bidx == pending_logical_blk);
                end
            end
        end
    endfunction

    // --------------------------------------------------------
    // Muxing and BRAM Instantiation 
    // --------------------------------------------------------
    assign ram_addr_b = (rd_state == RD_IDLE) ? logical_block_idx(S_AXI_ARADDR) : rd_lblk_latched;

    always_comb begin
        ram_we_a = 1'b0; ram_din_in_close = 1'b0; ram_din_slot = '0;
        ram_addr_a = wr_lblk_latched; // Safely latched for the lookup phase

        close_slot_we = 1'b0; close_slot_din = '0;
        close_slot_addr = rr_victim_ptr; // Default for Victim Lookup
        
        far_slot_we = 1'b0; far_slot_addr = '0; far_slot_din = '0;

        if (init_active) begin
            ram_we_a = 1'b1;
            ram_addr_a = init_ctr[LBLK_W-1:0];
            ram_din_in_close = (init_ctr < close_usable_blocks(reg_scratch_in_far));
            ram_din_slot = (init_ctr < close_usable_blocks(reg_scratch_in_far)) ? init_cidx : init_fidx;

            if (init_ctr < close_usable_blocks(reg_scratch_in_far)) begin
                close_slot_we = 1'b1;
                close_slot_addr = init_cidx;
                close_slot_din = init_ctr[LBLK_W-1:0];
            end else begin
                far_slot_we = 1'b1;
                far_slot_addr = init_fidx;
                far_slot_din = init_ctr[LBLK_W-1:0];
            end

        end else if (mig_state == MIG_IDLE && relocation_pending) begin
            ram_addr_a = pending_logical_blk; // Fetch Far slot mapping

        end else if (mig_state == MIG_COMMIT_1) begin
            ram_we_a = 1'b1; ram_addr_a = mig_hot_logical;
            ram_din_in_close = 1'b1; ram_din_slot = mig_victim_close_slot;
            close_slot_we = 1'b1; close_slot_addr = mig_victim_close_slot;
            close_slot_din = mig_hot_logical;

        end else if (mig_state == MIG_COMMIT_2) begin
            ram_we_a = 1'b1; ram_addr_a = mig_victim_logical;
            ram_din_in_close = 1'b0; ram_din_slot = mig_hot_far_slot;
            far_slot_we = 1'b1; far_slot_addr = mig_hot_far_slot;
            far_slot_din = mig_victim_logical;
        end
    end

    // The Physical Memories
    always_ff @(posedge aclk) begin
        if (ram_we_a) begin
            logical_in_close[ram_addr_a] <= ram_din_in_close;
            logical_slot[ram_addr_a] <= ram_din_slot;
        end
        ram_dout_in_close_a <= logical_in_close[ram_addr_a];
        ram_dout_slot_a <= logical_slot[ram_addr_a];

        ram_dout_in_close_b <= logical_in_close[ram_addr_b];
        ram_dout_slot_b <= logical_slot[ram_addr_b];

        if (close_slot_we) close_slot_logical[close_slot_addr] <= close_slot_din;
        close_slot_dout <= close_slot_logical[close_slot_addr];

        if (far_slot_we) far_slot_logical[far_slot_addr] <= far_slot_din;
    end

    // --------------------------------------------------------
    // Main Controller Logic
    // --------------------------------------------------------
    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            // Clear interfaces
            S_AXI_AWREADY <= 1'b0; S_AXI_WREADY <= 1'b0; S_AXI_BVALID <= 1'b0;
            S_AXI_ARREADY <= 1'b0; S_AXI_RVALID <= 1'b0; M_AXI_AWVALID <= 1'b0; 
            M_AXI_WVALID <= 1'b0;  M_AXI_BREADY <= 1'b0; M_AXI_ARVALID <= 1'b0; 
            M_AXI_RREADY <= 1'b0;
            M_AXI_AWBURST <= 2'b01; M_AXI_AWSIZE <= AXI_SIZE[2:0];
            M_AXI_ARBURST <= 2'b01; M_AXI_ARSIZE <= AXI_SIZE[2:0];
            M_AXIS_MM2S_CMD_TVALID <= 1'b0; M_AXIS_S2MM_CMD_TVALID <= 1'b0;
            S_AXIS_MM2S_STS_TREADY <= 1'b1; S_AXIS_S2MM_STS_TREADY <= 1'b1;

            wr_state <= WR_IDLE; rd_state <= RD_IDLE; mig_state <= MIG_IDLE;
            aw_received <= 1'b0; w_received <= 1'b0;
            reg_ctrl <= REG_CTRL_RESET_VALUE; reg_mode <= REG_MODE_RESET_VALUE;
            reg_scratch_in_far <= SCRATCH_DEFAULT_IN_FAR;
            relocation_pending <= 1'b0; rr_victim_ptr <= '0;
            
            // Start Init Engine
            init_active <= 1'b1; init_ctr <= '0; init_cidx <= '0; init_fidx <= '0;
        end else begin
            
            // Initialization State Machine
            if (init_active) begin
                if (init_ctr < close_usable_blocks(reg_scratch_in_far)) init_cidx <= init_cidx + 1;
                else init_fidx <= init_fidx + 1;

                init_ctr <= init_ctr + 1;
                if (init_ctr == TOTAL_LOGICAL_BLOCKS - 1) init_active <= 1'b0;
            end

            M_AXIS_MM2S_CMD_TVALID <= 1'b0;
            M_AXIS_S2MM_CMD_TVALID <= 1'b0;

            if (S_AXIS_MM2S_STS_TVALID) begin last_mm2s_sts <= S_AXIS_MM2S_STS_TDATA; waiting_mm2s_sts <= 1'b0; end
            if (S_AXIS_S2MM_STS_TVALID) begin last_s2mm_sts <= S_AXIS_S2MM_STS_TDATA; waiting_s2mm_sts <= 1'b0; end

            // Independent AXI Write Latching (Decouples AW and W channels)
            if (S_AXI_AWVALID && S_AXI_AWREADY) begin
                wr_addr_latched <= S_AXI_AWADDR;
                wr_lblk_latched <= logical_block_idx(S_AXI_AWADDR);
                aw_received <= 1'b1;
            end
            if (S_AXI_WVALID && S_AXI_WREADY) begin
                wr_data_latched <= S_AXI_WDATA;
                wr_strb_latched <= S_AXI_WSTRB;
                w_received <= 1'b1;
            end

            // --- Write Channel ---
            case (wr_state)
                WR_IDLE: begin
                    // Assert ready signals if we haven't already latched that channel
                    S_AXI_AWREADY <= !init_active && !aw_received && !blocked_by_relocation(S_AXI_AWADDR);
                    S_AXI_WREADY  <= !init_active && !w_received;

                    // Proceed only when BOTH channels have successfully arrived
                    if (aw_received && w_received) begin
                        aw_received <= 1'b0; // Reset flags for next transaction
                        w_received <= 1'b0;
                        
                        if (is_ctrl_addr(wr_addr_latched)) begin
                            case (wr_addr_latched)
                                CTRL_BASE_ADDR: begin
                                    reg_ctrl <= wr_data_latched;
                                    if (wr_data_latched[9]) begin
                                        reg_scratch_in_far <= wr_data_latched[8];
                                        relocation_pending <= 1'b0; mig_state <= MIG_IDLE;
                                        init_active <= 1'b1; init_ctr <= '0; init_cidx <= '0; init_fidx <= '0; rr_victim_ptr <= '0;
                                    end
                                end
                                CTRL_TIER_SPLIT_ADDR: reg_tier_split <= wr_data_latched;
                                CTRL_MODE_ADDR:       reg_mode <= wr_data_latched;
                                CTRL_MM2S_LO_ADDR:    reg_manual_mm2s_cmd[31:0] <= wr_data_latched;
                                CTRL_MM2S_HI_ADDR:    reg_manual_mm2s_cmd[63:32] <= wr_data_latched;
                                CTRL_S2MM_LO_ADDR:    reg_manual_s2mm_cmd[31:0] <= wr_data_latched;
                                CTRL_S2MM_HI_ADDR:    reg_manual_s2mm_cmd[63:32] <= wr_data_latched;
                            endcase
                            
                            if (wr_addr_latched == CTRL_BASE_ADDR && wr_data_latched[1] && M_AXIS_MM2S_CMD_TREADY) begin
                                M_AXIS_MM2S_CMD_TDATA <= reg_manual_mm2s_cmd;
                                M_AXIS_MM2S_CMD_TVALID <= 1'b1;
                                reg_status[1] <= 1'b1; waiting_mm2s_sts <= 1'b1;
                            end
                            if (wr_addr_latched == CTRL_BASE_ADDR && wr_data_latched[2] && M_AXIS_S2MM_CMD_TREADY) begin
                                M_AXIS_S2MM_CMD_TDATA <= reg_manual_s2mm_cmd;
                                M_AXIS_S2MM_CMD_TVALID <= 1'b1;
                                reg_status[2] <= 1'b1; waiting_s2mm_sts <= 1'b1;
                            end

                            S_AXI_BRESP <= 2'b00;
                            S_AXI_BVALID <= 1'b1;
                            wr_state <= WR_SEND_B;

                        end else if (is_logical_addr(wr_addr_latched)) begin
                            wr_was_logical <= 1'b1;
                            wr_state <= WR_LOOKUP; // Enter lookup state to handle BRAM 1-cycle latency
                        end else begin
                            wr_was_logical <= 1'b0;
                            S_AXI_BRESP <= 2'b11;
                            S_AXI_BVALID <= 1'b1;
                            wr_state <= WR_SEND_B;
                        end
                    end
                end

                WR_LOOKUP: begin
                    wr_state <= WR_ISSUE_AXI; // BRAM data clocked in, ready next cycle
                end

                WR_ISSUE_AXI: begin
                    wr_hit_close <= ram_dout_in_close_a; // Latch hit/miss for eviction check
                    M_AXI_AWADDR <= (ram_dout_in_close_a) ? 
                                    tier0_slot_phys(ram_dout_slot_a) + {24'd0, logical_offset(wr_addr_latched)} :
                                    tier1_slot_phys(ram_dout_slot_a) + {24'd0, logical_offset(wr_addr_latched)};
                    M_AXI_AWVALID <= 1'b1;
                    M_AXI_WDATA   <= wr_data_latched;
                    M_AXI_WSTRB   <= wr_strb_latched;
                    M_AXI_WLAST   <= 1'b1;
                    M_AXI_WVALID  <= 1'b1;
                    wr_state <= WR_WAIT_B;
                end

                WR_WAIT_B: begin
                    if (M_AXI_AWVALID && M_AXI_AWREADY) M_AXI_AWVALID <= 1'b0;
                    if (M_AXI_WVALID && M_AXI_WREADY) begin M_AXI_WVALID <= 1'b0; M_AXI_WLAST <= 1'b0; end
                    if (!M_AXI_AWVALID && !M_AXI_WVALID) M_AXI_BREADY <= 1'b1;

                    if (M_AXI_BVALID && M_AXI_BREADY) begin
                        M_AXI_BREADY <= 1'b0;
                        S_AXI_BRESP <= M_AXI_BRESP;
                        S_AXI_BVALID <= 1'b1;
                        if (reg_ctrl[0] && wr_was_logical && !wr_hit_close && !relocation_pending && (mig_state == MIG_IDLE)) begin
                            relocation_pending <= 1'b1;
                            pending_logical_blk <= wr_lblk_latched;
                        end
                        wr_state <= WR_SEND_B;
                    end
                end

                WR_SEND_B: begin
                    if (S_AXI_BVALID && S_AXI_BREADY) begin
                        S_AXI_BVALID <= 1'b0;
                        wr_state <= WR_IDLE;
                    end
                end
            endcase

            // --- Read Channel ---
            case (rd_state)
                RD_IDLE: begin
                    if (!init_active && S_AXI_ARVALID && !blocked_by_relocation(S_AXI_ARADDR)) begin
                        rd_addr_latched <= S_AXI_ARADDR;
                        S_AXI_ARREADY <= 1'b0;
                        if (is_ctrl_addr(S_AXI_ARADDR)) begin
                            S_AXI_RDATA <= 32'h0; // Control Read Mux logic omitted for brevity
                            S_AXI_RRESP <= 2'b00;
                            S_AXI_RVALID <= 1'b1;
                            rd_state <= RD_SEND_R;
                        end else if (is_logical_addr(S_AXI_ARADDR)) begin
                            rd_was_logical <= 1'b1;
                            rd_lblk_latched <= logical_block_idx(S_AXI_ARADDR);
                            rd_state <= RD_LOOKUP;
                        end else begin
                            rd_was_logical <= 1'b0;
                            S_AXI_RRESP <= 2'b11; S_AXI_RVALID <= 1'b1;
                            rd_state <= RD_SEND_R;
                        end
                    end else begin
                        S_AXI_ARREADY <= !init_active && !blocked_by_relocation(S_AXI_ARADDR);
                    end
                end

                RD_LOOKUP: begin
                    rd_state <= RD_ISSUE_AXI;
                end

                RD_ISSUE_AXI: begin
                    rd_hit_close <= ram_dout_in_close_b;
                    M_AXI_ARADDR <= (ram_dout_in_close_b) ? 
                                    tier0_slot_phys(ram_dout_slot_b) + {24'd0, logical_offset(rd_addr_latched)} :
                                    tier1_slot_phys(ram_dout_slot_b) + {24'd0, logical_offset(rd_addr_latched)};
                    M_AXI_ARVALID <= 1'b1;
                    rd_state <= RD_WAIT_R;
                end

                RD_WAIT_R: begin
                    if (M_AXI_ARVALID && M_AXI_ARREADY) M_AXI_ARVALID <= 1'b0;
                    M_AXI_RREADY <= (!S_AXI_RVALID || S_AXI_RREADY); // Stream pass-through
                    
                    if (M_AXI_RVALID && M_AXI_RREADY) begin
                        S_AXI_RDATA <= M_AXI_RDATA;
                        S_AXI_RRESP <= M_AXI_RRESP;
                        S_AXI_RVALID <= 1'b1;
                        if (M_AXI_RLAST) begin
                            M_AXI_RREADY <= 1'b0;
                            rd_state <= RD_SEND_R;
                            if (reg_ctrl[0] && rd_was_logical && !rd_hit_close && !relocation_pending && (mig_state == MIG_IDLE)) begin
                                relocation_pending <= 1'b1;
                                pending_logical_blk <= rd_lblk_latched;
                            end
                        end
                    end
                end

                RD_SEND_R: begin
                    if (S_AXI_RVALID && S_AXI_RREADY) begin
                        S_AXI_RVALID <= 1'b0;
                        rd_state <= RD_IDLE;
                    end
                end
            endcase

            // --- Migration Engine ---
            case (mig_state)
                MIG_IDLE: begin
                    if (!init_active && relocation_pending) begin
                        relocation_pending <= 1'b0;
                        mig_hot_logical <= pending_logical_blk;
                        mig_victim_close_slot <= rr_victim_ptr;
                        mig_state <= MIG_LOOKUP;
                    end
                end

                MIG_LOOKUP: begin
                    // BRAM lookup for victim block logical ID and hot block far slot
                    mig_victim_logical <= close_slot_dout;
                    mig_hot_far_slot <= ram_dout_slot_a;
                    last_victim_slot <= mig_victim_close_slot;

                    // Increment RR pointer
                    if (rr_victim_ptr >= close_usable_blocks(reg_scratch_in_far) - 1) rr_victim_ptr <= '0;
                    else rr_victim_ptr <= rr_victim_ptr + 1;

                    mig_state <= MIG_COPY_1;
                end

                MIG_COPY_1: begin
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

                MIG_WAIT_1: if (!waiting_mm2s_sts && !waiting_s2mm_sts) mig_state <= MIG_COPY_2;
                
                MIG_COPY_2: begin
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
                
                MIG_WAIT_2: if (!waiting_mm2s_sts && !waiting_s2mm_sts) mig_state <= MIG_COPY_3;
                
                MIG_COPY_3: begin
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
                        mig_state <= MIG_COMMIT_1;
                    end
                end

                MIG_COMMIT_1: mig_state <= MIG_COMMIT_2; // Writes hot block to BRAM
                MIG_COMMIT_2: mig_state <= MIG_IDLE;     // Writes victim block to BRAM
            endcase
        end
    end
endmodule