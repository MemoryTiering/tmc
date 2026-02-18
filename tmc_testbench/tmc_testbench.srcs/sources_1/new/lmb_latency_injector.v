`timescale 1ns / 1ps

module lmb_latency_injector #(
    parameter integer LATENCY_CYCLES = 100 // Default to 100 for clear visibility
)(
    input  wire LMB_Clk,
    input  wire LMB_Rst,

    // -----------------------------------------------------------------
    // Slave Interface (Connects to CPU DLMB)
    // -----------------------------------------------------------------
    input  wire [0:31]  Sl_LMB_Addr,
    input  wire         Sl_LMB_AddrStrobe,
    input  wire         Sl_LMB_ReadStrobe,
    input  wire         Sl_LMB_WriteStrobe,
    input  wire [0:31]  Sl_LMB_WriteData,
    input  wire [0:3]   Sl_LMB_BE,
    
    output wire [0:31]  Sl_LMB_ReadData,
    output reg          Sl_LMB_Ready,      // We control this!
    output wire         Sl_LMB_UE,
    output wire         Sl_LMB_CE,
    output wire         Sl_LMB_Wait,

    // -----------------------------------------------------------------
    // Master Interface (Connects to BRAM Controller)
    // -----------------------------------------------------------------
    output wire [0:31]  M_LMB_Addr,
    output wire         M_LMB_AddrStrobe,
    output wire         M_LMB_ReadStrobe,
    output wire         M_LMB_WriteStrobe,
    output wire [0:31]  M_LMB_WriteData,
    output wire [0:3]   M_LMB_BE,

    input  wire [0:31]  M_LMB_ReadData,
    input  wire         M_LMB_Ready,
    input  wire         M_LMB_UE,
    input  wire         M_LMB_CE,
    input  wire         M_LMB_Wait
);

    // -----------------------------------------------------------------
    // 1. Transparent Passthrough
    // -----------------------------------------------------------------
    assign M_LMB_Addr         = Sl_LMB_Addr;
    assign M_LMB_AddrStrobe   = Sl_LMB_AddrStrobe;
    assign M_LMB_ReadStrobe   = Sl_LMB_ReadStrobe;
    assign M_LMB_WriteStrobe  = Sl_LMB_WriteStrobe;
    assign M_LMB_WriteData    = Sl_LMB_WriteData;
    assign M_LMB_BE           = Sl_LMB_BE;

    assign Sl_LMB_ReadData    = M_LMB_ReadData;
    assign Sl_LMB_UE          = M_LMB_UE;
    assign Sl_LMB_CE          = M_LMB_CE;
    assign Sl_LMB_Wait        = M_LMB_Wait;

    // -----------------------------------------------------------------
    // 2. The Delay Logic (No Address Check)
    // -----------------------------------------------------------------
    localparam [1:0] IDLE  = 2'b00;
    localparam [1:0] COUNT = 2'b01;
    localparam [1:0] DONE  = 2'b10;

    reg [1:0]  state;
    reg [31:0] counter;
    reg        bram_latched; 

    always @(posedge LMB_Clk or posedge LMB_Rst) begin
        if (LMB_Rst) begin
            state <= IDLE;
            counter <= 0;
            bram_latched <= 0;
        end else begin
            case (state)
                IDLE: begin
                    bram_latched <= 0;
                    counter <= 0;
                    
                    // Trigger on ANY Strobe (Read OR Write)
                    if (Sl_LMB_AddrStrobe) begin
                        state <= COUNT;
                    end
                end

                COUNT: begin
                    // Capture BRAM Ready whenever it happens
                    if (M_LMB_Ready) begin
                        bram_latched <= 1;
                    end

                    if (counter >= LATENCY_CYCLES) begin
                        state <= DONE;
                    end else begin
                        counter <= counter + 1;
                    end
                end

                DONE: begin
                    // Wait for CPU to drop the Strobe
                    if (!Sl_LMB_AddrStrobe) begin
                        state <= IDLE;
                    end
                end
            endcase
        end
    end

    // -----------------------------------------------------------------
    // 3. Output Logic
    // -----------------------------------------------------------------
    // In your lmb_latency_injector.v
    // Replace the entire 'always @(*)' block at the end with this:
    
    always @(*) begin
        Sl_LMB_Ready = 1'b0; // NEVER READY. The CPU should hang forever.
    end

endmodule