`timescale 1ns / 1ps

module tmc_controller_tb;
    localparam int ADDR_W = 32;
    localparam int DATA_W = 32;
    localparam int BLOCK_BYTES = 256;
    localparam int BLOCK_WORDS = BLOCK_BYTES / 4;
    localparam logic [31:0] CTRL_BASE = 32'hFFFF_0000;
    localparam logic [31:0] LOGICAL_BASE = 32'hC000_0000;
    localparam logic [31:0] LOGICAL_SPLIT_FAR_SCRATCH = 32'hC001_0000;
    localparam logic [31:0] LOGICAL_SPLIT_CLOSE_SCRATCH = 32'hC000_FF00;
    localparam logic [31:0] TIER0_BASE = 32'hC000_0000;
    localparam logic [31:0] TIER1_BASE = 32'hC001_0000;
    localparam logic [31:0] TIER0_SCRATCH_ADDR = 32'hC000_FF00;
    localparam logic [31:0] TIER1_SCRATCH_ADDR = 32'hC001_FF00;

    logic aclk;
    logic aresetn;

    logic [ADDR_W-1:0] S_AXI_AWADDR;
    logic [2:0] S_AXI_AWPROT;
    logic S_AXI_AWVALID;
    logic S_AXI_AWREADY;
    logic [DATA_W-1:0] S_AXI_WDATA;
    logic [(DATA_W/8)-1:0] S_AXI_WSTRB;
    logic S_AXI_WVALID;
    logic S_AXI_WREADY;
    logic [1:0] S_AXI_BRESP;
    logic S_AXI_BVALID;
    logic S_AXI_BREADY;
    logic [ADDR_W-1:0] S_AXI_ARADDR;
    logic [2:0] S_AXI_ARPROT;
    logic S_AXI_ARVALID;
    logic S_AXI_ARREADY;
    logic [DATA_W-1:0] S_AXI_RDATA;
    logic [1:0] S_AXI_RRESP;
    logic S_AXI_RVALID;
    logic S_AXI_RREADY;

    logic [ADDR_W-1:0] M_AXI_AWADDR;
    logic [7:0] M_AXI_AWLEN;
    logic [2:0] M_AXI_AWSIZE;
    logic [1:0] M_AXI_AWBURST;
    logic M_AXI_AWVALID;
    logic M_AXI_AWREADY;
    logic [DATA_W-1:0] M_AXI_WDATA;
    logic [(DATA_W/8)-1:0] M_AXI_WSTRB;
    logic M_AXI_WLAST;
    logic M_AXI_WVALID;
    logic M_AXI_WREADY;
    logic [1:0] M_AXI_BRESP;
    logic M_AXI_BVALID;
    logic M_AXI_BREADY;
    logic [ADDR_W-1:0] M_AXI_ARADDR;
    logic [7:0] M_AXI_ARLEN;
    logic [2:0] M_AXI_ARSIZE;
    logic [1:0] M_AXI_ARBURST;
    logic M_AXI_ARVALID;
    logic M_AXI_ARREADY;
    logic [DATA_W-1:0] M_AXI_RDATA;
    logic [1:0] M_AXI_RRESP;
    logic M_AXI_RLAST;
    logic M_AXI_RVALID;
    logic M_AXI_RREADY;

    logic [71:0] M_AXIS_MM2S_CMD_TDATA;
    logic M_AXIS_MM2S_CMD_TVALID;
    logic M_AXIS_MM2S_CMD_TREADY;
    logic [71:0] M_AXIS_S2MM_CMD_TDATA;
    logic M_AXIS_S2MM_CMD_TVALID;
    logic M_AXIS_S2MM_CMD_TREADY;
    logic [7:0] S_AXIS_MM2S_STS_TDATA;
    logic S_AXIS_MM2S_STS_TVALID;
    logic S_AXIS_MM2S_STS_TREADY;
    logic [7:0] S_AXIS_S2MM_STS_TDATA;
    logic S_AXIS_S2MM_STS_TVALID;
    logic S_AXIS_S2MM_STS_TREADY;

    logic [31:0] tier0_mem [0:16383];
    logic [31:0] tier1_mem [0:16383];
    logic [31:0] aw_addr_hold;
    logic aw_seen;
    logic w_seen;
    logic [31:0] w_data_hold;
    logic [31:0] rdata;
    logic [1:0]  resp;
    logic [31:0] promote_count;
    logic [31:0] demote_count;
    logic [31:0] bresp_count;

    logic mm2s_cmd_seen;
    logic s2mm_cmd_seen;
    logic [31:0] mm2s_cmd_addr;
    logic [31:0] s2mm_cmd_addr;
    logic [31:0] last_copy_src;
    logic [31:0] last_copy_dst;
    logic [31:0] dm_copy_count;
    logic [31:0] status_latency_cfg;
    logic [31:0] mm2s_status_countdown;
    logic [31:0] s2mm_status_countdown;

    tmc_controller #(
        .C_AXI_ADDR_WIDTH(ADDR_W),
        .C_AXI_DATA_WIDTH(DATA_W)
    ) dut (
        .aclk(aclk),
        .aresetn(aresetn),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWPROT(S_AXI_AWPROT),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_WDATA(S_AXI_WDATA),
        .S_AXI_WSTRB(S_AXI_WSTRB),
        .S_AXI_WVALID(S_AXI_WVALID),
        .S_AXI_WREADY(S_AXI_WREADY),
        .S_AXI_BRESP(S_AXI_BRESP),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARPROT(S_AXI_ARPROT),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RRESP(S_AXI_RRESP),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_RREADY(S_AXI_RREADY),
        .M_AXI_AWADDR(M_AXI_AWADDR),
        .M_AXI_AWLEN(M_AXI_AWLEN),
        .M_AXI_AWSIZE(M_AXI_AWSIZE),
        .M_AXI_AWBURST(M_AXI_AWBURST),
        .M_AXI_AWVALID(M_AXI_AWVALID),
        .M_AXI_AWREADY(M_AXI_AWREADY),
        .M_AXI_WDATA(M_AXI_WDATA),
        .M_AXI_WSTRB(M_AXI_WSTRB),
        .M_AXI_WLAST(M_AXI_WLAST),
        .M_AXI_WVALID(M_AXI_WVALID),
        .M_AXI_WREADY(M_AXI_WREADY),
        .M_AXI_BRESP(M_AXI_BRESP),
        .M_AXI_BVALID(M_AXI_BVALID),
        .M_AXI_BREADY(M_AXI_BREADY),
        .M_AXI_ARADDR(M_AXI_ARADDR),
        .M_AXI_ARLEN(M_AXI_ARLEN),
        .M_AXI_ARSIZE(M_AXI_ARSIZE),
        .M_AXI_ARBURST(M_AXI_ARBURST),
        .M_AXI_ARVALID(M_AXI_ARVALID),
        .M_AXI_ARREADY(M_AXI_ARREADY),
        .M_AXI_RDATA(M_AXI_RDATA),
        .M_AXI_RRESP(M_AXI_RRESP),
        .M_AXI_RLAST(M_AXI_RLAST),
        .M_AXI_RVALID(M_AXI_RVALID),
        .M_AXI_RREADY(M_AXI_RREADY),
        .M_AXIS_MM2S_CMD_TDATA(M_AXIS_MM2S_CMD_TDATA),
        .M_AXIS_MM2S_CMD_TVALID(M_AXIS_MM2S_CMD_TVALID),
        .M_AXIS_MM2S_CMD_TREADY(M_AXIS_MM2S_CMD_TREADY),
        .M_AXIS_S2MM_CMD_TDATA(M_AXIS_S2MM_CMD_TDATA),
        .M_AXIS_S2MM_CMD_TVALID(M_AXIS_S2MM_CMD_TVALID),
        .M_AXIS_S2MM_CMD_TREADY(M_AXIS_S2MM_CMD_TREADY),
        .S_AXIS_MM2S_STS_TDATA(S_AXIS_MM2S_STS_TDATA),
        .S_AXIS_MM2S_STS_TVALID(S_AXIS_MM2S_STS_TVALID),
        .S_AXIS_MM2S_STS_TREADY(S_AXIS_MM2S_STS_TREADY),
        .S_AXIS_S2MM_STS_TDATA(S_AXIS_S2MM_STS_TDATA),
        .S_AXIS_S2MM_STS_TVALID(S_AXIS_S2MM_STS_TVALID),
        .S_AXIS_S2MM_STS_TREADY(S_AXIS_S2MM_STS_TREADY)
    );

    initial aclk = 1'b0;
    always #5 aclk = ~aclk;

    function automatic logic [31:0] mem_read_word(input logic [31:0] addr);
        if ((addr >= TIER0_BASE) && (addr < TIER0_BASE + 32'h10000)) begin
            mem_read_word = tier0_mem[(addr - TIER0_BASE) >> 2];
        end else if ((addr >= TIER1_BASE) && (addr < TIER1_BASE + 32'h10000)) begin
            mem_read_word = tier1_mem[(addr - TIER1_BASE) >> 2];
        end else begin
            mem_read_word = 32'hDEAD_0000;
        end
    endfunction

    task automatic mem_write_word(input logic [31:0] addr, input logic [31:0] data);
        begin
            if ((addr >= TIER0_BASE) && (addr < TIER0_BASE + 32'h10000)) begin
                tier0_mem[(addr - TIER0_BASE) >> 2] = data;
            end else if ((addr >= TIER1_BASE) && (addr < TIER1_BASE + 32'h10000)) begin
                tier1_mem[(addr - TIER1_BASE) >> 2] = data;
            end
        end
    endtask

    task automatic copy_block(input logic [31:0] src_addr, input logic [31:0] dst_addr);
        int w;
        logic [31:0] s;
        logic [31:0] d;
        begin
            for (w = 0; w < BLOCK_WORDS; w = w + 1) begin
                s = src_addr + (w * 4);
                d = dst_addr + (w * 4);
                mem_write_word(d, mem_read_word(s));
            end
        end
    endtask

    task automatic check_equal(input logic [31:0] got, input logic [31:0] exp, input string msg);
        begin
            if (got !== exp) begin
                $error("%s got=0x%08x exp=0x%08x", msg, got, exp);
                $fatal;
            end
        end
    endtask

    task automatic check_true(input logic cond, input string msg);
        begin
            if (!cond) begin
                $error("%s", msg);
                $fatal;
            end
        end
    endtask

    task automatic axi_lite_write(input logic [31:0] addr, input logic [31:0] data, output logic [1:0] bresp_o);
        int timeout;
        begin
            @(posedge aclk);
            S_AXI_AWADDR = addr;
            S_AXI_AWVALID = 1'b1;
            S_AXI_WDATA = data;
            S_AXI_WSTRB = 4'hF;
            S_AXI_WVALID = 1'b1;
            S_AXI_BREADY = 1'b1;
            timeout = 0;
            while (!(S_AXI_AWREADY && S_AXI_WREADY)) begin
                @(posedge aclk);
                timeout = timeout + 1;
                if (timeout > 2000) begin
                    $error("AXI write handshake timeout addr=0x%08x", addr);
                    $fatal;
                end
            end
            @(posedge aclk);
            S_AXI_AWVALID = 1'b0;
            S_AXI_WVALID = 1'b0;
            timeout = 0;
            while (!S_AXI_BVALID) begin
                @(posedge aclk);
                timeout = timeout + 1;
                if (timeout > 2000) begin
                    $error("AXI write response timeout addr=0x%08x", addr);
                    $fatal;
                end
            end
            bresp_o = S_AXI_BRESP;
            @(posedge aclk);
            S_AXI_BREADY = 1'b0;
        end
    endtask

    task automatic axi_lite_read(input logic [31:0] addr, output logic [31:0] data_o, output logic [1:0] rresp_o);
        int timeout;
        begin
            @(posedge aclk);
            S_AXI_ARADDR = addr;
            S_AXI_ARVALID = 1'b1;
            S_AXI_RREADY = 1'b1;
            timeout = 0;
            while (!S_AXI_ARREADY) begin
                @(posedge aclk);
                timeout = timeout + 1;
                if (timeout > 2000) begin
                    $error("AXI read address timeout addr=0x%08x", addr);
                    $fatal;
                end
            end
            @(posedge aclk);
            S_AXI_ARVALID = 1'b0;
            timeout = 0;
            while (!S_AXI_RVALID) begin
                @(posedge aclk);
                timeout = timeout + 1;
                if (timeout > 2000) begin
                    $error("AXI read data timeout addr=0x%08x", addr);
                    $fatal;
                end
            end
            data_o = S_AXI_RDATA;
            rresp_o = S_AXI_RRESP;
            @(posedge aclk);
            S_AXI_RREADY = 1'b0;
        end
    endtask

    task automatic read_ok(input logic [31:0] addr, output logic [31:0] data_o);
        begin
            axi_lite_read(addr, data_o, resp);
            check_equal(resp, 2'b00, "Unexpected RRESP");
        end
    endtask

    task automatic write_ok(input logic [31:0] addr, input logic [31:0] data);
        begin
            axi_lite_write(addr, data, resp);
            check_equal(resp, 2'b00, "Unexpected BRESP");
        end
    endtask

    task automatic wait_promote_increment(input logic [31:0] old_count);
        int timeout;
        begin
            timeout = 0;
            while (1) begin
                read_ok(CTRL_BASE + 32'h0024, promote_count);
                if (promote_count > old_count) begin
                    break;
                end
                timeout = timeout + 1;
                if (timeout > 2000) begin
                    $error("Promotion timeout old=%0d new=%0d", old_count, promote_count);
                    $fatal;
                end
            end
        end
    endtask

    task automatic wait_migration_idle;
        int timeout;
        begin
            timeout = 0;
            while (1) begin
                read_ok(CTRL_BASE + 32'h0004, rdata);
                if (rdata[0] == 1'b0) begin
                    break;
                end
                timeout = timeout + 1;
                if (timeout > 2000) begin
                    $error("Migration idle wait timeout, status=0x%08x", rdata);
                    $fatal;
                end
            end
        end
    endtask

    task automatic wait_migration_idle_signal;
        int timeout;
        begin
            timeout = 0;
            while (dut.mig_state != 3'd0) begin
                @(posedge aclk);
                timeout = timeout + 1;
                if (timeout > 5000) begin
                    $error("Migration signal idle wait timeout");
                    $fatal;
                end
            end
        end
    endtask

    task automatic probe_arready(input logic [31:0] addr, input int cycles, output logic saw_ready);
        int c;
        begin
            saw_ready = 1'b0;
            S_AXI_ARADDR = addr;
            S_AXI_ARVALID = 1'b0;
            S_AXI_RREADY = 1'b0;
            for (c = 0; c < cycles; c = c + 1) begin
                @(posedge aclk);
                if (S_AXI_ARREADY) begin
                    saw_ready = 1'b1;
                end
            end
        end
    endtask

    // Downstream AXI memory model
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            M_AXI_AWREADY <= 1'b1;
            M_AXI_WREADY  <= 1'b1;
            M_AXI_BRESP   <= 2'b00;
            M_AXI_BVALID  <= 1'b0;
            M_AXI_ARREADY <= 1'b1;
            M_AXI_RDATA   <= 32'h0;
            M_AXI_RRESP   <= 2'b00;
            M_AXI_RLAST   <= 1'b0;
            M_AXI_RVALID  <= 1'b0;
            aw_seen <= 1'b0;
            w_seen <= 1'b0;
            aw_addr_hold <= '0;
            w_data_hold <= '0;
            bresp_count <= '0;
        end else begin
            if (M_AXI_AWVALID && M_AXI_AWREADY) begin
                aw_seen <= 1'b1;
                aw_addr_hold <= M_AXI_AWADDR;
            end
            if (M_AXI_WVALID && M_AXI_WREADY) begin
                w_seen <= 1'b1;
                w_data_hold <= M_AXI_WDATA;
            end
            if (aw_seen && w_seen) begin
                mem_write_word(aw_addr_hold, w_data_hold);
                M_AXI_BVALID <= 1'b1;
                aw_seen <= 1'b0;
                w_seen <= 1'b0;
            end
            if (M_AXI_BVALID && M_AXI_BREADY) begin
                M_AXI_BVALID <= 1'b0;
                bresp_count <= bresp_count + 1'b1;
            end
            if (M_AXI_ARVALID && M_AXI_ARREADY) begin
                M_AXI_RDATA <= mem_read_word(M_AXI_ARADDR);
                M_AXI_RVALID <= 1'b1;
                M_AXI_RLAST <= 1'b1;
            end
            if (M_AXI_RVALID && M_AXI_RREADY) begin
                M_AXI_RVALID <= 1'b0;
                M_AXI_RLAST <= 1'b0;
            end
        end
    end

    // DataMover command + status model with real block copies
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            mm2s_cmd_seen <= 1'b0;
            s2mm_cmd_seen <= 1'b0;
            mm2s_cmd_addr <= '0;
            s2mm_cmd_addr <= '0;
            last_copy_src <= '0;
            last_copy_dst <= '0;
            dm_copy_count <= '0;
            mm2s_status_countdown <= '0;
            s2mm_status_countdown <= '0;
            status_latency_cfg <= 32'd2;
            S_AXIS_MM2S_STS_TVALID <= 1'b0;
            S_AXIS_S2MM_STS_TVALID <= 1'b0;
            S_AXIS_MM2S_STS_TDATA <= 8'h00;
            S_AXIS_S2MM_STS_TDATA <= 8'h00;
        end else begin
            S_AXIS_MM2S_STS_TVALID <= 1'b0;
            S_AXIS_S2MM_STS_TVALID <= 1'b0;

            if (M_AXIS_MM2S_CMD_TVALID && M_AXIS_MM2S_CMD_TREADY) begin
                mm2s_cmd_seen <= 1'b1;
                mm2s_cmd_addr <= M_AXIS_MM2S_CMD_TDATA[63:32];
            end
            if (M_AXIS_S2MM_CMD_TVALID && M_AXIS_S2MM_CMD_TREADY) begin
                s2mm_cmd_seen <= 1'b1;
                s2mm_cmd_addr <= M_AXIS_S2MM_CMD_TDATA[63:32];
            end

            if (mm2s_cmd_seen && s2mm_cmd_seen) begin
                copy_block(mm2s_cmd_addr, s2mm_cmd_addr);
                last_copy_src <= mm2s_cmd_addr;
                last_copy_dst <= s2mm_cmd_addr;
                dm_copy_count <= dm_copy_count + 1'b1;
                mm2s_cmd_seen <= 1'b0;
                s2mm_cmd_seen <= 1'b0;
                mm2s_status_countdown <= status_latency_cfg;
                s2mm_status_countdown <= status_latency_cfg;
            end

            if (mm2s_status_countdown != 0) begin
                mm2s_status_countdown <= mm2s_status_countdown - 1'b1;
                if ((mm2s_status_countdown == 1) && S_AXIS_MM2S_STS_TREADY) begin
                    S_AXIS_MM2S_STS_TVALID <= 1'b1;
                    S_AXIS_MM2S_STS_TDATA <= 8'h80;
                end
            end
            if (s2mm_status_countdown != 0) begin
                s2mm_status_countdown <= s2mm_status_countdown - 1'b1;
                if ((s2mm_status_countdown == 1) && S_AXIS_S2MM_STS_TREADY) begin
                    S_AXIS_S2MM_STS_TVALID <= 1'b1;
                    S_AXIS_S2MM_STS_TDATA <= 8'h40;
                end
            end
        end
    end

    initial begin
        int k;
        logic [31:0] old_promote;
        logic [31:0] old_demote;
        logic saw_ready;

        S_AXI_AWADDR = '0;
        S_AXI_AWPROT = 3'b000;
        S_AXI_AWVALID = 1'b0;
        S_AXI_WDATA = '0;
        S_AXI_WSTRB = 4'h0;
        S_AXI_WVALID = 1'b0;
        S_AXI_BREADY = 1'b0;
        S_AXI_ARADDR = '0;
        S_AXI_ARPROT = 3'b000;
        S_AXI_ARVALID = 1'b0;
        S_AXI_RREADY = 1'b0;
        M_AXIS_MM2S_CMD_TREADY = 1'b1;
        M_AXIS_S2MM_CMD_TREADY = 1'b1;

        for (k = 0; k < 16384; k = k + 1) begin
            tier0_mem[k] = 32'h0;
            tier1_mem[k] = 32'h0;
        end

        aresetn = 1'b0;
        repeat (8) @(posedge aclk);
        aresetn = 1'b1;
        repeat (4) @(posedge aclk);

        // 1) Defaults and control register behavior
        read_ok(CTRL_BASE + 32'h0008, rdata);
        check_equal(rdata, LOGICAL_SPLIT_FAR_SCRATCH, "Default tier split incorrect");
        read_ok(CTRL_BASE + 32'h0004, rdata);
        check_equal(rdata[6], 1'b1, "Default scratch should be in far tier");

        // 2) Basic AXI logical mapping and protocol responses
        write_ok(32'hC000_0020, 32'hAAAA_5555);
        write_ok(LOGICAL_SPLIT_FAR_SCRATCH + 32'h0000_0020, 32'hDEAD_BEEF);
        check_equal(tier0_mem[8], 32'hAAAA_5555, "Tier0 write remap failed");
        check_equal(tier1_mem[8], 32'hDEAD_BEEF, "Tier1 write remap failed");
        read_ok(32'hC000_0020, rdata);
        check_equal(rdata, 32'hAAAA_5555, "Tier0 read remap failed");
        read_ok(LOGICAL_SPLIT_FAR_SCRATCH + 32'h0000_0020, rdata);
        check_equal(rdata, 32'hDEAD_BEEF, "Tier1 read remap failed");

        axi_lite_write(32'hC002_0000, 32'h1234_5678, resp);
        check_equal(resp, 2'b11, "Out-of-range write should return SLVERR");
        axi_lite_read(32'hC002_0000, rdata, resp);
        check_equal(resp, 2'b11, "Out-of-range read should return SLVERR");
        check_equal(rdata, 32'hBAD0_0001, "Out-of-range read data mismatch");

        // 3) Manual DataMover command/status path
        mem_write_word(32'hC001_0100, 32'h1122_3344);
        write_ok(CTRL_BASE + 32'h0010, 32'hC001_0100);
        write_ok(CTRL_BASE + 32'h0014, 32'h0000_0010);
        write_ok(CTRL_BASE + 32'h0018, 32'hC000_0100);
        write_ok(CTRL_BASE + 32'h001C, 32'h0000_0010);
        write_ok(CTRL_BASE + 32'h0000, 32'h0000_0006);
        repeat (12) @(posedge aclk);
        read_ok(CTRL_BASE + 32'h0004, rdata);
        check_true((rdata[2:1] == 2'b11) && (rdata[4:3] == 2'b11), "Manual DataMover status bits missing");
        check_equal(mem_read_word(32'hC000_0100), 32'h1122_3344, "Manual DataMover copy data mismatch");

        // 4) Auto relocation with scratch in far tier + victim policy
        write_ok(CTRL_BASE + 32'h000C, 32'h0000_0000); // non-strict
        write_ok(CTRL_BASE + 32'h0000, 32'h0000_0001); // enable auto
        read_ok(CTRL_BASE + 32'h0024, old_promote);
        read_ok(CTRL_BASE + 32'h0028, old_demote);

        // first far block swaps with close slot0 (least recently allocated)
        mem_write_word(32'hC000_0000, 32'hA0A0_0001); // close slot0 data
        mem_write_word(32'hC001_0000, 32'hB0B0_0001); // far slot0 data
        read_ok(LOGICAL_SPLIT_FAR_SCRATCH, rdata);
        check_equal(rdata, 32'hB0B0_0001, "Far read did not return original far data");
        wait_promote_increment(old_promote);
        wait_migration_idle();
        read_ok(CTRL_BASE + 32'h0028, demote_count);
        check_true(demote_count > old_demote, "Demote counter did not increment");
        check_equal(mem_read_word(32'hC001_0000), 32'hA0A0_0001, "Victim close block not moved to far");
        check_equal(mem_read_word(32'hC000_0000), 32'hB0B0_0001, "Hot far block not moved to close");
        read_ok(LOGICAL_BASE + 32'h0000_0000, rdata);
        check_equal(rdata, 32'hA0A0_0001, "Logical block0 should now map to far slot0");

        // 5) Switch scratch to close memory and verify behavior
        write_ok(CTRL_BASE + 32'h0000, 32'h0000_0201); // bit9 reinit, bit8=0 close scratch, bit0 auto-enable
        read_ok(CTRL_BASE + 32'h0004, rdata);
        check_equal(rdata[6], 1'b0, "Scratch location bit should indicate close tier");
        read_ok(CTRL_BASE + 32'h0008, rdata);
        check_equal(rdata, LOGICAL_SPLIT_CLOSE_SCRATCH, "Tier split incorrect for close-scratch mode");

        mem_write_word(32'hC000_0000, 32'h1111_0001);
        mem_write_word(32'hC001_0000, 32'h2222_0001);
        read_ok(CTRL_BASE + 32'h0024, old_promote);
        read_ok(LOGICAL_SPLIT_CLOSE_SCRATCH, rdata); // first far logical in close-scratch mode
        wait_promote_increment(old_promote);
        wait_migration_idle();
        check_equal(last_copy_src, TIER0_SCRATCH_ADDR, "Final copy source should be close scratch when configured");

        // 6) Strict vs non-strict relocation arbitration behavior
        status_latency_cfg = 32'd20; // keep relocation active long enough to probe
        write_ok(CTRL_BASE + 32'h000C, 32'h0000_0002); // strict mode
        mem_write_word(32'hC001_0200, 32'h3333_0003);
        read_ok(CTRL_BASE + 32'h0024, old_promote);
        read_ok(LOGICAL_SPLIT_CLOSE_SCRATCH + 32'h0000_0100, rdata); // trigger relocation
        wait (dut.mig_state != 3'd0);
        probe_arready(LOGICAL_BASE + 32'h0000_0200, 8, saw_ready);
        check_equal({31'd0, saw_ready}, 32'd0, "Strict mode should stall unrelated accesses during relocation");
        wait_migration_idle_signal();

        write_ok(CTRL_BASE + 32'h000C, 32'h0000_0000); // non-strict mode
        mem_write_word(32'hC001_0300, 32'h4444_0004);
        read_ok(CTRL_BASE + 32'h0024, old_promote);
        read_ok(LOGICAL_SPLIT_CLOSE_SCRATCH + 32'h0000_0200, rdata); // trigger relocation
        wait (dut.mig_state != 3'd0);
        probe_arready(LOGICAL_BASE + 32'h0000_0300, 8, saw_ready);
        check_true(saw_ready, "Non-strict mode should allow unrelated accesses");
        wait_promote_increment(old_promote);
        wait_migration_idle_signal();

        status_latency_cfg = 32'd2;

        $display("tmc_controller_tb PASSED");
        $finish;
    end
endmodule
