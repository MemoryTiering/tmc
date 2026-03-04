// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2026 Advanced Micro Devices, Inc. All Rights Reserved.
// -------------------------------------------------------------------------------
// This file contains confidential and proprietary information
// of AMD and is protected under U.S. and international copyright
// and other intellectual property laws.
//
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// AMD, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND AMD HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) AMD shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or AMD had been advised of the
// possibility of the same.
//
// CRITICAL APPLICATIONS
// AMD products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of AMD products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
//
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
//
// DO NOT MODIFY THIS FILE.

// MODULE VLNV: xilinx.com:ip:axi_datamover:5.1

`timescale 1ps / 1ps

`include "vivado_interfaces.svh"

module axi_datamover_0_sv (
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_MM2S" *)
  (* X_INTERFACE_MODE = "master M_AXI_MM2S" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXI_MM2S, NUM_READ_OUTSTANDING 2, DATA_WIDTH 32, PROTOCOL AXI4, FREQ_HZ 100000000, ID_WIDTH 4, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 4, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_ONLY, HAS_BURST 1, HAS_LOCK 0, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 0, HAS_BRESP 0, HAS_RRESP 1, SUPPORTS_NARROW_BURST 1, NUM_WRITE_OUTSTANDING 2, MAX_BURST_LENGTH 256, PHASE 0.0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
  vivado_aximm_v1_0.master M_AXI_MM2S,
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_S2MM" *)
  (* X_INTERFACE_MODE = "master M_AXI_S2MM" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXI_S2MM, NUM_WRITE_OUTSTANDING 2, DATA_WIDTH 32, PROTOCOL AXI4, FREQ_HZ 100000000, ID_WIDTH 4, ADDR_WIDTH 32, AWUSER_WIDTH 4, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE WRITE_ONLY, HAS_BURST 1, HAS_LOCK 0, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 0, SUPPORTS_NARROW_BURST 1, NUM_READ_OUTSTANDING 2, MAX_BURST_LENGTH 256, PHASE 0.0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
  vivado_aximm_v1_0.master M_AXI_S2MM,
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_S2MM" *)
  (* X_INTERFACE_MODE = "slave S_AXIS_S2MM" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXIS_S2MM, TDATA_NUM_BYTES 4, TDEST_WIDTH 0, TID_WIDTH 0, TUSER_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 1, HAS_TLAST 1, FREQ_HZ 100000000, PHASE 0.0, LAYERED_METADATA undef, INSERT_VIP 0" *)
  vivado_axis_v1_0.slave S_AXIS_S2MM,
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_S2MM_CMD" *)
  (* X_INTERFACE_MODE = "slave S_AXIS_S2MM_CMD" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXIS_S2MM_CMD, TDATA_NUM_BYTES 9, TDEST_WIDTH 0, TID_WIDTH 0, TUSER_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 0, HAS_TLAST 0, FREQ_HZ 100000000, PHASE 0.0, LAYERED_METADATA undef, INSERT_VIP 0" *)
  vivado_axis_v1_0.slave S_AXIS_S2MM_CMD,
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_S2MM_STS" *)
  (* X_INTERFACE_MODE = "master M_AXIS_S2MM_STS" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXIS_S2MM_STS, TDATA_NUM_BYTES 1, TDEST_WIDTH 0, TID_WIDTH 0, TUSER_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 1, HAS_TLAST 1, FREQ_HZ 100000000, PHASE 0.0, LAYERED_METADATA undef, INSERT_VIP 0" *)
  vivado_axis_v1_0.master M_AXIS_S2MM_STS,
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 S_AXIS_MM2S_CMD" *)
  (* X_INTERFACE_MODE = "slave S_AXIS_MM2S_CMD" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXIS_MM2S_CMD, TDATA_NUM_BYTES 9, TDEST_WIDTH 0, TID_WIDTH 0, TUSER_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 0, HAS_TLAST 0, FREQ_HZ 100000000, PHASE 0.0, LAYERED_METADATA undef, INSERT_VIP 0" *)
  vivado_axis_v1_0.slave S_AXIS_MM2S_CMD,
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_MM2S_STS" *)
  (* X_INTERFACE_MODE = "master M_AXIS_MM2S_STS" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXIS_MM2S_STS, TDATA_NUM_BYTES 1, TDEST_WIDTH 0, TID_WIDTH 0, TUSER_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 1, HAS_TLAST 1, FREQ_HZ 100000000, PHASE 0.0, LAYERED_METADATA undef, INSERT_VIP 0" *)
  vivado_axis_v1_0.master M_AXIS_MM2S_STS,
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 M_AXIS_MM2S" *)
  (* X_INTERFACE_MODE = "master M_AXIS_MM2S" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXIS_MM2S, TDATA_NUM_BYTES 4, TDEST_WIDTH 0, TID_WIDTH 0, TUSER_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 1, HAS_TLAST 1, FREQ_HZ 100000000, PHASE 0.0, LAYERED_METADATA undef, INSERT_VIP 0" *)
  vivado_axis_v1_0.master M_AXIS_MM2S,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire m_axi_mm2s_aclk,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire m_axi_mm2s_aresetn,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire mm2s_err,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire m_axis_mm2s_cmdsts_aclk,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire m_axis_mm2s_cmdsts_aresetn,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire m_axi_s2mm_aclk,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire m_axi_s2mm_aresetn,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire s2mm_err,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire m_axis_s2mm_cmdsts_awclk,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire m_axis_s2mm_cmdsts_aresetn
);

  // interface wire assignments
  assign M_AXI_MM2S.ARLOCK = 0;
  assign M_AXI_MM2S.ARQOS = 0;
  assign M_AXI_MM2S.ARREGION = 0;
  assign M_AXI_MM2S.AWADDR = 0;
  assign M_AXI_MM2S.AWBURST = 0;
  assign M_AXI_MM2S.AWCACHE = 0;
  assign M_AXI_MM2S.AWID = 0;
  assign M_AXI_MM2S.AWLEN = 0;
  assign M_AXI_MM2S.AWLOCK = 0;
  assign M_AXI_MM2S.AWPROT = 0;
  assign M_AXI_MM2S.AWQOS = 0;
  assign M_AXI_MM2S.AWREGION = 0;
  assign M_AXI_MM2S.AWSIZE = 0;
  assign M_AXI_MM2S.AWUSER = 0;
  assign M_AXI_MM2S.AWVALID = 0;
  assign M_AXI_MM2S.BREADY = 0;
  assign M_AXI_MM2S.WDATA = 0;
  assign M_AXI_MM2S.WID = 0;
  assign M_AXI_MM2S.WLAST = 0;
  assign M_AXI_MM2S.WSTRB = 0;
  assign M_AXI_MM2S.WUSER = 0;
  assign M_AXI_MM2S.WVALID = 0;
  assign M_AXI_S2MM.ARADDR = 0;
  assign M_AXI_S2MM.ARBURST = 0;
  assign M_AXI_S2MM.ARCACHE = 0;
  assign M_AXI_S2MM.ARID = 0;
  assign M_AXI_S2MM.ARLEN = 0;
  assign M_AXI_S2MM.ARLOCK = 0;
  assign M_AXI_S2MM.ARPROT = 0;
  assign M_AXI_S2MM.ARQOS = 0;
  assign M_AXI_S2MM.ARREGION = 0;
  assign M_AXI_S2MM.ARSIZE = 0;
  assign M_AXI_S2MM.ARUSER = 0;
  assign M_AXI_S2MM.ARVALID = 0;
  assign M_AXI_S2MM.AWLOCK = 0;
  assign M_AXI_S2MM.AWQOS = 0;
  assign M_AXI_S2MM.AWREGION = 0;
  assign M_AXI_S2MM.RREADY = 0;
  assign M_AXI_S2MM.WID = 0;
  assign M_AXI_S2MM.WUSER = 0;
  assign M_AXIS_S2MM_STS.TDEST = 0;
  assign M_AXIS_S2MM_STS.TID = 0;
  assign M_AXIS_S2MM_STS.TSTRB = 0;
  assign M_AXIS_S2MM_STS.TUSER = 0;
  assign M_AXIS_MM2S_STS.TDEST = 0;
  assign M_AXIS_MM2S_STS.TID = 0;
  assign M_AXIS_MM2S_STS.TSTRB = 0;
  assign M_AXIS_MM2S_STS.TUSER = 0;
  assign M_AXIS_MM2S.TDEST = 0;
  assign M_AXIS_MM2S.TID = 0;
  assign M_AXIS_MM2S.TSTRB = 0;
  assign M_AXIS_MM2S.TUSER = 0;

  axi_datamover_0 inst (
    .m_axi_mm2s_aclk(m_axi_mm2s_aclk),
    .m_axi_mm2s_aresetn(m_axi_mm2s_aresetn),
    .mm2s_err(mm2s_err),
    .m_axis_mm2s_cmdsts_aclk(m_axis_mm2s_cmdsts_aclk),
    .m_axis_mm2s_cmdsts_aresetn(m_axis_mm2s_cmdsts_aresetn),
    .s_axis_mm2s_cmd_tvalid(S_AXIS_MM2S_CMD.TVALID),
    .s_axis_mm2s_cmd_tready(S_AXIS_MM2S_CMD.TREADY),
    .s_axis_mm2s_cmd_tdata(S_AXIS_MM2S_CMD.TDATA),
    .m_axis_mm2s_sts_tvalid(M_AXIS_MM2S_STS.TVALID),
    .m_axis_mm2s_sts_tready(M_AXIS_MM2S_STS.TREADY),
    .m_axis_mm2s_sts_tdata(M_AXIS_MM2S_STS.TDATA),
    .m_axis_mm2s_sts_tkeep(M_AXIS_MM2S_STS.TKEEP),
    .m_axis_mm2s_sts_tlast(M_AXIS_MM2S_STS.TLAST),
    .m_axi_mm2s_arid(M_AXI_MM2S.ARID),
    .m_axi_mm2s_araddr(M_AXI_MM2S.ARADDR),
    .m_axi_mm2s_arlen(M_AXI_MM2S.ARLEN),
    .m_axi_mm2s_arsize(M_AXI_MM2S.ARSIZE),
    .m_axi_mm2s_arburst(M_AXI_MM2S.ARBURST),
    .m_axi_mm2s_arprot(M_AXI_MM2S.ARPROT),
    .m_axi_mm2s_arcache(M_AXI_MM2S.ARCACHE),
    .m_axi_mm2s_aruser(M_AXI_MM2S.ARUSER),
    .m_axi_mm2s_arvalid(M_AXI_MM2S.ARVALID),
    .m_axi_mm2s_arready(M_AXI_MM2S.ARREADY),
    .m_axi_mm2s_rdata(M_AXI_MM2S.RDATA),
    .m_axi_mm2s_rresp(M_AXI_MM2S.RRESP),
    .m_axi_mm2s_rlast(M_AXI_MM2S.RLAST),
    .m_axi_mm2s_rvalid(M_AXI_MM2S.RVALID),
    .m_axi_mm2s_rready(M_AXI_MM2S.RREADY),
    .m_axis_mm2s_tdata(M_AXIS_MM2S.TDATA),
    .m_axis_mm2s_tkeep(M_AXIS_MM2S.TKEEP),
    .m_axis_mm2s_tlast(M_AXIS_MM2S.TLAST),
    .m_axis_mm2s_tvalid(M_AXIS_MM2S.TVALID),
    .m_axis_mm2s_tready(M_AXIS_MM2S.TREADY),
    .m_axi_s2mm_aclk(m_axi_s2mm_aclk),
    .m_axi_s2mm_aresetn(m_axi_s2mm_aresetn),
    .s2mm_err(s2mm_err),
    .m_axis_s2mm_cmdsts_awclk(m_axis_s2mm_cmdsts_awclk),
    .m_axis_s2mm_cmdsts_aresetn(m_axis_s2mm_cmdsts_aresetn),
    .s_axis_s2mm_cmd_tvalid(S_AXIS_S2MM_CMD.TVALID),
    .s_axis_s2mm_cmd_tready(S_AXIS_S2MM_CMD.TREADY),
    .s_axis_s2mm_cmd_tdata(S_AXIS_S2MM_CMD.TDATA),
    .m_axis_s2mm_sts_tvalid(M_AXIS_S2MM_STS.TVALID),
    .m_axis_s2mm_sts_tready(M_AXIS_S2MM_STS.TREADY),
    .m_axis_s2mm_sts_tdata(M_AXIS_S2MM_STS.TDATA),
    .m_axis_s2mm_sts_tkeep(M_AXIS_S2MM_STS.TKEEP),
    .m_axis_s2mm_sts_tlast(M_AXIS_S2MM_STS.TLAST),
    .m_axi_s2mm_awid(M_AXI_S2MM.AWID),
    .m_axi_s2mm_awaddr(M_AXI_S2MM.AWADDR),
    .m_axi_s2mm_awlen(M_AXI_S2MM.AWLEN),
    .m_axi_s2mm_awsize(M_AXI_S2MM.AWSIZE),
    .m_axi_s2mm_awburst(M_AXI_S2MM.AWBURST),
    .m_axi_s2mm_awprot(M_AXI_S2MM.AWPROT),
    .m_axi_s2mm_awcache(M_AXI_S2MM.AWCACHE),
    .m_axi_s2mm_awuser(M_AXI_S2MM.AWUSER),
    .m_axi_s2mm_awvalid(M_AXI_S2MM.AWVALID),
    .m_axi_s2mm_awready(M_AXI_S2MM.AWREADY),
    .m_axi_s2mm_wdata(M_AXI_S2MM.WDATA),
    .m_axi_s2mm_wstrb(M_AXI_S2MM.WSTRB),
    .m_axi_s2mm_wlast(M_AXI_S2MM.WLAST),
    .m_axi_s2mm_wvalid(M_AXI_S2MM.WVALID),
    .m_axi_s2mm_wready(M_AXI_S2MM.WREADY),
    .m_axi_s2mm_bresp(M_AXI_S2MM.BRESP),
    .m_axi_s2mm_bvalid(M_AXI_S2MM.BVALID),
    .m_axi_s2mm_bready(M_AXI_S2MM.BREADY),
    .s_axis_s2mm_tdata(S_AXIS_S2MM.TDATA),
    .s_axis_s2mm_tkeep(S_AXIS_S2MM.TKEEP),
    .s_axis_s2mm_tlast(S_AXIS_S2MM.TLAST),
    .s_axis_s2mm_tvalid(S_AXIS_S2MM.TVALID),
    .s_axis_s2mm_tready(S_AXIS_S2MM.TREADY)
  );

endmodule
