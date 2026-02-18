`timescale 1ns / 1ps

module axi_latency_injector # (
    parameter integer C_DATA_WIDTH = 32,
    parameter integer C_ADDR_WIDTH = 32,
    parameter integer C_LATENCY_CYCLES = 50  // Default delay (can be changed in Vivado)
) (
    // -------------------------------------------------------------------------
    // Global Signals
    // -------------------------------------------------------------------------
    input wire  aclk,
    input wire  aresetn, // Active Low Reset

    // -------------------------------------------------------------------------
    // Slave Interface (S_AXI) - Connects UPSTREAM to MicroBlaze/Interconnect
    // -------------------------------------------------------------------------
    // Write Address Channel
    input  wire [C_ADDR_WIDTH-1:0] s_axi_awaddr,
    input  wire                    s_axi_awvalid,
    output wire                    s_axi_awready,
    // Write Data Channel
    input  wire [C_DATA_WIDTH-1:0] s_axi_wdata,
    input  wire [(C_DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input  wire                    s_axi_wvalid,
    output wire                    s_axi_wready,
    // Write Response Channel (Delayed)
    output reg  [1:0]              s_axi_bresp,
    output reg                     s_axi_bvalid,
    input  wire                    s_axi_bready,
    // Read Address Channel
    input  wire [C_ADDR_WIDTH-1:0] s_axi_araddr,
    input  wire                    s_axi_arvalid,
    output wire                    s_axi_arready,
    // Read Data Channel (Delayed)
    output reg  [C_DATA_WIDTH-1:0] s_axi_rdata,
    output reg  [1:0]              s_axi_rresp,
    output reg                     s_axi_rvalid,
    input  wire                    s_axi_rready,

    // -------------------------------------------------------------------------
    // Master Interface (M_AXI) - Connects DOWNSTREAM to Memory/BRAM
    // -------------------------------------------------------------------------
    // Write Address Channel
    output wire [C_ADDR_WIDTH-1:0] m_axi_awaddr,
    output wire                    m_axi_awvalid,
    input  wire                    m_axi_awready,
    // Write Data Channel
    output wire [C_DATA_WIDTH-1:0] m_axi_wdata,
    output wire [(C_DATA_WIDTH/8)-1:0] m_axi_wstrb,
    output wire                    m_axi_wvalid,
    input  wire                    m_axi_wready,
    // Write Response Channel
    input  wire [1:0]              m_axi_bresp,
    input  wire                    m_axi_bvalid,
    output reg                     m_axi_bready,
    // Read Address Channel
    output wire [C_ADDR_WIDTH-1:0] m_axi_araddr,
    output wire                    m_axi_arvalid,
    input  wire                    m_axi_arready,
    // Read Data Channel
    input  wire [C_DATA_WIDTH-1:0] m_axi_rdata,
    input  wire [1:0]              m_axi_rresp,
    input  wire                    m_axi_rvalid,
    output reg                     m_axi_rready
);

    // =========================================================================
    // 1. Combinational Passthroughs (Command Path)
    // =========================================================================
    // We do not delay the request, only the response.
    
    assign m_axi_awaddr  = s_axi_awaddr;
    assign m_axi_awvalid = s_axi_awvalid;
    assign s_axi_awready = m_axi_awready;

    assign m_axi_wdata   = s_axi_wdata;
    assign m_axi_wstrb   = s_axi_wstrb;
    assign m_axi_wvalid  = s_axi_wvalid;
    assign s_axi_wready  = m_axi_wready;

    assign m_axi_araddr  = s_axi_araddr;
    assign m_axi_arvalid = s_axi_arvalid;
    assign s_axi_arready = m_axi_arready;

    // =========================================================================
    // 2. Read Path FSM (Simulating Read Latency)
    // =========================================================================
    localparam R_IDLE    = 2'b00;
    localparam R_COUNT   = 2'b01;
    localparam R_DONE    = 2'b10;

    reg [1:0]                 r_state;
    reg [31:0]                r_timer;
    reg [C_DATA_WIDTH-1:0]    r_data_buf;
    reg [1:0]                 r_resp_buf;

    always @(posedge aclk) begin
        if (!aresetn) begin
            r_state      <= R_IDLE;
            r_timer      <= 0;
            m_axi_rready <= 0;
            s_axi_rvalid <= 0;
            s_axi_rdata  <= 0;
            s_axi_rresp  <= 0;
        end else begin
            case (r_state)
                R_IDLE: begin
                    s_axi_rvalid <= 0;
                    // Always ready to accept data from Real Memory
                    m_axi_rready <= 1'b1;

                    // Capture data when Real Memory provides it
                    if (m_axi_rvalid && m_axi_rready) begin
                        r_data_buf   <= m_axi_rdata;
                        r_resp_buf   <= m_axi_rresp;
                        m_axi_rready <= 0; // Clamp the pipe
                        
                        if (C_LATENCY_CYCLES == 0) begin
                            r_state <= R_DONE; 
                        end else begin
                            r_timer <= 0;
                            r_state <= R_COUNT;
                        end
                    end
                end

                R_COUNT: begin
                    // Hold data in "Far Memory" transit
                    m_axi_rready <= 0; 
                    if (r_timer >= C_LATENCY_CYCLES - 1) begin
                        r_state <= R_DONE;
                    end else begin
                        r_timer <= r_timer + 1;
                    end
                end

                R_DONE: begin
                    // Finally present data to MicroBlaze
                    s_axi_rvalid <= 1'b1;
                    s_axi_rdata  <= r_data_buf;
                    s_axi_rresp  <= r_resp_buf;

                    // Wait for MicroBlaze to accept
                    if (s_axi_rvalid && s_axi_rready) begin
                        s_axi_rvalid <= 0;
                        r_state      <= R_IDLE;
                    end
                end
            endcase
        end
    end

    // =========================================================================
    // 3. Write Response FSM (Simulating Write Ack Latency)
    // =========================================================================
    localparam B_IDLE    = 2'b00;
    localparam B_COUNT   = 2'b01;
    localparam B_DONE    = 2'b10;

    reg [1:0]  b_state;
    reg [31:0] b_timer;
    reg [1:0]  b_resp_buf;

    always @(posedge aclk) begin
        if (!aresetn) begin
            b_state      <= B_IDLE;
            b_timer      <= 0;
            m_axi_bready <= 0;
            s_axi_bvalid <= 0;
            s_axi_bresp  <= 0;
        end else begin
            case (b_state)
                B_IDLE: begin
                    s_axi_bvalid <= 0;
                    m_axi_bready <= 1'b1;

                    if (m_axi_bvalid && m_axi_bready) begin
                        b_resp_buf   <= m_axi_bresp;
                        m_axi_bready <= 0;
                        
                        if (C_LATENCY_CYCLES == 0) begin
                            b_state <= B_DONE;
                        end else begin
                            b_timer <= 0;
                            b_state <= B_COUNT;
                        end
                    end
                end

                B_COUNT: begin
                    m_axi_bready <= 0;
                    if (b_timer >= C_LATENCY_CYCLES - 1) begin
                        b_state <= B_DONE;
                    end else begin
                        b_timer <= b_timer + 1;
                    end
                end

                B_DONE: begin
                    s_axi_bvalid <= 1'b1;
                    s_axi_bresp  <= b_resp_buf;

                    if (s_axi_bvalid && s_axi_bready) begin
                        s_axi_bvalid <= 0;
                        b_state      <= B_IDLE;
                    end
                end
            endcase
        end
    end

endmodule