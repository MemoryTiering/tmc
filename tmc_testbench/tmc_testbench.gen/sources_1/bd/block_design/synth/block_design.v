//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2025.2 (win64) Build 6299465 Fri Nov 14 19:35:11 GMT 2025
//Date        : Mon Feb 16 10:34:29 2026
//Host        : Thomas_Laptop running 64-bit major release  (build 9200)
//Command     : generate_target block_design.bd
//Design      : block_design
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "block_design,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=block_design,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=22,numReposBlks=21,numNonXlnxBlks=0,numHierBlks=1,maxHierDepth=1,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,da_axi4_cnt=20,da_board_cnt=10,da_bram_cntlr_cnt=5,da_clkrst_cnt=10,da_mb_cnt=8,da_trigger_cnt=8,synth_mode=None}" *) (* HW_HANDOFF = "block_design.hwdef" *) 
module block_design
   (CLK100MHZ,
    reset,
    usb_uart_rxd,
    usb_uart_txd);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK100MHZ CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK100MHZ, CLK_DOMAIN block_design_CLK100MHZ, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input CLK100MHZ;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RESET RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RESET, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input reset;
  (* X_INTERFACE_INFO = "xilinx.com:interface:uart:1.0 usb_uart RxD" *) (* X_INTERFACE_MODE = "Master" *) input usb_uart_rxd;
  (* X_INTERFACE_INFO = "xilinx.com:interface:uart:1.0 usb_uart TxD" *) output usb_uart_txd;

  wire CLK100MHZ;
  wire [15:0]axi_bram_ctrl_0_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_0_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_0_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_0_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_0_BRAM_PORTA_EN;
  wire axi_bram_ctrl_0_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_0_BRAM_PORTA_WE;
  wire [15:0]axi_bram_ctrl_0_BRAM_PORTB_ADDR;
  wire axi_bram_ctrl_0_BRAM_PORTB_CLK;
  wire [31:0]axi_bram_ctrl_0_BRAM_PORTB_DIN;
  wire [31:0]axi_bram_ctrl_0_BRAM_PORTB_DOUT;
  wire axi_bram_ctrl_0_BRAM_PORTB_EN;
  wire axi_bram_ctrl_0_BRAM_PORTB_RST;
  wire [3:0]axi_bram_ctrl_0_BRAM_PORTB_WE;
  wire [15:0]axi_bram_ctrl_1_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_1_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_1_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_1_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_1_BRAM_PORTA_EN;
  wire axi_bram_ctrl_1_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_1_BRAM_PORTA_WE;
  wire [15:0]axi_bram_ctrl_1_BRAM_PORTB_ADDR;
  wire axi_bram_ctrl_1_BRAM_PORTB_CLK;
  wire [31:0]axi_bram_ctrl_1_BRAM_PORTB_DIN;
  wire [31:0]axi_bram_ctrl_1_BRAM_PORTB_DOUT;
  wire axi_bram_ctrl_1_BRAM_PORTB_EN;
  wire axi_bram_ctrl_1_BRAM_PORTB_RST;
  wire [3:0]axi_bram_ctrl_1_BRAM_PORTB_WE;
  wire [31:0]axi_latency_injector_0_M_AXI_ARADDR;
  wire axi_latency_injector_0_M_AXI_ARREADY;
  wire axi_latency_injector_0_M_AXI_ARVALID;
  wire [31:0]axi_latency_injector_0_M_AXI_AWADDR;
  wire axi_latency_injector_0_M_AXI_AWREADY;
  wire axi_latency_injector_0_M_AXI_AWVALID;
  wire axi_latency_injector_0_M_AXI_BREADY;
  wire [1:0]axi_latency_injector_0_M_AXI_BRESP;
  wire axi_latency_injector_0_M_AXI_BVALID;
  wire [31:0]axi_latency_injector_0_M_AXI_RDATA;
  wire axi_latency_injector_0_M_AXI_RREADY;
  wire [1:0]axi_latency_injector_0_M_AXI_RRESP;
  wire axi_latency_injector_0_M_AXI_RVALID;
  wire [31:0]axi_latency_injector_0_M_AXI_WDATA;
  wire axi_latency_injector_0_M_AXI_WREADY;
  wire [3:0]axi_latency_injector_0_M_AXI_WSTRB;
  wire axi_latency_injector_0_M_AXI_WVALID;
  wire [4:0]axi_smc_M00_AXI_ARADDR;
  wire axi_smc_M00_AXI_ARREADY;
  wire axi_smc_M00_AXI_ARVALID;
  wire [4:0]axi_smc_M00_AXI_AWADDR;
  wire axi_smc_M00_AXI_AWREADY;
  wire axi_smc_M00_AXI_AWVALID;
  wire axi_smc_M00_AXI_BREADY;
  wire [1:0]axi_smc_M00_AXI_BRESP;
  wire axi_smc_M00_AXI_BVALID;
  wire [31:0]axi_smc_M00_AXI_RDATA;
  wire axi_smc_M00_AXI_RREADY;
  wire [1:0]axi_smc_M00_AXI_RRESP;
  wire axi_smc_M00_AXI_RVALID;
  wire [31:0]axi_smc_M00_AXI_WDATA;
  wire axi_smc_M00_AXI_WREADY;
  wire [3:0]axi_smc_M00_AXI_WSTRB;
  wire axi_smc_M00_AXI_WVALID;
  wire [3:0]axi_smc_M01_AXI_ARADDR;
  wire axi_smc_M01_AXI_ARREADY;
  wire axi_smc_M01_AXI_ARVALID;
  wire [3:0]axi_smc_M01_AXI_AWADDR;
  wire axi_smc_M01_AXI_AWREADY;
  wire axi_smc_M01_AXI_AWVALID;
  wire axi_smc_M01_AXI_BREADY;
  wire [1:0]axi_smc_M01_AXI_BRESP;
  wire axi_smc_M01_AXI_BVALID;
  wire [31:0]axi_smc_M01_AXI_RDATA;
  wire axi_smc_M01_AXI_RREADY;
  wire [1:0]axi_smc_M01_AXI_RRESP;
  wire axi_smc_M01_AXI_RVALID;
  wire [31:0]axi_smc_M01_AXI_WDATA;
  wire axi_smc_M01_AXI_WREADY;
  wire [3:0]axi_smc_M01_AXI_WSTRB;
  wire axi_smc_M01_AXI_WVALID;
  wire [4:0]axi_smc_M02_AXI_ARADDR;
  wire axi_smc_M02_AXI_ARREADY;
  wire axi_smc_M02_AXI_ARVALID;
  wire [4:0]axi_smc_M02_AXI_AWADDR;
  wire axi_smc_M02_AXI_AWREADY;
  wire axi_smc_M02_AXI_AWVALID;
  wire axi_smc_M02_AXI_BREADY;
  wire [1:0]axi_smc_M02_AXI_BRESP;
  wire axi_smc_M02_AXI_BVALID;
  wire [31:0]axi_smc_M02_AXI_RDATA;
  wire axi_smc_M02_AXI_RREADY;
  wire [1:0]axi_smc_M02_AXI_RRESP;
  wire axi_smc_M02_AXI_RVALID;
  wire [31:0]axi_smc_M02_AXI_WDATA;
  wire axi_smc_M02_AXI_WREADY;
  wire [3:0]axi_smc_M02_AXI_WSTRB;
  wire axi_smc_M02_AXI_WVALID;
  wire [31:0]axi_smc_M03_AXI_ARADDR;
  wire [1:0]axi_smc_M03_AXI_ARBURST;
  wire [3:0]axi_smc_M03_AXI_ARCACHE;
  wire [1:0]axi_smc_M03_AXI_ARID;
  wire [7:0]axi_smc_M03_AXI_ARLEN;
  wire [0:0]axi_smc_M03_AXI_ARLOCK;
  wire [2:0]axi_smc_M03_AXI_ARPROT;
  wire [3:0]axi_smc_M03_AXI_ARQOS;
  wire axi_smc_M03_AXI_ARREADY;
  wire [2:0]axi_smc_M03_AXI_ARSIZE;
  wire [113:0]axi_smc_M03_AXI_ARUSER;
  wire axi_smc_M03_AXI_ARVALID;
  wire [31:0]axi_smc_M03_AXI_AWADDR;
  wire [1:0]axi_smc_M03_AXI_AWBURST;
  wire [3:0]axi_smc_M03_AXI_AWCACHE;
  wire [1:0]axi_smc_M03_AXI_AWID;
  wire [7:0]axi_smc_M03_AXI_AWLEN;
  wire [0:0]axi_smc_M03_AXI_AWLOCK;
  wire [2:0]axi_smc_M03_AXI_AWPROT;
  wire [3:0]axi_smc_M03_AXI_AWQOS;
  wire axi_smc_M03_AXI_AWREADY;
  wire [2:0]axi_smc_M03_AXI_AWSIZE;
  wire [113:0]axi_smc_M03_AXI_AWUSER;
  wire axi_smc_M03_AXI_AWVALID;
  wire [1:0]axi_smc_M03_AXI_BID;
  wire axi_smc_M03_AXI_BREADY;
  wire [1:0]axi_smc_M03_AXI_BRESP;
  wire axi_smc_M03_AXI_BVALID;
  wire [31:0]axi_smc_M03_AXI_RDATA;
  wire [1:0]axi_smc_M03_AXI_RID;
  wire axi_smc_M03_AXI_RLAST;
  wire axi_smc_M03_AXI_RREADY;
  wire [1:0]axi_smc_M03_AXI_RRESP;
  wire [13:0]axi_smc_M03_AXI_RUSER;
  wire axi_smc_M03_AXI_RVALID;
  wire [31:0]axi_smc_M03_AXI_WDATA;
  wire axi_smc_M03_AXI_WLAST;
  wire axi_smc_M03_AXI_WREADY;
  wire [3:0]axi_smc_M03_AXI_WSTRB;
  wire [13:0]axi_smc_M03_AXI_WUSER;
  wire axi_smc_M03_AXI_WVALID;
  wire clk_wiz_1_locked;
  wire [31:0]mdm_1_M_AXI_ARADDR;
  wire [1:0]mdm_1_M_AXI_ARBURST;
  wire [3:0]mdm_1_M_AXI_ARCACHE;
  wire [7:0]mdm_1_M_AXI_ARLEN;
  wire mdm_1_M_AXI_ARLOCK;
  wire [2:0]mdm_1_M_AXI_ARPROT;
  wire [3:0]mdm_1_M_AXI_ARQOS;
  wire mdm_1_M_AXI_ARREADY;
  wire [2:0]mdm_1_M_AXI_ARSIZE;
  wire mdm_1_M_AXI_ARVALID;
  wire [31:0]mdm_1_M_AXI_AWADDR;
  wire [1:0]mdm_1_M_AXI_AWBURST;
  wire [3:0]mdm_1_M_AXI_AWCACHE;
  wire [7:0]mdm_1_M_AXI_AWLEN;
  wire mdm_1_M_AXI_AWLOCK;
  wire [2:0]mdm_1_M_AXI_AWPROT;
  wire [3:0]mdm_1_M_AXI_AWQOS;
  wire mdm_1_M_AXI_AWREADY;
  wire [2:0]mdm_1_M_AXI_AWSIZE;
  wire mdm_1_M_AXI_AWVALID;
  wire mdm_1_M_AXI_BREADY;
  wire [1:0]mdm_1_M_AXI_BRESP;
  wire mdm_1_M_AXI_BVALID;
  wire [31:0]mdm_1_M_AXI_RDATA;
  wire mdm_1_M_AXI_RLAST;
  wire mdm_1_M_AXI_RREADY;
  wire [1:0]mdm_1_M_AXI_RRESP;
  wire mdm_1_M_AXI_RVALID;
  wire [31:0]mdm_1_M_AXI_WDATA;
  wire mdm_1_M_AXI_WLAST;
  wire mdm_1_M_AXI_WREADY;
  wire [3:0]mdm_1_M_AXI_WSTRB;
  wire mdm_1_M_AXI_WVALID;
  (* CONN_BUS_INFO = "mdm_1_TRIG_OUT_0 xilinx.com:interface:trigger:1.0 None ACK" *) (* DONT_TOUCH *) wire [0:0]mdm_1_TRIG_OUT_0_ACK;
  (* CONN_BUS_INFO = "mdm_1_TRIG_OUT_0 xilinx.com:interface:trigger:1.0 None TRIG" *) (* DONT_TOUCH *) wire mdm_1_TRIG_OUT_0_TRIG;
  wire mdm_1_debug_sys_rst;
  wire microblaze_0_Clk;
  wire [31:0]microblaze_0_M_AXI_DP_ARADDR;
  wire [2:0]microblaze_0_M_AXI_DP_ARPROT;
  wire microblaze_0_M_AXI_DP_ARREADY;
  wire microblaze_0_M_AXI_DP_ARVALID;
  wire [31:0]microblaze_0_M_AXI_DP_AWADDR;
  wire [2:0]microblaze_0_M_AXI_DP_AWPROT;
  wire microblaze_0_M_AXI_DP_AWREADY;
  wire microblaze_0_M_AXI_DP_AWVALID;
  wire microblaze_0_M_AXI_DP_BREADY;
  wire [1:0]microblaze_0_M_AXI_DP_BRESP;
  wire microblaze_0_M_AXI_DP_BVALID;
  wire [31:0]microblaze_0_M_AXI_DP_RDATA;
  wire microblaze_0_M_AXI_DP_RREADY;
  wire [1:0]microblaze_0_M_AXI_DP_RRESP;
  wire microblaze_0_M_AXI_DP_RVALID;
  wire [31:0]microblaze_0_M_AXI_DP_WDATA;
  wire microblaze_0_M_AXI_DP_WREADY;
  wire [3:0]microblaze_0_M_AXI_DP_WSTRB;
  wire microblaze_0_M_AXI_DP_WVALID;
  wire microblaze_0_debug_CAPTURE;
  wire microblaze_0_debug_CLK;
  wire microblaze_0_debug_DISABLE;
  wire [0:7]microblaze_0_debug_REG_EN;
  wire microblaze_0_debug_RST;
  wire microblaze_0_debug_SHIFT;
  wire microblaze_0_debug_TDI;
  wire microblaze_0_debug_TDO;
  wire [0:7]microblaze_0_debug_TRIG_ACK_IN;
  wire [0:7]microblaze_0_debug_TRIG_ACK_OUT;
  wire [0:7]microblaze_0_debug_TRIG_IN;
  wire [0:7]microblaze_0_debug_TRIG_OUT;
  wire microblaze_0_debug_UPDATE;
  wire [0:31]microblaze_0_dlmb_1_ABUS;
  wire microblaze_0_dlmb_1_ADDRSTROBE;
  wire [0:3]microblaze_0_dlmb_1_BE;
  wire microblaze_0_dlmb_1_CE;
  wire [0:31]microblaze_0_dlmb_1_READDBUS;
  wire microblaze_0_dlmb_1_READSTROBE;
  wire microblaze_0_dlmb_1_READY;
  wire microblaze_0_dlmb_1_UE;
  wire microblaze_0_dlmb_1_WAIT;
  wire [0:31]microblaze_0_dlmb_1_WRITEDBUS;
  wire microblaze_0_dlmb_1_WRITESTROBE;
  wire [0:31]microblaze_0_ilmb_1_ABUS;
  wire microblaze_0_ilmb_1_ADDRSTROBE;
  wire microblaze_0_ilmb_1_CE;
  wire [0:31]microblaze_0_ilmb_1_READDBUS;
  wire microblaze_0_ilmb_1_READSTROBE;
  wire microblaze_0_ilmb_1_READY;
  wire microblaze_0_ilmb_1_UE;
  wire microblaze_0_ilmb_1_WAIT;
  wire [0:31]microblaze_0_lmb_ABUS;
  wire microblaze_0_lmb_ADDRSTROBE;
  wire [0:3]microblaze_0_lmb_BE;
  wire microblaze_0_lmb_CE;
  wire [0:31]microblaze_0_lmb_READDBUS;
  wire microblaze_0_lmb_READSTROBE;
  wire microblaze_0_lmb_READY;
  wire microblaze_0_lmb_UE;
  wire microblaze_0_lmb_WAIT;
  wire [0:31]microblaze_0_lmb_WRITEDBUS;
  wire microblaze_0_lmb_WRITESTROBE;
  wire reset;
  wire [0:0]reset_inv_0_Res;
  wire [0:0]rst_clk_wiz_1_100M_bus_struct_reset;
  wire rst_clk_wiz_1_100M_mb_reset;
  wire [0:0]rst_clk_wiz_1_100M_peripheral_aresetn;
  wire [15:0]smartconnect_0_M00_AXI_ARADDR;
  wire [2:0]smartconnect_0_M00_AXI_ARPROT;
  wire smartconnect_0_M00_AXI_ARREADY;
  wire smartconnect_0_M00_AXI_ARVALID;
  wire [15:0]smartconnect_0_M00_AXI_AWADDR;
  wire [2:0]smartconnect_0_M00_AXI_AWPROT;
  wire smartconnect_0_M00_AXI_AWREADY;
  wire smartconnect_0_M00_AXI_AWVALID;
  wire smartconnect_0_M00_AXI_BREADY;
  wire [1:0]smartconnect_0_M00_AXI_BRESP;
  wire smartconnect_0_M00_AXI_BVALID;
  wire [31:0]smartconnect_0_M00_AXI_RDATA;
  wire smartconnect_0_M00_AXI_RREADY;
  wire [1:0]smartconnect_0_M00_AXI_RRESP;
  wire smartconnect_0_M00_AXI_RVALID;
  wire [31:0]smartconnect_0_M00_AXI_WDATA;
  wire smartconnect_0_M00_AXI_WREADY;
  wire [3:0]smartconnect_0_M00_AXI_WSTRB;
  wire smartconnect_0_M00_AXI_WVALID;
  wire [31:0]smartconnect_0_M01_AXI_ARADDR;
  wire smartconnect_0_M01_AXI_ARREADY;
  wire smartconnect_0_M01_AXI_ARVALID;
  wire [31:0]smartconnect_0_M01_AXI_AWADDR;
  wire smartconnect_0_M01_AXI_AWREADY;
  wire smartconnect_0_M01_AXI_AWVALID;
  wire smartconnect_0_M01_AXI_BREADY;
  wire [1:0]smartconnect_0_M01_AXI_BRESP;
  wire smartconnect_0_M01_AXI_BVALID;
  wire [31:0]smartconnect_0_M01_AXI_RDATA;
  wire smartconnect_0_M01_AXI_RREADY;
  wire [1:0]smartconnect_0_M01_AXI_RRESP;
  wire smartconnect_0_M01_AXI_RVALID;
  wire [31:0]smartconnect_0_M01_AXI_WDATA;
  wire smartconnect_0_M01_AXI_WREADY;
  wire [3:0]smartconnect_0_M01_AXI_WSTRB;
  wire smartconnect_0_M01_AXI_WVALID;
  (* CONN_BUS_INFO = "system_ila_TRIG_OUT xilinx.com:interface:trigger:1.0 None ACK" *) (* DONT_TOUCH *) wire system_ila_TRIG_OUT_ACK;
  (* CONN_BUS_INFO = "system_ila_TRIG_OUT xilinx.com:interface:trigger:1.0 None TRIG" *) (* DONT_TOUCH *) wire [0:0]system_ila_TRIG_OUT_TRIG;
  wire usb_uart_rxd;
  wire usb_uart_txd;

  (* BMM_INFO_ADDRESS_SPACE = "byte  0xC0000000 32 > block_design axi_bram_ctrl_0_bram" *) 
  (* KEEP_HIERARCHY = "YES" *) 
  block_design_axi_bram_ctrl_0_0 axi_bram_ctrl_0
       (.bram_addr_a(axi_bram_ctrl_0_BRAM_PORTA_ADDR),
        .bram_addr_b(axi_bram_ctrl_0_BRAM_PORTB_ADDR),
        .bram_clk_a(axi_bram_ctrl_0_BRAM_PORTA_CLK),
        .bram_clk_b(axi_bram_ctrl_0_BRAM_PORTB_CLK),
        .bram_en_a(axi_bram_ctrl_0_BRAM_PORTA_EN),
        .bram_en_b(axi_bram_ctrl_0_BRAM_PORTB_EN),
        .bram_rddata_a(axi_bram_ctrl_0_BRAM_PORTA_DOUT),
        .bram_rddata_b(axi_bram_ctrl_0_BRAM_PORTB_DOUT),
        .bram_rst_a(axi_bram_ctrl_0_BRAM_PORTA_RST),
        .bram_rst_b(axi_bram_ctrl_0_BRAM_PORTB_RST),
        .bram_we_a(axi_bram_ctrl_0_BRAM_PORTA_WE),
        .bram_we_b(axi_bram_ctrl_0_BRAM_PORTB_WE),
        .bram_wrdata_a(axi_bram_ctrl_0_BRAM_PORTA_DIN),
        .bram_wrdata_b(axi_bram_ctrl_0_BRAM_PORTB_DIN),
        .s_axi_aclk(microblaze_0_Clk),
        .s_axi_araddr(smartconnect_0_M00_AXI_ARADDR),
        .s_axi_aresetn(rst_clk_wiz_1_100M_peripheral_aresetn),
        .s_axi_arprot(smartconnect_0_M00_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M00_AXI_ARREADY),
        .s_axi_arvalid(smartconnect_0_M00_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M00_AXI_AWADDR),
        .s_axi_awprot(smartconnect_0_M00_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M00_AXI_AWREADY),
        .s_axi_awvalid(smartconnect_0_M00_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M00_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M00_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M00_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M00_AXI_RDATA),
        .s_axi_rready(smartconnect_0_M00_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M00_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M00_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M00_AXI_WDATA),
        .s_axi_wready(smartconnect_0_M00_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M00_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M00_AXI_WVALID));
  block_design_axi_bram_ctrl_0_bram_0 axi_bram_ctrl_0_bram
       (.addra({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,axi_bram_ctrl_0_BRAM_PORTA_ADDR}),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,axi_bram_ctrl_0_BRAM_PORTB_ADDR}),
        .clka(axi_bram_ctrl_0_BRAM_PORTA_CLK),
        .clkb(axi_bram_ctrl_0_BRAM_PORTB_CLK),
        .dina(axi_bram_ctrl_0_BRAM_PORTA_DIN),
        .dinb(axi_bram_ctrl_0_BRAM_PORTB_DIN),
        .douta(axi_bram_ctrl_0_BRAM_PORTA_DOUT),
        .doutb(axi_bram_ctrl_0_BRAM_PORTB_DOUT),
        .ena(axi_bram_ctrl_0_BRAM_PORTA_EN),
        .enb(axi_bram_ctrl_0_BRAM_PORTB_EN),
        .rsta(axi_bram_ctrl_0_BRAM_PORTA_RST),
        .rstb(axi_bram_ctrl_0_BRAM_PORTB_RST),
        .wea(axi_bram_ctrl_0_BRAM_PORTA_WE),
        .web(axi_bram_ctrl_0_BRAM_PORTB_WE));
  block_design_axi_bram_ctrl_1_0 axi_bram_ctrl_1
       (.bram_addr_a(axi_bram_ctrl_1_BRAM_PORTA_ADDR),
        .bram_addr_b(axi_bram_ctrl_1_BRAM_PORTB_ADDR),
        .bram_clk_a(axi_bram_ctrl_1_BRAM_PORTA_CLK),
        .bram_clk_b(axi_bram_ctrl_1_BRAM_PORTB_CLK),
        .bram_en_a(axi_bram_ctrl_1_BRAM_PORTA_EN),
        .bram_en_b(axi_bram_ctrl_1_BRAM_PORTB_EN),
        .bram_rddata_a(axi_bram_ctrl_1_BRAM_PORTA_DOUT),
        .bram_rddata_b(axi_bram_ctrl_1_BRAM_PORTB_DOUT),
        .bram_rst_a(axi_bram_ctrl_1_BRAM_PORTA_RST),
        .bram_rst_b(axi_bram_ctrl_1_BRAM_PORTB_RST),
        .bram_we_a(axi_bram_ctrl_1_BRAM_PORTA_WE),
        .bram_we_b(axi_bram_ctrl_1_BRAM_PORTB_WE),
        .bram_wrdata_a(axi_bram_ctrl_1_BRAM_PORTA_DIN),
        .bram_wrdata_b(axi_bram_ctrl_1_BRAM_PORTB_DIN),
        .s_axi_aclk(microblaze_0_Clk),
        .s_axi_araddr(axi_latency_injector_0_M_AXI_ARADDR[15:0]),
        .s_axi_aresetn(rst_clk_wiz_1_100M_peripheral_aresetn),
        .s_axi_arprot({1'b0,1'b0,1'b0}),
        .s_axi_arready(axi_latency_injector_0_M_AXI_ARREADY),
        .s_axi_arvalid(axi_latency_injector_0_M_AXI_ARVALID),
        .s_axi_awaddr(axi_latency_injector_0_M_AXI_AWADDR[15:0]),
        .s_axi_awprot({1'b0,1'b0,1'b0}),
        .s_axi_awready(axi_latency_injector_0_M_AXI_AWREADY),
        .s_axi_awvalid(axi_latency_injector_0_M_AXI_AWVALID),
        .s_axi_bready(axi_latency_injector_0_M_AXI_BREADY),
        .s_axi_bresp(axi_latency_injector_0_M_AXI_BRESP),
        .s_axi_bvalid(axi_latency_injector_0_M_AXI_BVALID),
        .s_axi_rdata(axi_latency_injector_0_M_AXI_RDATA),
        .s_axi_rready(axi_latency_injector_0_M_AXI_RREADY),
        .s_axi_rresp(axi_latency_injector_0_M_AXI_RRESP),
        .s_axi_rvalid(axi_latency_injector_0_M_AXI_RVALID),
        .s_axi_wdata(axi_latency_injector_0_M_AXI_WDATA),
        .s_axi_wready(axi_latency_injector_0_M_AXI_WREADY),
        .s_axi_wstrb(axi_latency_injector_0_M_AXI_WSTRB),
        .s_axi_wvalid(axi_latency_injector_0_M_AXI_WVALID));
  block_design_axi_bram_ctrl_1_bram_0 axi_bram_ctrl_1_bram
       (.addra({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,axi_bram_ctrl_1_BRAM_PORTA_ADDR}),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,axi_bram_ctrl_1_BRAM_PORTB_ADDR}),
        .clka(axi_bram_ctrl_1_BRAM_PORTA_CLK),
        .clkb(axi_bram_ctrl_1_BRAM_PORTB_CLK),
        .dina(axi_bram_ctrl_1_BRAM_PORTA_DIN),
        .dinb(axi_bram_ctrl_1_BRAM_PORTB_DIN),
        .douta(axi_bram_ctrl_1_BRAM_PORTA_DOUT),
        .doutb(axi_bram_ctrl_1_BRAM_PORTB_DOUT),
        .ena(axi_bram_ctrl_1_BRAM_PORTA_EN),
        .enb(axi_bram_ctrl_1_BRAM_PORTB_EN),
        .rsta(axi_bram_ctrl_1_BRAM_PORTA_RST),
        .rstb(axi_bram_ctrl_1_BRAM_PORTB_RST),
        .wea(axi_bram_ctrl_1_BRAM_PORTA_WE),
        .web(axi_bram_ctrl_1_BRAM_PORTB_WE));
  block_design_axi_latency_injector_0_0 axi_latency_injector_0
       (.aclk(microblaze_0_Clk),
        .aresetn(rst_clk_wiz_1_100M_peripheral_aresetn),
        .m_axi_araddr(axi_latency_injector_0_M_AXI_ARADDR),
        .m_axi_arready(axi_latency_injector_0_M_AXI_ARREADY),
        .m_axi_arvalid(axi_latency_injector_0_M_AXI_ARVALID),
        .m_axi_awaddr(axi_latency_injector_0_M_AXI_AWADDR),
        .m_axi_awready(axi_latency_injector_0_M_AXI_AWREADY),
        .m_axi_awvalid(axi_latency_injector_0_M_AXI_AWVALID),
        .m_axi_bready(axi_latency_injector_0_M_AXI_BREADY),
        .m_axi_bresp(axi_latency_injector_0_M_AXI_BRESP),
        .m_axi_bvalid(axi_latency_injector_0_M_AXI_BVALID),
        .m_axi_rdata(axi_latency_injector_0_M_AXI_RDATA),
        .m_axi_rready(axi_latency_injector_0_M_AXI_RREADY),
        .m_axi_rresp(axi_latency_injector_0_M_AXI_RRESP),
        .m_axi_rvalid(axi_latency_injector_0_M_AXI_RVALID),
        .m_axi_wdata(axi_latency_injector_0_M_AXI_WDATA),
        .m_axi_wready(axi_latency_injector_0_M_AXI_WREADY),
        .m_axi_wstrb(axi_latency_injector_0_M_AXI_WSTRB),
        .m_axi_wvalid(axi_latency_injector_0_M_AXI_WVALID),
        .s_axi_araddr(smartconnect_0_M01_AXI_ARADDR),
        .s_axi_arready(smartconnect_0_M01_AXI_ARREADY),
        .s_axi_arvalid(smartconnect_0_M01_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M01_AXI_AWADDR),
        .s_axi_awready(smartconnect_0_M01_AXI_AWREADY),
        .s_axi_awvalid(smartconnect_0_M01_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M01_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M01_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M01_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M01_AXI_RDATA),
        .s_axi_rready(smartconnect_0_M01_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M01_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M01_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M01_AXI_WDATA),
        .s_axi_wready(smartconnect_0_M01_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M01_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M01_AXI_WVALID));
  block_design_axi_smc_1 axi_smc
       (.M00_AXI_araddr(axi_smc_M00_AXI_ARADDR),
        .M00_AXI_arready(axi_smc_M00_AXI_ARREADY),
        .M00_AXI_arvalid(axi_smc_M00_AXI_ARVALID),
        .M00_AXI_awaddr(axi_smc_M00_AXI_AWADDR),
        .M00_AXI_awready(axi_smc_M00_AXI_AWREADY),
        .M00_AXI_awvalid(axi_smc_M00_AXI_AWVALID),
        .M00_AXI_bready(axi_smc_M00_AXI_BREADY),
        .M00_AXI_bresp(axi_smc_M00_AXI_BRESP),
        .M00_AXI_bvalid(axi_smc_M00_AXI_BVALID),
        .M00_AXI_rdata(axi_smc_M00_AXI_RDATA),
        .M00_AXI_rready(axi_smc_M00_AXI_RREADY),
        .M00_AXI_rresp(axi_smc_M00_AXI_RRESP),
        .M00_AXI_rvalid(axi_smc_M00_AXI_RVALID),
        .M00_AXI_wdata(axi_smc_M00_AXI_WDATA),
        .M00_AXI_wready(axi_smc_M00_AXI_WREADY),
        .M00_AXI_wstrb(axi_smc_M00_AXI_WSTRB),
        .M00_AXI_wvalid(axi_smc_M00_AXI_WVALID),
        .M01_AXI_araddr(axi_smc_M01_AXI_ARADDR),
        .M01_AXI_arready(axi_smc_M01_AXI_ARREADY),
        .M01_AXI_arvalid(axi_smc_M01_AXI_ARVALID),
        .M01_AXI_awaddr(axi_smc_M01_AXI_AWADDR),
        .M01_AXI_awready(axi_smc_M01_AXI_AWREADY),
        .M01_AXI_awvalid(axi_smc_M01_AXI_AWVALID),
        .M01_AXI_bready(axi_smc_M01_AXI_BREADY),
        .M01_AXI_bresp(axi_smc_M01_AXI_BRESP),
        .M01_AXI_bvalid(axi_smc_M01_AXI_BVALID),
        .M01_AXI_rdata(axi_smc_M01_AXI_RDATA),
        .M01_AXI_rready(axi_smc_M01_AXI_RREADY),
        .M01_AXI_rresp(axi_smc_M01_AXI_RRESP),
        .M01_AXI_rvalid(axi_smc_M01_AXI_RVALID),
        .M01_AXI_wdata(axi_smc_M01_AXI_WDATA),
        .M01_AXI_wready(axi_smc_M01_AXI_WREADY),
        .M01_AXI_wstrb(axi_smc_M01_AXI_WSTRB),
        .M01_AXI_wvalid(axi_smc_M01_AXI_WVALID),
        .M02_AXI_araddr(axi_smc_M02_AXI_ARADDR),
        .M02_AXI_arready(axi_smc_M02_AXI_ARREADY),
        .M02_AXI_arvalid(axi_smc_M02_AXI_ARVALID),
        .M02_AXI_awaddr(axi_smc_M02_AXI_AWADDR),
        .M02_AXI_awready(axi_smc_M02_AXI_AWREADY),
        .M02_AXI_awvalid(axi_smc_M02_AXI_AWVALID),
        .M02_AXI_bready(axi_smc_M02_AXI_BREADY),
        .M02_AXI_bresp(axi_smc_M02_AXI_BRESP),
        .M02_AXI_bvalid(axi_smc_M02_AXI_BVALID),
        .M02_AXI_rdata(axi_smc_M02_AXI_RDATA),
        .M02_AXI_rready(axi_smc_M02_AXI_RREADY),
        .M02_AXI_rresp(axi_smc_M02_AXI_RRESP),
        .M02_AXI_rvalid(axi_smc_M02_AXI_RVALID),
        .M02_AXI_wdata(axi_smc_M02_AXI_WDATA),
        .M02_AXI_wready(axi_smc_M02_AXI_WREADY),
        .M02_AXI_wstrb(axi_smc_M02_AXI_WSTRB),
        .M02_AXI_wvalid(axi_smc_M02_AXI_WVALID),
        .M03_AXI_araddr(axi_smc_M03_AXI_ARADDR),
        .M03_AXI_arburst(axi_smc_M03_AXI_ARBURST),
        .M03_AXI_arcache(axi_smc_M03_AXI_ARCACHE),
        .M03_AXI_arid(axi_smc_M03_AXI_ARID),
        .M03_AXI_arlen(axi_smc_M03_AXI_ARLEN),
        .M03_AXI_arlock(axi_smc_M03_AXI_ARLOCK),
        .M03_AXI_arprot(axi_smc_M03_AXI_ARPROT),
        .M03_AXI_arqos(axi_smc_M03_AXI_ARQOS),
        .M03_AXI_arready(axi_smc_M03_AXI_ARREADY),
        .M03_AXI_arsize(axi_smc_M03_AXI_ARSIZE),
        .M03_AXI_aruser(axi_smc_M03_AXI_ARUSER),
        .M03_AXI_arvalid(axi_smc_M03_AXI_ARVALID),
        .M03_AXI_awaddr(axi_smc_M03_AXI_AWADDR),
        .M03_AXI_awburst(axi_smc_M03_AXI_AWBURST),
        .M03_AXI_awcache(axi_smc_M03_AXI_AWCACHE),
        .M03_AXI_awid(axi_smc_M03_AXI_AWID),
        .M03_AXI_awlen(axi_smc_M03_AXI_AWLEN),
        .M03_AXI_awlock(axi_smc_M03_AXI_AWLOCK),
        .M03_AXI_awprot(axi_smc_M03_AXI_AWPROT),
        .M03_AXI_awqos(axi_smc_M03_AXI_AWQOS),
        .M03_AXI_awready(axi_smc_M03_AXI_AWREADY),
        .M03_AXI_awsize(axi_smc_M03_AXI_AWSIZE),
        .M03_AXI_awuser(axi_smc_M03_AXI_AWUSER),
        .M03_AXI_awvalid(axi_smc_M03_AXI_AWVALID),
        .M03_AXI_bid(axi_smc_M03_AXI_BID),
        .M03_AXI_bready(axi_smc_M03_AXI_BREADY),
        .M03_AXI_bresp(axi_smc_M03_AXI_BRESP),
        .M03_AXI_bvalid(axi_smc_M03_AXI_BVALID),
        .M03_AXI_rdata(axi_smc_M03_AXI_RDATA),
        .M03_AXI_rid(axi_smc_M03_AXI_RID),
        .M03_AXI_rlast(axi_smc_M03_AXI_RLAST),
        .M03_AXI_rready(axi_smc_M03_AXI_RREADY),
        .M03_AXI_rresp(axi_smc_M03_AXI_RRESP),
        .M03_AXI_ruser(axi_smc_M03_AXI_RUSER),
        .M03_AXI_rvalid(axi_smc_M03_AXI_RVALID),
        .M03_AXI_wdata(axi_smc_M03_AXI_WDATA),
        .M03_AXI_wlast(axi_smc_M03_AXI_WLAST),
        .M03_AXI_wready(axi_smc_M03_AXI_WREADY),
        .M03_AXI_wstrb(axi_smc_M03_AXI_WSTRB),
        .M03_AXI_wuser(axi_smc_M03_AXI_WUSER),
        .M03_AXI_wvalid(axi_smc_M03_AXI_WVALID),
        .S00_AXI_araddr(microblaze_0_M_AXI_DP_ARADDR),
        .S00_AXI_arprot(microblaze_0_M_AXI_DP_ARPROT),
        .S00_AXI_arready(microblaze_0_M_AXI_DP_ARREADY),
        .S00_AXI_arvalid(microblaze_0_M_AXI_DP_ARVALID),
        .S00_AXI_awaddr(microblaze_0_M_AXI_DP_AWADDR),
        .S00_AXI_awprot(microblaze_0_M_AXI_DP_AWPROT),
        .S00_AXI_awready(microblaze_0_M_AXI_DP_AWREADY),
        .S00_AXI_awvalid(microblaze_0_M_AXI_DP_AWVALID),
        .S00_AXI_bready(microblaze_0_M_AXI_DP_BREADY),
        .S00_AXI_bresp(microblaze_0_M_AXI_DP_BRESP),
        .S00_AXI_bvalid(microblaze_0_M_AXI_DP_BVALID),
        .S00_AXI_rdata(microblaze_0_M_AXI_DP_RDATA),
        .S00_AXI_rready(microblaze_0_M_AXI_DP_RREADY),
        .S00_AXI_rresp(microblaze_0_M_AXI_DP_RRESP),
        .S00_AXI_rvalid(microblaze_0_M_AXI_DP_RVALID),
        .S00_AXI_wdata(microblaze_0_M_AXI_DP_WDATA),
        .S00_AXI_wready(microblaze_0_M_AXI_DP_WREADY),
        .S00_AXI_wstrb(microblaze_0_M_AXI_DP_WSTRB),
        .S00_AXI_wvalid(microblaze_0_M_AXI_DP_WVALID),
        .S01_AXI_araddr(mdm_1_M_AXI_ARADDR),
        .S01_AXI_arburst(mdm_1_M_AXI_ARBURST),
        .S01_AXI_arcache(mdm_1_M_AXI_ARCACHE),
        .S01_AXI_arlen(mdm_1_M_AXI_ARLEN),
        .S01_AXI_arlock(mdm_1_M_AXI_ARLOCK),
        .S01_AXI_arprot(mdm_1_M_AXI_ARPROT),
        .S01_AXI_arqos(mdm_1_M_AXI_ARQOS),
        .S01_AXI_arready(mdm_1_M_AXI_ARREADY),
        .S01_AXI_arsize(mdm_1_M_AXI_ARSIZE),
        .S01_AXI_arvalid(mdm_1_M_AXI_ARVALID),
        .S01_AXI_awaddr(mdm_1_M_AXI_AWADDR),
        .S01_AXI_awburst(mdm_1_M_AXI_AWBURST),
        .S01_AXI_awcache(mdm_1_M_AXI_AWCACHE),
        .S01_AXI_awlen(mdm_1_M_AXI_AWLEN),
        .S01_AXI_awlock(mdm_1_M_AXI_AWLOCK),
        .S01_AXI_awprot(mdm_1_M_AXI_AWPROT),
        .S01_AXI_awqos(mdm_1_M_AXI_AWQOS),
        .S01_AXI_awready(mdm_1_M_AXI_AWREADY),
        .S01_AXI_awsize(mdm_1_M_AXI_AWSIZE),
        .S01_AXI_awvalid(mdm_1_M_AXI_AWVALID),
        .S01_AXI_bready(mdm_1_M_AXI_BREADY),
        .S01_AXI_bresp(mdm_1_M_AXI_BRESP),
        .S01_AXI_bvalid(mdm_1_M_AXI_BVALID),
        .S01_AXI_rdata(mdm_1_M_AXI_RDATA),
        .S01_AXI_rlast(mdm_1_M_AXI_RLAST),
        .S01_AXI_rready(mdm_1_M_AXI_RREADY),
        .S01_AXI_rresp(mdm_1_M_AXI_RRESP),
        .S01_AXI_rvalid(mdm_1_M_AXI_RVALID),
        .S01_AXI_wdata(mdm_1_M_AXI_WDATA),
        .S01_AXI_wlast(mdm_1_M_AXI_WLAST),
        .S01_AXI_wready(mdm_1_M_AXI_WREADY),
        .S01_AXI_wstrb(mdm_1_M_AXI_WSTRB),
        .S01_AXI_wvalid(mdm_1_M_AXI_WVALID),
        .aclk(microblaze_0_Clk),
        .aresetn(rst_clk_wiz_1_100M_peripheral_aresetn));
  block_design_axi_timer_0_0 axi_timer_0
       (.capturetrig0(1'b0),
        .capturetrig1(1'b0),
        .freeze(1'b0),
        .s_axi_aclk(microblaze_0_Clk),
        .s_axi_araddr(axi_smc_M00_AXI_ARADDR),
        .s_axi_aresetn(rst_clk_wiz_1_100M_peripheral_aresetn),
        .s_axi_arready(axi_smc_M00_AXI_ARREADY),
        .s_axi_arvalid(axi_smc_M00_AXI_ARVALID),
        .s_axi_awaddr(axi_smc_M00_AXI_AWADDR),
        .s_axi_awready(axi_smc_M00_AXI_AWREADY),
        .s_axi_awvalid(axi_smc_M00_AXI_AWVALID),
        .s_axi_bready(axi_smc_M00_AXI_BREADY),
        .s_axi_bresp(axi_smc_M00_AXI_BRESP),
        .s_axi_bvalid(axi_smc_M00_AXI_BVALID),
        .s_axi_rdata(axi_smc_M00_AXI_RDATA),
        .s_axi_rready(axi_smc_M00_AXI_RREADY),
        .s_axi_rresp(axi_smc_M00_AXI_RRESP),
        .s_axi_rvalid(axi_smc_M00_AXI_RVALID),
        .s_axi_wdata(axi_smc_M00_AXI_WDATA),
        .s_axi_wready(axi_smc_M00_AXI_WREADY),
        .s_axi_wstrb(axi_smc_M00_AXI_WSTRB),
        .s_axi_wvalid(axi_smc_M00_AXI_WVALID));
  block_design_axi_uartlite_0_1 axi_uartlite_0
       (.rx(usb_uart_rxd),
        .s_axi_aclk(microblaze_0_Clk),
        .s_axi_araddr(axi_smc_M01_AXI_ARADDR),
        .s_axi_aresetn(rst_clk_wiz_1_100M_peripheral_aresetn),
        .s_axi_arready(axi_smc_M01_AXI_ARREADY),
        .s_axi_arvalid(axi_smc_M01_AXI_ARVALID),
        .s_axi_awaddr(axi_smc_M01_AXI_AWADDR),
        .s_axi_awready(axi_smc_M01_AXI_AWREADY),
        .s_axi_awvalid(axi_smc_M01_AXI_AWVALID),
        .s_axi_bready(axi_smc_M01_AXI_BREADY),
        .s_axi_bresp(axi_smc_M01_AXI_BRESP),
        .s_axi_bvalid(axi_smc_M01_AXI_BVALID),
        .s_axi_rdata(axi_smc_M01_AXI_RDATA),
        .s_axi_rready(axi_smc_M01_AXI_RREADY),
        .s_axi_rresp(axi_smc_M01_AXI_RRESP),
        .s_axi_rvalid(axi_smc_M01_AXI_RVALID),
        .s_axi_wdata(axi_smc_M01_AXI_WDATA),
        .s_axi_wready(axi_smc_M01_AXI_WREADY),
        .s_axi_wstrb(axi_smc_M01_AXI_WSTRB),
        .s_axi_wvalid(axi_smc_M01_AXI_WVALID),
        .tx(usb_uart_txd));
  block_design_clk_wiz_1_3 clk_wiz_1
       (.clk_in1(CLK100MHZ),
        .clk_out1(microblaze_0_Clk),
        .locked(clk_wiz_1_locked),
        .reset(reset_inv_0_Res));
  block_design_mdm_1_6 mdm_1
       (.Dbg_Capture_0(microblaze_0_debug_CAPTURE),
        .Dbg_Clk_0(microblaze_0_debug_CLK),
        .Dbg_Disable_0(microblaze_0_debug_DISABLE),
        .Dbg_Reg_En_0(microblaze_0_debug_REG_EN),
        .Dbg_Rst_0(microblaze_0_debug_RST),
        .Dbg_Shift_0(microblaze_0_debug_SHIFT),
        .Dbg_TDI_0(microblaze_0_debug_TDI),
        .Dbg_TDO_0(microblaze_0_debug_TDO),
        .Dbg_Trig_Ack_In_0(microblaze_0_debug_TRIG_ACK_IN),
        .Dbg_Trig_Ack_Out_0(microblaze_0_debug_TRIG_ACK_OUT),
        .Dbg_Trig_In_0(microblaze_0_debug_TRIG_IN),
        .Dbg_Trig_Out_0(microblaze_0_debug_TRIG_OUT),
        .Dbg_Update_0(microblaze_0_debug_UPDATE),
        .Debug_SYS_Rst(mdm_1_debug_sys_rst),
        .LMB_Addr_Strobe_0(microblaze_0_lmb_ADDRSTROBE),
        .LMB_Byte_Enable_0(microblaze_0_lmb_BE),
        .LMB_CE_0(microblaze_0_lmb_CE),
        .LMB_Data_Addr_0(microblaze_0_lmb_ABUS),
        .LMB_Data_Read_0(microblaze_0_lmb_READDBUS),
        .LMB_Data_Write_0(microblaze_0_lmb_WRITEDBUS),
        .LMB_Read_Strobe_0(microblaze_0_lmb_READSTROBE),
        .LMB_Ready_0(microblaze_0_lmb_READY),
        .LMB_UE_0(microblaze_0_lmb_UE),
        .LMB_Wait_0(microblaze_0_lmb_WAIT),
        .LMB_Write_Strobe_0(microblaze_0_lmb_WRITESTROBE),
        .M_AXI_ACLK(microblaze_0_Clk),
        .M_AXI_ARADDR(mdm_1_M_AXI_ARADDR),
        .M_AXI_ARBURST(mdm_1_M_AXI_ARBURST),
        .M_AXI_ARCACHE(mdm_1_M_AXI_ARCACHE),
        .M_AXI_ARESETN(rst_clk_wiz_1_100M_peripheral_aresetn),
        .M_AXI_ARLEN(mdm_1_M_AXI_ARLEN),
        .M_AXI_ARLOCK(mdm_1_M_AXI_ARLOCK),
        .M_AXI_ARPROT(mdm_1_M_AXI_ARPROT),
        .M_AXI_ARQOS(mdm_1_M_AXI_ARQOS),
        .M_AXI_ARREADY(mdm_1_M_AXI_ARREADY),
        .M_AXI_ARSIZE(mdm_1_M_AXI_ARSIZE),
        .M_AXI_ARVALID(mdm_1_M_AXI_ARVALID),
        .M_AXI_AWADDR(mdm_1_M_AXI_AWADDR),
        .M_AXI_AWBURST(mdm_1_M_AXI_AWBURST),
        .M_AXI_AWCACHE(mdm_1_M_AXI_AWCACHE),
        .M_AXI_AWLEN(mdm_1_M_AXI_AWLEN),
        .M_AXI_AWLOCK(mdm_1_M_AXI_AWLOCK),
        .M_AXI_AWPROT(mdm_1_M_AXI_AWPROT),
        .M_AXI_AWQOS(mdm_1_M_AXI_AWQOS),
        .M_AXI_AWREADY(mdm_1_M_AXI_AWREADY),
        .M_AXI_AWSIZE(mdm_1_M_AXI_AWSIZE),
        .M_AXI_AWVALID(mdm_1_M_AXI_AWVALID),
        .M_AXI_BID(1'b0),
        .M_AXI_BREADY(mdm_1_M_AXI_BREADY),
        .M_AXI_BRESP(mdm_1_M_AXI_BRESP),
        .M_AXI_BVALID(mdm_1_M_AXI_BVALID),
        .M_AXI_RDATA(mdm_1_M_AXI_RDATA),
        .M_AXI_RID(1'b0),
        .M_AXI_RLAST(mdm_1_M_AXI_RLAST),
        .M_AXI_RREADY(mdm_1_M_AXI_RREADY),
        .M_AXI_RRESP(mdm_1_M_AXI_RRESP),
        .M_AXI_RVALID(mdm_1_M_AXI_RVALID),
        .M_AXI_WDATA(mdm_1_M_AXI_WDATA),
        .M_AXI_WLAST(mdm_1_M_AXI_WLAST),
        .M_AXI_WREADY(mdm_1_M_AXI_WREADY),
        .M_AXI_WSTRB(mdm_1_M_AXI_WSTRB),
        .M_AXI_WVALID(mdm_1_M_AXI_WVALID),
        .S_AXI_ACLK(microblaze_0_Clk),
        .S_AXI_ARADDR(axi_smc_M02_AXI_ARADDR),
        .S_AXI_ARESETN(rst_clk_wiz_1_100M_peripheral_aresetn),
        .S_AXI_ARREADY(axi_smc_M02_AXI_ARREADY),
        .S_AXI_ARVALID(axi_smc_M02_AXI_ARVALID),
        .S_AXI_AWADDR(axi_smc_M02_AXI_AWADDR),
        .S_AXI_AWREADY(axi_smc_M02_AXI_AWREADY),
        .S_AXI_AWVALID(axi_smc_M02_AXI_AWVALID),
        .S_AXI_BREADY(axi_smc_M02_AXI_BREADY),
        .S_AXI_BRESP(axi_smc_M02_AXI_BRESP),
        .S_AXI_BVALID(axi_smc_M02_AXI_BVALID),
        .S_AXI_RDATA(axi_smc_M02_AXI_RDATA),
        .S_AXI_RREADY(axi_smc_M02_AXI_RREADY),
        .S_AXI_RRESP(axi_smc_M02_AXI_RRESP),
        .S_AXI_RVALID(axi_smc_M02_AXI_RVALID),
        .S_AXI_WDATA(axi_smc_M02_AXI_WDATA),
        .S_AXI_WREADY(axi_smc_M02_AXI_WREADY),
        .S_AXI_WSTRB(axi_smc_M02_AXI_WSTRB),
        .S_AXI_WVALID(axi_smc_M02_AXI_WVALID),
        .Trig_Ack_In_0(system_ila_TRIG_OUT_ACK),
        .Trig_Ack_Out_0(mdm_1_TRIG_OUT_0_ACK),
        .Trig_In_0(system_ila_TRIG_OUT_TRIG),
        .Trig_Out_0(mdm_1_TRIG_OUT_0_TRIG));
  (* BMM_INFO_PROCESSOR = "microblaze-le > block_design microblaze_0_local_memory/dlmb_bram_if_cntlr block_design axi_bram_ctrl_0" *) 
  (* KEEP_HIERARCHY = "YES" *) 
  block_design_microblaze_0_3 microblaze_0
       (.Byte_Enable(microblaze_0_dlmb_1_BE),
        .Clk(microblaze_0_Clk),
        .DCE(microblaze_0_dlmb_1_CE),
        .DReady(microblaze_0_dlmb_1_READY),
        .DUE(microblaze_0_dlmb_1_UE),
        .DWait(microblaze_0_dlmb_1_WAIT),
        .D_AS(microblaze_0_dlmb_1_ADDRSTROBE),
        .Data_Addr(microblaze_0_dlmb_1_ABUS),
        .Data_Read(microblaze_0_dlmb_1_READDBUS),
        .Data_Write(microblaze_0_dlmb_1_WRITEDBUS),
        .Dbg_Capture(microblaze_0_debug_CAPTURE),
        .Dbg_Clk(microblaze_0_debug_CLK),
        .Dbg_Disable(microblaze_0_debug_DISABLE),
        .Dbg_Reg_En(microblaze_0_debug_REG_EN),
        .Dbg_Shift(microblaze_0_debug_SHIFT),
        .Dbg_TDI(microblaze_0_debug_TDI),
        .Dbg_TDO(microblaze_0_debug_TDO),
        .Dbg_Trig_Ack_In(microblaze_0_debug_TRIG_ACK_IN),
        .Dbg_Trig_Ack_Out(microblaze_0_debug_TRIG_ACK_OUT),
        .Dbg_Trig_In(microblaze_0_debug_TRIG_IN),
        .Dbg_Trig_Out(microblaze_0_debug_TRIG_OUT),
        .Dbg_Update(microblaze_0_debug_UPDATE),
        .Debug_Rst(microblaze_0_debug_RST),
        .ICE(microblaze_0_ilmb_1_CE),
        .IFetch(microblaze_0_ilmb_1_READSTROBE),
        .IReady(microblaze_0_ilmb_1_READY),
        .IUE(microblaze_0_ilmb_1_UE),
        .IWAIT(microblaze_0_ilmb_1_WAIT),
        .I_AS(microblaze_0_ilmb_1_ADDRSTROBE),
        .Instr(microblaze_0_ilmb_1_READDBUS),
        .Instr_Addr(microblaze_0_ilmb_1_ABUS),
        .Interrupt(1'b0),
        .Interrupt_Address({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .M_AXI_DP_ARADDR(microblaze_0_M_AXI_DP_ARADDR),
        .M_AXI_DP_ARPROT(microblaze_0_M_AXI_DP_ARPROT),
        .M_AXI_DP_ARREADY(microblaze_0_M_AXI_DP_ARREADY),
        .M_AXI_DP_ARVALID(microblaze_0_M_AXI_DP_ARVALID),
        .M_AXI_DP_AWADDR(microblaze_0_M_AXI_DP_AWADDR),
        .M_AXI_DP_AWPROT(microblaze_0_M_AXI_DP_AWPROT),
        .M_AXI_DP_AWREADY(microblaze_0_M_AXI_DP_AWREADY),
        .M_AXI_DP_AWVALID(microblaze_0_M_AXI_DP_AWVALID),
        .M_AXI_DP_BREADY(microblaze_0_M_AXI_DP_BREADY),
        .M_AXI_DP_BRESP(microblaze_0_M_AXI_DP_BRESP),
        .M_AXI_DP_BVALID(microblaze_0_M_AXI_DP_BVALID),
        .M_AXI_DP_RDATA(microblaze_0_M_AXI_DP_RDATA),
        .M_AXI_DP_RREADY(microblaze_0_M_AXI_DP_RREADY),
        .M_AXI_DP_RRESP(microblaze_0_M_AXI_DP_RRESP),
        .M_AXI_DP_RVALID(microblaze_0_M_AXI_DP_RVALID),
        .M_AXI_DP_WDATA(microblaze_0_M_AXI_DP_WDATA),
        .M_AXI_DP_WREADY(microblaze_0_M_AXI_DP_WREADY),
        .M_AXI_DP_WSTRB(microblaze_0_M_AXI_DP_WSTRB),
        .M_AXI_DP_WVALID(microblaze_0_M_AXI_DP_WVALID),
        .Read_Strobe(microblaze_0_dlmb_1_READSTROBE),
        .Reset(rst_clk_wiz_1_100M_mb_reset),
        .Write_Strobe(microblaze_0_dlmb_1_WRITESTROBE));
  microblaze_0_local_memory_imp_1MRBCIZ microblaze_0_local_memory
       (.DLMB_abus(microblaze_0_dlmb_1_ABUS),
        .DLMB_addrstrobe(microblaze_0_dlmb_1_ADDRSTROBE),
        .DLMB_be(microblaze_0_dlmb_1_BE),
        .DLMB_ce(microblaze_0_dlmb_1_CE),
        .DLMB_readdbus(microblaze_0_dlmb_1_READDBUS),
        .DLMB_readstrobe(microblaze_0_dlmb_1_READSTROBE),
        .DLMB_ready(microblaze_0_dlmb_1_READY),
        .DLMB_ue(microblaze_0_dlmb_1_UE),
        .DLMB_wait(microblaze_0_dlmb_1_WAIT),
        .DLMB_writedbus(microblaze_0_dlmb_1_WRITEDBUS),
        .DLMB_writestrobe(microblaze_0_dlmb_1_WRITESTROBE),
        .ILMB_abus(microblaze_0_ilmb_1_ABUS),
        .ILMB_addrstrobe(microblaze_0_ilmb_1_ADDRSTROBE),
        .ILMB_ce(microblaze_0_ilmb_1_CE),
        .ILMB_readdbus(microblaze_0_ilmb_1_READDBUS),
        .ILMB_readstrobe(microblaze_0_ilmb_1_READSTROBE),
        .ILMB_ready(microblaze_0_ilmb_1_READY),
        .ILMB_ue(microblaze_0_ilmb_1_UE),
        .ILMB_wait(microblaze_0_ilmb_1_WAIT),
        .LMB_Clk(microblaze_0_Clk),
        .LMB_M_abus(microblaze_0_lmb_ABUS),
        .LMB_M_addrstrobe(microblaze_0_lmb_ADDRSTROBE),
        .LMB_M_be(microblaze_0_lmb_BE),
        .LMB_M_ce(microblaze_0_lmb_CE),
        .LMB_M_readdbus(microblaze_0_lmb_READDBUS),
        .LMB_M_readstrobe(microblaze_0_lmb_READSTROBE),
        .LMB_M_ready(microblaze_0_lmb_READY),
        .LMB_M_ue(microblaze_0_lmb_UE),
        .LMB_M_wait(microblaze_0_lmb_WAIT),
        .LMB_M_writedbus(microblaze_0_lmb_WRITEDBUS),
        .LMB_M_writestrobe(microblaze_0_lmb_WRITESTROBE),
        .SYS_Rst(rst_clk_wiz_1_100M_bus_struct_reset));
  assign reset_inv_0_Res = ~ reset;
  block_design_rst_clk_wiz_1_100M_4 rst_clk_wiz_1_100M
       (.aux_reset_in(1'b1),
        .bus_struct_reset(rst_clk_wiz_1_100M_bus_struct_reset),
        .dcm_locked(clk_wiz_1_locked),
        .ext_reset_in(reset_inv_0_Res),
        .mb_debug_sys_rst(mdm_1_debug_sys_rst),
        .mb_reset(rst_clk_wiz_1_100M_mb_reset),
        .peripheral_aresetn(rst_clk_wiz_1_100M_peripheral_aresetn),
        .slowest_sync_clk(microblaze_0_Clk));
  block_design_smartconnect_0_0 smartconnect_0
       (.M00_AXI_araddr(smartconnect_0_M00_AXI_ARADDR),
        .M00_AXI_arprot(smartconnect_0_M00_AXI_ARPROT),
        .M00_AXI_arready(smartconnect_0_M00_AXI_ARREADY),
        .M00_AXI_arvalid(smartconnect_0_M00_AXI_ARVALID),
        .M00_AXI_awaddr(smartconnect_0_M00_AXI_AWADDR),
        .M00_AXI_awprot(smartconnect_0_M00_AXI_AWPROT),
        .M00_AXI_awready(smartconnect_0_M00_AXI_AWREADY),
        .M00_AXI_awvalid(smartconnect_0_M00_AXI_AWVALID),
        .M00_AXI_bready(smartconnect_0_M00_AXI_BREADY),
        .M00_AXI_bresp(smartconnect_0_M00_AXI_BRESP),
        .M00_AXI_bvalid(smartconnect_0_M00_AXI_BVALID),
        .M00_AXI_rdata(smartconnect_0_M00_AXI_RDATA),
        .M00_AXI_rready(smartconnect_0_M00_AXI_RREADY),
        .M00_AXI_rresp(smartconnect_0_M00_AXI_RRESP),
        .M00_AXI_rvalid(smartconnect_0_M00_AXI_RVALID),
        .M00_AXI_wdata(smartconnect_0_M00_AXI_WDATA),
        .M00_AXI_wready(smartconnect_0_M00_AXI_WREADY),
        .M00_AXI_wstrb(smartconnect_0_M00_AXI_WSTRB),
        .M00_AXI_wvalid(smartconnect_0_M00_AXI_WVALID),
        .M01_AXI_araddr(smartconnect_0_M01_AXI_ARADDR),
        .M01_AXI_arready(smartconnect_0_M01_AXI_ARREADY),
        .M01_AXI_arvalid(smartconnect_0_M01_AXI_ARVALID),
        .M01_AXI_awaddr(smartconnect_0_M01_AXI_AWADDR),
        .M01_AXI_awready(smartconnect_0_M01_AXI_AWREADY),
        .M01_AXI_awvalid(smartconnect_0_M01_AXI_AWVALID),
        .M01_AXI_bready(smartconnect_0_M01_AXI_BREADY),
        .M01_AXI_bresp(smartconnect_0_M01_AXI_BRESP),
        .M01_AXI_bvalid(smartconnect_0_M01_AXI_BVALID),
        .M01_AXI_rdata(smartconnect_0_M01_AXI_RDATA),
        .M01_AXI_rready(smartconnect_0_M01_AXI_RREADY),
        .M01_AXI_rresp(smartconnect_0_M01_AXI_RRESP),
        .M01_AXI_rvalid(smartconnect_0_M01_AXI_RVALID),
        .M01_AXI_wdata(smartconnect_0_M01_AXI_WDATA),
        .M01_AXI_wready(smartconnect_0_M01_AXI_WREADY),
        .M01_AXI_wstrb(smartconnect_0_M01_AXI_WSTRB),
        .M01_AXI_wvalid(smartconnect_0_M01_AXI_WVALID),
        .S00_AXI_araddr(axi_smc_M03_AXI_ARADDR),
        .S00_AXI_arburst(axi_smc_M03_AXI_ARBURST),
        .S00_AXI_arcache(axi_smc_M03_AXI_ARCACHE),
        .S00_AXI_arid(axi_smc_M03_AXI_ARID),
        .S00_AXI_arlen(axi_smc_M03_AXI_ARLEN),
        .S00_AXI_arlock(axi_smc_M03_AXI_ARLOCK),
        .S00_AXI_arprot(axi_smc_M03_AXI_ARPROT),
        .S00_AXI_arqos(axi_smc_M03_AXI_ARQOS),
        .S00_AXI_arready(axi_smc_M03_AXI_ARREADY),
        .S00_AXI_arsize(axi_smc_M03_AXI_ARSIZE),
        .S00_AXI_aruser(axi_smc_M03_AXI_ARUSER),
        .S00_AXI_arvalid(axi_smc_M03_AXI_ARVALID),
        .S00_AXI_awaddr(axi_smc_M03_AXI_AWADDR),
        .S00_AXI_awburst(axi_smc_M03_AXI_AWBURST),
        .S00_AXI_awcache(axi_smc_M03_AXI_AWCACHE),
        .S00_AXI_awid(axi_smc_M03_AXI_AWID),
        .S00_AXI_awlen(axi_smc_M03_AXI_AWLEN),
        .S00_AXI_awlock(axi_smc_M03_AXI_AWLOCK),
        .S00_AXI_awprot(axi_smc_M03_AXI_AWPROT),
        .S00_AXI_awqos(axi_smc_M03_AXI_AWQOS),
        .S00_AXI_awready(axi_smc_M03_AXI_AWREADY),
        .S00_AXI_awsize(axi_smc_M03_AXI_AWSIZE),
        .S00_AXI_awuser(axi_smc_M03_AXI_AWUSER),
        .S00_AXI_awvalid(axi_smc_M03_AXI_AWVALID),
        .S00_AXI_bid(axi_smc_M03_AXI_BID),
        .S00_AXI_bready(axi_smc_M03_AXI_BREADY),
        .S00_AXI_bresp(axi_smc_M03_AXI_BRESP),
        .S00_AXI_bvalid(axi_smc_M03_AXI_BVALID),
        .S00_AXI_rdata(axi_smc_M03_AXI_RDATA),
        .S00_AXI_rid(axi_smc_M03_AXI_RID),
        .S00_AXI_rlast(axi_smc_M03_AXI_RLAST),
        .S00_AXI_rready(axi_smc_M03_AXI_RREADY),
        .S00_AXI_rresp(axi_smc_M03_AXI_RRESP),
        .S00_AXI_ruser(axi_smc_M03_AXI_RUSER),
        .S00_AXI_rvalid(axi_smc_M03_AXI_RVALID),
        .S00_AXI_wdata(axi_smc_M03_AXI_WDATA),
        .S00_AXI_wlast(axi_smc_M03_AXI_WLAST),
        .S00_AXI_wready(axi_smc_M03_AXI_WREADY),
        .S00_AXI_wstrb(axi_smc_M03_AXI_WSTRB),
        .S00_AXI_wuser(axi_smc_M03_AXI_WUSER),
        .S00_AXI_wvalid(axi_smc_M03_AXI_WVALID),
        .aclk(microblaze_0_Clk),
        .aresetn(1'b1));
  block_design_system_ila_1 system_ila
       (.SLOT_0_AXI_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_arburst({1'b0,1'b1}),
        .SLOT_0_AXI_arcache({1'b0,1'b0,1'b1,1'b1}),
        .SLOT_0_AXI_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_arlock(1'b0),
        .SLOT_0_AXI_arprot({1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_arqos({1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_arready(1'b0),
        .SLOT_0_AXI_arregion({1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_arsize({1'b0,1'b1,1'b0}),
        .SLOT_0_AXI_arvalid(1'b0),
        .SLOT_0_AXI_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_awburst({1'b0,1'b1}),
        .SLOT_0_AXI_awcache({1'b0,1'b0,1'b1,1'b1}),
        .SLOT_0_AXI_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_awlock(1'b0),
        .SLOT_0_AXI_awprot({1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_awqos({1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_awready(1'b0),
        .SLOT_0_AXI_awregion({1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_awsize({1'b0,1'b1,1'b0}),
        .SLOT_0_AXI_awvalid(1'b0),
        .SLOT_0_AXI_bready(1'b0),
        .SLOT_0_AXI_bresp({1'b0,1'b0}),
        .SLOT_0_AXI_bvalid(1'b0),
        .SLOT_0_AXI_rdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_rlast(1'b0),
        .SLOT_0_AXI_rready(1'b0),
        .SLOT_0_AXI_rresp({1'b0,1'b0}),
        .SLOT_0_AXI_rvalid(1'b0),
        .SLOT_0_AXI_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .SLOT_0_AXI_wlast(1'b0),
        .SLOT_0_AXI_wready(1'b0),
        .SLOT_0_AXI_wstrb({1'b1,1'b1,1'b1,1'b1}),
        .SLOT_0_AXI_wvalid(1'b0),
        .TRIG_IN_ack(mdm_1_TRIG_OUT_0_ACK),
        .TRIG_IN_trig(mdm_1_TRIG_OUT_0_TRIG),
        .TRIG_OUT_ack(system_ila_TRIG_OUT_ACK),
        .TRIG_OUT_trig(system_ila_TRIG_OUT_TRIG),
        .clk(microblaze_0_Clk),
        .resetn(rst_clk_wiz_1_100M_peripheral_aresetn));
endmodule

module microblaze_0_local_memory_imp_1MRBCIZ
   (DLMB_abus,
    DLMB_addrstrobe,
    DLMB_be,
    DLMB_ce,
    DLMB_readdbus,
    DLMB_readstrobe,
    DLMB_ready,
    DLMB_ue,
    DLMB_wait,
    DLMB_writedbus,
    DLMB_writestrobe,
    ILMB_abus,
    ILMB_addrstrobe,
    ILMB_ce,
    ILMB_readdbus,
    ILMB_readstrobe,
    ILMB_ready,
    ILMB_ue,
    ILMB_wait,
    LMB_Clk,
    LMB_M_abus,
    LMB_M_addrstrobe,
    LMB_M_be,
    LMB_M_ce,
    LMB_M_readdbus,
    LMB_M_readstrobe,
    LMB_M_ready,
    LMB_M_ue,
    LMB_M_wait,
    LMB_M_writedbus,
    LMB_M_writestrobe,
    SYS_Rst);
  input [0:31]DLMB_abus;
  input DLMB_addrstrobe;
  input [0:3]DLMB_be;
  output DLMB_ce;
  output [0:31]DLMB_readdbus;
  input DLMB_readstrobe;
  output DLMB_ready;
  output DLMB_ue;
  output DLMB_wait;
  input [0:31]DLMB_writedbus;
  input DLMB_writestrobe;
  input [0:31]ILMB_abus;
  input ILMB_addrstrobe;
  output ILMB_ce;
  output [0:31]ILMB_readdbus;
  input ILMB_readstrobe;
  output ILMB_ready;
  output ILMB_ue;
  output ILMB_wait;
  input LMB_Clk;
  input [0:31]LMB_M_abus;
  input LMB_M_addrstrobe;
  input [0:3]LMB_M_be;
  output LMB_M_ce;
  output [0:31]LMB_M_readdbus;
  input LMB_M_readstrobe;
  output LMB_M_ready;
  output LMB_M_ue;
  output LMB_M_wait;
  input [0:31]LMB_M_writedbus;
  input LMB_M_writestrobe;
  input SYS_Rst;

  wire [0:31]DLMB_abus;
  wire DLMB_addrstrobe;
  wire [0:3]DLMB_be;
  wire DLMB_ce;
  wire [0:31]DLMB_readdbus;
  wire DLMB_readstrobe;
  wire DLMB_ready;
  wire DLMB_ue;
  wire DLMB_wait;
  wire [0:31]DLMB_writedbus;
  wire DLMB_writestrobe;
  wire [0:31]ILMB_abus;
  wire ILMB_addrstrobe;
  wire ILMB_ce;
  wire [0:31]ILMB_readdbus;
  wire ILMB_readstrobe;
  wire ILMB_ready;
  wire ILMB_ue;
  wire ILMB_wait;
  wire LMB_Clk;
  wire [0:31]LMB_M_abus;
  wire LMB_M_addrstrobe;
  wire [0:3]LMB_M_be;
  wire LMB_M_ce;
  wire [0:31]LMB_M_readdbus;
  wire LMB_M_readstrobe;
  wire LMB_M_ready;
  wire LMB_M_ue;
  wire LMB_M_wait;
  wire [0:31]LMB_M_writedbus;
  wire LMB_M_writestrobe;
  wire SYS_Rst;
  wire [0:31]microblaze_0_dlmb_bus_ABUS;
  wire microblaze_0_dlmb_bus_ADDRSTROBE;
  wire [0:3]microblaze_0_dlmb_bus_BE;
  wire microblaze_0_dlmb_bus_CE;
  wire [0:31]microblaze_0_dlmb_bus_READDBUS;
  wire microblaze_0_dlmb_bus_READSTROBE;
  wire microblaze_0_dlmb_bus_READY;
  wire microblaze_0_dlmb_bus_UE;
  wire microblaze_0_dlmb_bus_WAIT;
  wire [0:31]microblaze_0_dlmb_bus_WRITEDBUS;
  wire microblaze_0_dlmb_bus_WRITESTROBE;
  wire [0:31]microblaze_0_dlmb_cntlr_ADDR;
  wire microblaze_0_dlmb_cntlr_CLK;
  wire [0:31]microblaze_0_dlmb_cntlr_DIN;
  wire [31:0]microblaze_0_dlmb_cntlr_DOUT;
  wire microblaze_0_dlmb_cntlr_EN;
  wire microblaze_0_dlmb_cntlr_RST;
  wire [0:3]microblaze_0_dlmb_cntlr_WE;
  wire [0:31]microblaze_0_ilmb_bus_ABUS;
  wire microblaze_0_ilmb_bus_ADDRSTROBE;
  wire [0:3]microblaze_0_ilmb_bus_BE;
  wire microblaze_0_ilmb_bus_CE;
  wire [0:31]microblaze_0_ilmb_bus_READDBUS;
  wire microblaze_0_ilmb_bus_READSTROBE;
  wire microblaze_0_ilmb_bus_READY;
  wire microblaze_0_ilmb_bus_UE;
  wire microblaze_0_ilmb_bus_WAIT;
  wire [0:31]microblaze_0_ilmb_bus_WRITEDBUS;
  wire microblaze_0_ilmb_bus_WRITESTROBE;
  wire [0:31]microblaze_0_ilmb_cntlr_ADDR;
  wire microblaze_0_ilmb_cntlr_CLK;
  wire [0:31]microblaze_0_ilmb_cntlr_DIN;
  wire [31:0]microblaze_0_ilmb_cntlr_DOUT;
  wire microblaze_0_ilmb_cntlr_EN;
  wire microblaze_0_ilmb_cntlr_RST;
  wire [0:3]microblaze_0_ilmb_cntlr_WE;
  wire [0:31]microblaze_0_lmb_bus_ABUS;
  wire microblaze_0_lmb_bus_ADDRSTROBE;
  wire [0:3]microblaze_0_lmb_bus_BE;
  wire microblaze_0_lmb_bus_CE;
  wire [0:31]microblaze_0_lmb_bus_READDBUS;
  wire microblaze_0_lmb_bus_READSTROBE;
  wire microblaze_0_lmb_bus_READY;
  wire microblaze_0_lmb_bus_UE;
  wire microblaze_0_lmb_bus_WAIT;
  wire [0:31]microblaze_0_lmb_bus_WRITEDBUS;
  wire microblaze_0_lmb_bus_WRITESTROBE;

  (* BMM_INFO_ADDRESS_SPACE = "byte  0x00000000 32 > block_design microblaze_0_local_memory/lmb_bram" *) 
  (* KEEP_HIERARCHY = "YES" *) 
  block_design_dlmb_bram_if_cntlr_7 dlmb_bram_if_cntlr
       (.BRAM_Addr_A(microblaze_0_dlmb_cntlr_ADDR),
        .BRAM_Clk_A(microblaze_0_dlmb_cntlr_CLK),
        .BRAM_Din_A({microblaze_0_dlmb_cntlr_DOUT[31],microblaze_0_dlmb_cntlr_DOUT[30],microblaze_0_dlmb_cntlr_DOUT[29],microblaze_0_dlmb_cntlr_DOUT[28],microblaze_0_dlmb_cntlr_DOUT[27],microblaze_0_dlmb_cntlr_DOUT[26],microblaze_0_dlmb_cntlr_DOUT[25],microblaze_0_dlmb_cntlr_DOUT[24],microblaze_0_dlmb_cntlr_DOUT[23],microblaze_0_dlmb_cntlr_DOUT[22],microblaze_0_dlmb_cntlr_DOUT[21],microblaze_0_dlmb_cntlr_DOUT[20],microblaze_0_dlmb_cntlr_DOUT[19],microblaze_0_dlmb_cntlr_DOUT[18],microblaze_0_dlmb_cntlr_DOUT[17],microblaze_0_dlmb_cntlr_DOUT[16],microblaze_0_dlmb_cntlr_DOUT[15],microblaze_0_dlmb_cntlr_DOUT[14],microblaze_0_dlmb_cntlr_DOUT[13],microblaze_0_dlmb_cntlr_DOUT[12],microblaze_0_dlmb_cntlr_DOUT[11],microblaze_0_dlmb_cntlr_DOUT[10],microblaze_0_dlmb_cntlr_DOUT[9],microblaze_0_dlmb_cntlr_DOUT[8],microblaze_0_dlmb_cntlr_DOUT[7],microblaze_0_dlmb_cntlr_DOUT[6],microblaze_0_dlmb_cntlr_DOUT[5],microblaze_0_dlmb_cntlr_DOUT[4],microblaze_0_dlmb_cntlr_DOUT[3],microblaze_0_dlmb_cntlr_DOUT[2],microblaze_0_dlmb_cntlr_DOUT[1],microblaze_0_dlmb_cntlr_DOUT[0]}),
        .BRAM_Dout_A(microblaze_0_dlmb_cntlr_DIN),
        .BRAM_EN_A(microblaze_0_dlmb_cntlr_EN),
        .BRAM_Rst_A(microblaze_0_dlmb_cntlr_RST),
        .BRAM_WEN_A(microblaze_0_dlmb_cntlr_WE),
        .LMB1_ABus(microblaze_0_lmb_bus_ABUS),
        .LMB1_AddrStrobe(microblaze_0_lmb_bus_ADDRSTROBE),
        .LMB1_BE(microblaze_0_lmb_bus_BE),
        .LMB1_ReadStrobe(microblaze_0_lmb_bus_READSTROBE),
        .LMB1_WriteDBus(microblaze_0_lmb_bus_WRITEDBUS),
        .LMB1_WriteStrobe(microblaze_0_lmb_bus_WRITESTROBE),
        .LMB_ABus(microblaze_0_dlmb_bus_ABUS),
        .LMB_AddrStrobe(microblaze_0_dlmb_bus_ADDRSTROBE),
        .LMB_BE(microblaze_0_dlmb_bus_BE),
        .LMB_Clk(LMB_Clk),
        .LMB_ReadStrobe(microblaze_0_dlmb_bus_READSTROBE),
        .LMB_Rst(SYS_Rst),
        .LMB_WriteDBus(microblaze_0_dlmb_bus_WRITEDBUS),
        .LMB_WriteStrobe(microblaze_0_dlmb_bus_WRITESTROBE),
        .Sl1_CE(microblaze_0_lmb_bus_CE),
        .Sl1_DBus(microblaze_0_lmb_bus_READDBUS),
        .Sl1_Ready(microblaze_0_lmb_bus_READY),
        .Sl1_UE(microblaze_0_lmb_bus_UE),
        .Sl1_Wait(microblaze_0_lmb_bus_WAIT),
        .Sl_CE(microblaze_0_dlmb_bus_CE),
        .Sl_DBus(microblaze_0_dlmb_bus_READDBUS),
        .Sl_Ready(microblaze_0_dlmb_bus_READY),
        .Sl_UE(microblaze_0_dlmb_bus_UE),
        .Sl_Wait(microblaze_0_dlmb_bus_WAIT));
  block_design_dlmb_v10_7 dlmb_v10
       (.LMB_ABus(microblaze_0_dlmb_bus_ABUS),
        .LMB_AddrStrobe(microblaze_0_dlmb_bus_ADDRSTROBE),
        .LMB_BE(microblaze_0_dlmb_bus_BE),
        .LMB_CE(DLMB_ce),
        .LMB_Clk(LMB_Clk),
        .LMB_ReadDBus(DLMB_readdbus),
        .LMB_ReadStrobe(microblaze_0_dlmb_bus_READSTROBE),
        .LMB_Ready(DLMB_ready),
        .LMB_UE(DLMB_ue),
        .LMB_Wait(DLMB_wait),
        .LMB_WriteDBus(microblaze_0_dlmb_bus_WRITEDBUS),
        .LMB_WriteStrobe(microblaze_0_dlmb_bus_WRITESTROBE),
        .M_ABus(DLMB_abus),
        .M_AddrStrobe(DLMB_addrstrobe),
        .M_BE(DLMB_be),
        .M_DBus(DLMB_writedbus),
        .M_ReadStrobe(DLMB_readstrobe),
        .M_WriteStrobe(DLMB_writestrobe),
        .SYS_Rst(SYS_Rst),
        .Sl_CE(microblaze_0_dlmb_bus_CE),
        .Sl_DBus(microblaze_0_dlmb_bus_READDBUS),
        .Sl_Ready(microblaze_0_dlmb_bus_READY),
        .Sl_UE(microblaze_0_dlmb_bus_UE),
        .Sl_Wait(microblaze_0_dlmb_bus_WAIT));
  block_design_ilmb_bram_if_cntlr_7 ilmb_bram_if_cntlr
       (.BRAM_Addr_A(microblaze_0_ilmb_cntlr_ADDR),
        .BRAM_Clk_A(microblaze_0_ilmb_cntlr_CLK),
        .BRAM_Din_A({microblaze_0_ilmb_cntlr_DOUT[31],microblaze_0_ilmb_cntlr_DOUT[30],microblaze_0_ilmb_cntlr_DOUT[29],microblaze_0_ilmb_cntlr_DOUT[28],microblaze_0_ilmb_cntlr_DOUT[27],microblaze_0_ilmb_cntlr_DOUT[26],microblaze_0_ilmb_cntlr_DOUT[25],microblaze_0_ilmb_cntlr_DOUT[24],microblaze_0_ilmb_cntlr_DOUT[23],microblaze_0_ilmb_cntlr_DOUT[22],microblaze_0_ilmb_cntlr_DOUT[21],microblaze_0_ilmb_cntlr_DOUT[20],microblaze_0_ilmb_cntlr_DOUT[19],microblaze_0_ilmb_cntlr_DOUT[18],microblaze_0_ilmb_cntlr_DOUT[17],microblaze_0_ilmb_cntlr_DOUT[16],microblaze_0_ilmb_cntlr_DOUT[15],microblaze_0_ilmb_cntlr_DOUT[14],microblaze_0_ilmb_cntlr_DOUT[13],microblaze_0_ilmb_cntlr_DOUT[12],microblaze_0_ilmb_cntlr_DOUT[11],microblaze_0_ilmb_cntlr_DOUT[10],microblaze_0_ilmb_cntlr_DOUT[9],microblaze_0_ilmb_cntlr_DOUT[8],microblaze_0_ilmb_cntlr_DOUT[7],microblaze_0_ilmb_cntlr_DOUT[6],microblaze_0_ilmb_cntlr_DOUT[5],microblaze_0_ilmb_cntlr_DOUT[4],microblaze_0_ilmb_cntlr_DOUT[3],microblaze_0_ilmb_cntlr_DOUT[2],microblaze_0_ilmb_cntlr_DOUT[1],microblaze_0_ilmb_cntlr_DOUT[0]}),
        .BRAM_Dout_A(microblaze_0_ilmb_cntlr_DIN),
        .BRAM_EN_A(microblaze_0_ilmb_cntlr_EN),
        .BRAM_Rst_A(microblaze_0_ilmb_cntlr_RST),
        .BRAM_WEN_A(microblaze_0_ilmb_cntlr_WE),
        .LMB_ABus(microblaze_0_ilmb_bus_ABUS),
        .LMB_AddrStrobe(microblaze_0_ilmb_bus_ADDRSTROBE),
        .LMB_BE(microblaze_0_ilmb_bus_BE),
        .LMB_Clk(LMB_Clk),
        .LMB_ReadStrobe(microblaze_0_ilmb_bus_READSTROBE),
        .LMB_Rst(SYS_Rst),
        .LMB_WriteDBus(microblaze_0_ilmb_bus_WRITEDBUS),
        .LMB_WriteStrobe(microblaze_0_ilmb_bus_WRITESTROBE),
        .Sl_CE(microblaze_0_ilmb_bus_CE),
        .Sl_DBus(microblaze_0_ilmb_bus_READDBUS),
        .Sl_Ready(microblaze_0_ilmb_bus_READY),
        .Sl_UE(microblaze_0_ilmb_bus_UE),
        .Sl_Wait(microblaze_0_ilmb_bus_WAIT));
  block_design_ilmb_v10_7 ilmb_v10
       (.LMB_ABus(microblaze_0_ilmb_bus_ABUS),
        .LMB_AddrStrobe(microblaze_0_ilmb_bus_ADDRSTROBE),
        .LMB_BE(microblaze_0_ilmb_bus_BE),
        .LMB_CE(ILMB_ce),
        .LMB_Clk(LMB_Clk),
        .LMB_ReadDBus(ILMB_readdbus),
        .LMB_ReadStrobe(microblaze_0_ilmb_bus_READSTROBE),
        .LMB_Ready(ILMB_ready),
        .LMB_UE(ILMB_ue),
        .LMB_Wait(ILMB_wait),
        .LMB_WriteDBus(microblaze_0_ilmb_bus_WRITEDBUS),
        .LMB_WriteStrobe(microblaze_0_ilmb_bus_WRITESTROBE),
        .M_ABus(ILMB_abus),
        .M_AddrStrobe(ILMB_addrstrobe),
        .M_BE({1'b0,1'b0,1'b0,1'b0}),
        .M_DBus({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .M_ReadStrobe(ILMB_readstrobe),
        .M_WriteStrobe(1'b0),
        .SYS_Rst(SYS_Rst),
        .Sl_CE(microblaze_0_ilmb_bus_CE),
        .Sl_DBus(microblaze_0_ilmb_bus_READDBUS),
        .Sl_Ready(microblaze_0_ilmb_bus_READY),
        .Sl_UE(microblaze_0_ilmb_bus_UE),
        .Sl_Wait(microblaze_0_ilmb_bus_WAIT));
  block_design_lmb_bram_7 lmb_bram
       (.addra({microblaze_0_dlmb_cntlr_ADDR[0],microblaze_0_dlmb_cntlr_ADDR[1],microblaze_0_dlmb_cntlr_ADDR[2],microblaze_0_dlmb_cntlr_ADDR[3],microblaze_0_dlmb_cntlr_ADDR[4],microblaze_0_dlmb_cntlr_ADDR[5],microblaze_0_dlmb_cntlr_ADDR[6],microblaze_0_dlmb_cntlr_ADDR[7],microblaze_0_dlmb_cntlr_ADDR[8],microblaze_0_dlmb_cntlr_ADDR[9],microblaze_0_dlmb_cntlr_ADDR[10],microblaze_0_dlmb_cntlr_ADDR[11],microblaze_0_dlmb_cntlr_ADDR[12],microblaze_0_dlmb_cntlr_ADDR[13],microblaze_0_dlmb_cntlr_ADDR[14],microblaze_0_dlmb_cntlr_ADDR[15],microblaze_0_dlmb_cntlr_ADDR[16],microblaze_0_dlmb_cntlr_ADDR[17],microblaze_0_dlmb_cntlr_ADDR[18],microblaze_0_dlmb_cntlr_ADDR[19],microblaze_0_dlmb_cntlr_ADDR[20],microblaze_0_dlmb_cntlr_ADDR[21],microblaze_0_dlmb_cntlr_ADDR[22],microblaze_0_dlmb_cntlr_ADDR[23],microblaze_0_dlmb_cntlr_ADDR[24],microblaze_0_dlmb_cntlr_ADDR[25],microblaze_0_dlmb_cntlr_ADDR[26],microblaze_0_dlmb_cntlr_ADDR[27],microblaze_0_dlmb_cntlr_ADDR[28],microblaze_0_dlmb_cntlr_ADDR[29],microblaze_0_dlmb_cntlr_ADDR[30],microblaze_0_dlmb_cntlr_ADDR[31]}),
        .addrb({microblaze_0_ilmb_cntlr_ADDR[0],microblaze_0_ilmb_cntlr_ADDR[1],microblaze_0_ilmb_cntlr_ADDR[2],microblaze_0_ilmb_cntlr_ADDR[3],microblaze_0_ilmb_cntlr_ADDR[4],microblaze_0_ilmb_cntlr_ADDR[5],microblaze_0_ilmb_cntlr_ADDR[6],microblaze_0_ilmb_cntlr_ADDR[7],microblaze_0_ilmb_cntlr_ADDR[8],microblaze_0_ilmb_cntlr_ADDR[9],microblaze_0_ilmb_cntlr_ADDR[10],microblaze_0_ilmb_cntlr_ADDR[11],microblaze_0_ilmb_cntlr_ADDR[12],microblaze_0_ilmb_cntlr_ADDR[13],microblaze_0_ilmb_cntlr_ADDR[14],microblaze_0_ilmb_cntlr_ADDR[15],microblaze_0_ilmb_cntlr_ADDR[16],microblaze_0_ilmb_cntlr_ADDR[17],microblaze_0_ilmb_cntlr_ADDR[18],microblaze_0_ilmb_cntlr_ADDR[19],microblaze_0_ilmb_cntlr_ADDR[20],microblaze_0_ilmb_cntlr_ADDR[21],microblaze_0_ilmb_cntlr_ADDR[22],microblaze_0_ilmb_cntlr_ADDR[23],microblaze_0_ilmb_cntlr_ADDR[24],microblaze_0_ilmb_cntlr_ADDR[25],microblaze_0_ilmb_cntlr_ADDR[26],microblaze_0_ilmb_cntlr_ADDR[27],microblaze_0_ilmb_cntlr_ADDR[28],microblaze_0_ilmb_cntlr_ADDR[29],microblaze_0_ilmb_cntlr_ADDR[30],microblaze_0_ilmb_cntlr_ADDR[31]}),
        .clka(microblaze_0_dlmb_cntlr_CLK),
        .clkb(microblaze_0_ilmb_cntlr_CLK),
        .dina({microblaze_0_dlmb_cntlr_DIN[0],microblaze_0_dlmb_cntlr_DIN[1],microblaze_0_dlmb_cntlr_DIN[2],microblaze_0_dlmb_cntlr_DIN[3],microblaze_0_dlmb_cntlr_DIN[4],microblaze_0_dlmb_cntlr_DIN[5],microblaze_0_dlmb_cntlr_DIN[6],microblaze_0_dlmb_cntlr_DIN[7],microblaze_0_dlmb_cntlr_DIN[8],microblaze_0_dlmb_cntlr_DIN[9],microblaze_0_dlmb_cntlr_DIN[10],microblaze_0_dlmb_cntlr_DIN[11],microblaze_0_dlmb_cntlr_DIN[12],microblaze_0_dlmb_cntlr_DIN[13],microblaze_0_dlmb_cntlr_DIN[14],microblaze_0_dlmb_cntlr_DIN[15],microblaze_0_dlmb_cntlr_DIN[16],microblaze_0_dlmb_cntlr_DIN[17],microblaze_0_dlmb_cntlr_DIN[18],microblaze_0_dlmb_cntlr_DIN[19],microblaze_0_dlmb_cntlr_DIN[20],microblaze_0_dlmb_cntlr_DIN[21],microblaze_0_dlmb_cntlr_DIN[22],microblaze_0_dlmb_cntlr_DIN[23],microblaze_0_dlmb_cntlr_DIN[24],microblaze_0_dlmb_cntlr_DIN[25],microblaze_0_dlmb_cntlr_DIN[26],microblaze_0_dlmb_cntlr_DIN[27],microblaze_0_dlmb_cntlr_DIN[28],microblaze_0_dlmb_cntlr_DIN[29],microblaze_0_dlmb_cntlr_DIN[30],microblaze_0_dlmb_cntlr_DIN[31]}),
        .dinb({microblaze_0_ilmb_cntlr_DIN[0],microblaze_0_ilmb_cntlr_DIN[1],microblaze_0_ilmb_cntlr_DIN[2],microblaze_0_ilmb_cntlr_DIN[3],microblaze_0_ilmb_cntlr_DIN[4],microblaze_0_ilmb_cntlr_DIN[5],microblaze_0_ilmb_cntlr_DIN[6],microblaze_0_ilmb_cntlr_DIN[7],microblaze_0_ilmb_cntlr_DIN[8],microblaze_0_ilmb_cntlr_DIN[9],microblaze_0_ilmb_cntlr_DIN[10],microblaze_0_ilmb_cntlr_DIN[11],microblaze_0_ilmb_cntlr_DIN[12],microblaze_0_ilmb_cntlr_DIN[13],microblaze_0_ilmb_cntlr_DIN[14],microblaze_0_ilmb_cntlr_DIN[15],microblaze_0_ilmb_cntlr_DIN[16],microblaze_0_ilmb_cntlr_DIN[17],microblaze_0_ilmb_cntlr_DIN[18],microblaze_0_ilmb_cntlr_DIN[19],microblaze_0_ilmb_cntlr_DIN[20],microblaze_0_ilmb_cntlr_DIN[21],microblaze_0_ilmb_cntlr_DIN[22],microblaze_0_ilmb_cntlr_DIN[23],microblaze_0_ilmb_cntlr_DIN[24],microblaze_0_ilmb_cntlr_DIN[25],microblaze_0_ilmb_cntlr_DIN[26],microblaze_0_ilmb_cntlr_DIN[27],microblaze_0_ilmb_cntlr_DIN[28],microblaze_0_ilmb_cntlr_DIN[29],microblaze_0_ilmb_cntlr_DIN[30],microblaze_0_ilmb_cntlr_DIN[31]}),
        .douta(microblaze_0_dlmb_cntlr_DOUT),
        .doutb(microblaze_0_ilmb_cntlr_DOUT),
        .ena(microblaze_0_dlmb_cntlr_EN),
        .enb(microblaze_0_ilmb_cntlr_EN),
        .rsta(microblaze_0_dlmb_cntlr_RST),
        .rstb(microblaze_0_ilmb_cntlr_RST),
        .wea({microblaze_0_dlmb_cntlr_WE[0],microblaze_0_dlmb_cntlr_WE[1],microblaze_0_dlmb_cntlr_WE[2],microblaze_0_dlmb_cntlr_WE[3]}),
        .web({microblaze_0_ilmb_cntlr_WE[0],microblaze_0_ilmb_cntlr_WE[1],microblaze_0_ilmb_cntlr_WE[2],microblaze_0_ilmb_cntlr_WE[3]}));
  block_design_lmb_v10_2 lmb_v10
       (.LMB_ABus(microblaze_0_lmb_bus_ABUS),
        .LMB_AddrStrobe(microblaze_0_lmb_bus_ADDRSTROBE),
        .LMB_BE(microblaze_0_lmb_bus_BE),
        .LMB_CE(LMB_M_ce),
        .LMB_Clk(LMB_Clk),
        .LMB_ReadDBus(LMB_M_readdbus),
        .LMB_ReadStrobe(microblaze_0_lmb_bus_READSTROBE),
        .LMB_Ready(LMB_M_ready),
        .LMB_UE(LMB_M_ue),
        .LMB_Wait(LMB_M_wait),
        .LMB_WriteDBus(microblaze_0_lmb_bus_WRITEDBUS),
        .LMB_WriteStrobe(microblaze_0_lmb_bus_WRITESTROBE),
        .M_ABus(LMB_M_abus),
        .M_AddrStrobe(LMB_M_addrstrobe),
        .M_BE(LMB_M_be),
        .M_DBus(LMB_M_writedbus),
        .M_ReadStrobe(LMB_M_readstrobe),
        .M_WriteStrobe(LMB_M_writestrobe),
        .SYS_Rst(SYS_Rst),
        .Sl_CE(microblaze_0_lmb_bus_CE),
        .Sl_DBus(microblaze_0_lmb_bus_READDBUS),
        .Sl_Ready(microblaze_0_lmb_bus_READY),
        .Sl_UE(microblaze_0_lmb_bus_UE),
        .Sl_Wait(microblaze_0_lmb_bus_WAIT));
endmodule
