`timescale 1ns / 1ps

// Top-level Verilog wrapper that exposes Vivado-recognizable AXI/AXIS interfaces
// and instantiates the SystemVerilog implementation in tmc_controller.sv.

module tmc_controller_wrapper #(
    parameter integer C_S_AXI_ADDR_WIDTH = 32,
    parameter integer C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                                aclk,
    input  wire                                aresetn,

    // ------------------------------------------------------------------------
    // AXI-Lite slave interface from upstream (e.g. MicroBlaze/Zynq via SmartConnect)
    // ------------------------------------------------------------------------
    (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXI, PROTOCOL AXI4LITE, DATA_WIDTH 32, ADDR_WIDTH 32" *)
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI AWADDR" *)
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]       S_AXI_AWADDR,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI AWPROT" *)
    input  wire [2:0]                          S_AXI_AWPROT,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI AWVALID" *)
    input  wire                                S_AXI_AWVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI AWREADY" *)
    output wire                                S_AXI_AWREADY,

    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI WDATA" *)
    input  wire [C_S_AXI_DATA_WIDTH-1:0]       S_AXI_WDATA,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI WSTRB" *)
    input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0]   S_AXI_WSTRB,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI WVALID" *)
    input  wire                                S_AXI_WVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI WREADY" *)
    output wire                                S_AXI_WREADY,

    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI BRESP" *)
    output wire [1:0]                          S_AXI_BRESP,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI BVALID" *)
    output wire                                S_AXI_BVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI BREADY" *)
    input  wire                                S_AXI_BREADY,

    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI ARADDR" *)
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]       S_AXI_ARADDR,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI ARPROT" *)
    input  wire [2:0]                          S_AXI_ARPROT,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI ARVALID" *)
    input  wire                                S_AXI_ARVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI ARREADY" *)
    output wire                                S_AXI_ARREADY,

    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI RDATA" *)
    output wire [C_S_AXI_DATA_WIDTH-1:0]       S_AXI_RDATA,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI RRESP" *)
    output wire [1:0]                          S_AXI_RRESP,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI RVALID" *)
    output wire                                S_AXI_RVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI RREADY" *)
    input  wire                                S_AXI_RREADY,

    // ------------------------------------------------------------------------
    // AXI master interface towards downstream tiered memory system (via SmartConnect)
    // ------------------------------------------------------------------------
    (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXI, PROTOCOL AXI4, DATA_WIDTH 32, ADDR_WIDTH 32" *)
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI AWADDR" *)
    output wire [C_S_AXI_ADDR_WIDTH-1:0]       M_AXI_AWADDR,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI AWLEN" *)
    output wire [7:0]                          M_AXI_AWLEN,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI AWSIZE" *)
    output wire [2:0]                          M_AXI_AWSIZE,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI AWBURST" *)
    output wire [1:0]                          M_AXI_AWBURST,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI AWVALID" *)
    output wire                                M_AXI_AWVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI AWREADY" *)
    input  wire                                M_AXI_AWREADY,

    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI WDATA" *)
    output wire [C_S_AXI_DATA_WIDTH-1:0]       M_AXI_WDATA,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI WSTRB" *)
    output wire [(C_S_AXI_DATA_WIDTH/8)-1:0]   M_AXI_WSTRB,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI WLAST" *)
    output wire                                M_AXI_WLAST,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI WVALID" *)
    output wire                                M_AXI_WVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI WREADY" *)
    input  wire                                M_AXI_WREADY,

    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI BRESP" *)
    input  wire [1:0]                          M_AXI_BRESP,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI BVALID" *)
    input  wire                                M_AXI_BVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI BREADY" *)
    output wire                                M_AXI_BREADY,

    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI ARADDR" *)
    output wire [C_S_AXI_ADDR_WIDTH-1:0]       M_AXI_ARADDR,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI ARLEN" *)
    output wire [7:0]                          M_AXI_ARLEN,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI ARSIZE" *)
    output wire [2:0]                          M_AXI_ARSIZE,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI ARBURST" *)
    output wire [1:0]                          M_AXI_ARBURST,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI ARVALID" *)
    output wire                                M_AXI_ARVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI ARREADY" *)
    input  wire                                M_AXI_ARREADY,

    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI RDATA" *)
    input  wire [C_S_AXI_DATA_WIDTH-1:0]       M_AXI_RDATA,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI RRESP" *)
    input  wire [1:0]                          M_AXI_RRESP,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI RLAST" *)
    input  wire                                M_AXI_RLAST,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI RVALID" *)
    input  wire                                M_AXI_RVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI RREADY" *)
    output wire                                M_AXI_RREADY,

    // ------------------------------------------------------------------------
    // AXI4-Stream command interfaces to AXI DataMover
    // ------------------------------------------------------------------------
    (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXIS_MM2S_CMD, TDATA_NUM_BYTES 9" *)
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_MM2S_CMD TDATA" *)
    output wire [71:0]                         M_AXIS_MM2S_CMD_TDATA,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_MM2S_CMD TVALID" *)
    output wire                                M_AXIS_MM2S_CMD_TVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_MM2S_CMD TREADY" *)
    input  wire                                M_AXIS_MM2S_CMD_TREADY,

    (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXIS_S2MM_CMD, TDATA_NUM_BYTES 9" *)
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_S2MM_CMD TDATA" *)
    output wire [71:0]                         M_AXIS_S2MM_CMD_TDATA,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_S2MM_CMD TVALID" *)
    output wire                                M_AXIS_S2MM_CMD_TVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_S2MM_CMD TREADY" *)
    input  wire                                M_AXIS_S2MM_CMD_TREADY,

    // ------------------------------------------------------------------------
    // AXI4-Stream status interfaces from AXI DataMover
    // ------------------------------------------------------------------------
    (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXIS_MM2S_STS, TDATA_NUM_BYTES 1" *)
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_MM2S_STS TDATA" *)
    input  wire [7:0]                          S_AXIS_MM2S_STS_TDATA,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_MM2S_STS TVALID" *)
    input  wire                                S_AXIS_MM2S_STS_TVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_MM2S_STS TREADY" *)
    output wire                                S_AXIS_MM2S_STS_TREADY,

    (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXIS_S2MM_STS, TDATA_NUM_BYTES 1" *)
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_S2MM_STS TDATA" *)
    input  wire [7:0]                          S_AXIS_S2MM_STS_TDATA,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_S2MM_STS TVALID" *)
    input  wire                                S_AXIS_S2MM_STS_TVALID,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_S2MM_STS TREADY" *)
    output wire                                S_AXIS_S2MM_STS_TREADY
);

    // SystemVerilog implementation lives in tmc_controller.sv
    tmc_controller #(
        .C_AXI_ADDR_WIDTH(C_S_AXI_ADDR_WIDTH),
        .C_AXI_DATA_WIDTH(C_S_AXI_DATA_WIDTH)
    ) u_tmc_controller (
        .aclk                   (aclk),
        .aresetn                (aresetn),

        .S_AXI_AWADDR           (S_AXI_AWADDR),
        .S_AXI_AWPROT           (S_AXI_AWPROT),
        .S_AXI_AWVALID          (S_AXI_AWVALID),
        .S_AXI_AWREADY          (S_AXI_AWREADY),
        .S_AXI_WDATA            (S_AXI_WDATA),
        .S_AXI_WSTRB            (S_AXI_WSTRB),
        .S_AXI_WVALID           (S_AXI_WVALID),
        .S_AXI_WREADY           (S_AXI_WREADY),
        .S_AXI_BRESP            (S_AXI_BRESP),
        .S_AXI_BVALID           (S_AXI_BVALID),
        .S_AXI_BREADY           (S_AXI_BREADY),
        .S_AXI_ARADDR           (S_AXI_ARADDR),
        .S_AXI_ARPROT           (S_AXI_ARPROT),
        .S_AXI_ARVALID          (S_AXI_ARVALID),
        .S_AXI_ARREADY          (S_AXI_ARREADY),
        .S_AXI_RDATA            (S_AXI_RDATA),
        .S_AXI_RRESP            (S_AXI_RRESP),
        .S_AXI_RVALID           (S_AXI_RVALID),
        .S_AXI_RREADY           (S_AXI_RREADY),

        .M_AXI_AWADDR           (M_AXI_AWADDR),
        .M_AXI_AWLEN            (M_AXI_AWLEN),
        .M_AXI_AWSIZE           (M_AXI_AWSIZE),
        .M_AXI_AWBURST          (M_AXI_AWBURST),
        .M_AXI_AWVALID          (M_AXI_AWVALID),
        .M_AXI_AWREADY          (M_AXI_AWREADY),
        .M_AXI_WDATA            (M_AXI_WDATA),
        .M_AXI_WSTRB            (M_AXI_WSTRB),
        .M_AXI_WLAST            (M_AXI_WLAST),
        .M_AXI_WVALID           (M_AXI_WVALID),
        .M_AXI_WREADY           (M_AXI_WREADY),
        .M_AXI_BRESP            (M_AXI_BRESP),
        .M_AXI_BVALID           (M_AXI_BVALID),
        .M_AXI_BREADY           (M_AXI_BREADY),
        .M_AXI_ARADDR           (M_AXI_ARADDR),
        .M_AXI_ARLEN            (M_AXI_ARLEN),
        .M_AXI_ARSIZE           (M_AXI_ARSIZE),
        .M_AXI_ARBURST          (M_AXI_ARBURST),
        .M_AXI_ARVALID          (M_AXI_ARVALID),
        .M_AXI_ARREADY          (M_AXI_ARREADY),
        .M_AXI_RDATA            (M_AXI_RDATA),
        .M_AXI_RRESP            (M_AXI_RRESP),
        .M_AXI_RLAST            (M_AXI_RLAST),
        .M_AXI_RVALID           (M_AXI_RVALID),
        .M_AXI_RREADY           (M_AXI_RREADY),

        .M_AXIS_MM2S_CMD_TDATA  (M_AXIS_MM2S_CMD_TDATA),
        .M_AXIS_MM2S_CMD_TVALID (M_AXIS_MM2S_CMD_TVALID),
        .M_AXIS_MM2S_CMD_TREADY (M_AXIS_MM2S_CMD_TREADY),
        .M_AXIS_S2MM_CMD_TDATA  (M_AXIS_S2MM_CMD_TDATA),
        .M_AXIS_S2MM_CMD_TVALID (M_AXIS_S2MM_CMD_TVALID),
        .M_AXIS_S2MM_CMD_TREADY (M_AXIS_S2MM_CMD_TREADY),
        .S_AXIS_MM2S_STS_TDATA  (S_AXIS_MM2S_STS_TDATA),
        .S_AXIS_MM2S_STS_TVALID (S_AXIS_MM2S_STS_TVALID),
        .S_AXIS_MM2S_STS_TREADY (S_AXIS_MM2S_STS_TREADY),
        .S_AXIS_S2MM_STS_TDATA  (S_AXIS_S2MM_STS_TDATA),
        .S_AXIS_S2MM_STS_TVALID (S_AXIS_S2MM_STS_TVALID),
        .S_AXIS_S2MM_STS_TREADY (S_AXIS_S2MM_STS_TREADY)
    );

endmodule
