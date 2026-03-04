// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtmc_controller_tb.h for the primary calling header

#ifndef VERILATED_VTMC_CONTROLLER_TB___024ROOT_H_
#define VERILATED_VTMC_CONTROLLER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtmc_controller_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtmc_controller_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tmc_controller_tb__DOT__aclk;
        CData/*0:0*/ tmc_controller_tb__DOT__aresetn;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_AWVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_AWREADY;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_WVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_WREADY;
        CData/*1:0*/ tmc_controller_tb__DOT__S_AXI_BRESP;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_BVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_BREADY;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_ARVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_ARREADY;
        CData/*1:0*/ tmc_controller_tb__DOT__S_AXI_RRESP;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_RVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXI_RREADY;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_AWVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_AWREADY;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_WVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_WREADY;
        CData/*1:0*/ tmc_controller_tb__DOT__M_AXI_BRESP;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_BVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_BREADY;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_ARVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_ARREADY;
        CData/*1:0*/ tmc_controller_tb__DOT__M_AXI_RRESP;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_RLAST;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_RVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXI_RREADY;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TREADY;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TREADY;
        CData/*7:0*/ tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TDATA;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY;
        CData/*7:0*/ tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TDATA;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TVALID;
        CData/*0:0*/ tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY;
        CData/*0:0*/ tmc_controller_tb__DOT__aw_seen;
        CData/*0:0*/ tmc_controller_tb__DOT__w_seen;
        CData/*0:0*/ tmc_controller_tb__DOT__mm2s_cmd_seen;
        CData/*0:0*/ tmc_controller_tb__DOT__s2mm_cmd_seen;
        CData/*1:0*/ tmc_controller_tb__DOT__dut__DOT__wr_state;
        CData/*1:0*/ tmc_controller_tb__DOT__dut__DOT__rd_state;
        CData/*2:0*/ tmc_controller_tb__DOT__dut__DOT__mig_state;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT__wr_was_logical;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT__rd_was_logical;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT__relocation_pending;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT__last_victim_slot;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT__victim_found;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT__victim_slot_sel;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__0;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__0;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__1;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__1;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__2;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__2;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_hd984f98f__0;
    };
    struct {
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_h46021f9d__0;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_h4f50fce4__0;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_hbfddda6c__0;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__3;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__3;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__4;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__4;
        CData/*0:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__5;
        CData/*7:0*/ tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__5;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_BVALID;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_RVALID;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_RLAST;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__mm2s_cmd_seen;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__s2mm_cmd_seen;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY;
        CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tmc_controller_tb__DOT__aclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tmc_controller_tb__DOT__aresetn__0;
        CData/*0:0*/ __Vtrigprevexpr_h89dc2a3f__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched;
        SData/*8:0*/ tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched;
        SData/*8:0*/ tmc_controller_tb__DOT__dut__DOT__pending_logical_blk;
        SData/*8:0*/ tmc_controller_tb__DOT__dut__DOT__mig_hot_logical;
        SData/*8:0*/ tmc_controller_tb__DOT__dut__DOT__mig_victim_logical;
        IData/*31:0*/ tmc_controller_tb__DOT__S_AXI_AWADDR;
        IData/*31:0*/ tmc_controller_tb__DOT__S_AXI_WDATA;
        IData/*31:0*/ tmc_controller_tb__DOT__S_AXI_ARADDR;
        IData/*31:0*/ tmc_controller_tb__DOT__S_AXI_RDATA;
        IData/*31:0*/ tmc_controller_tb__DOT__M_AXI_AWADDR;
        IData/*31:0*/ tmc_controller_tb__DOT__M_AXI_WDATA;
        IData/*31:0*/ tmc_controller_tb__DOT__M_AXI_ARADDR;
        IData/*31:0*/ tmc_controller_tb__DOT__M_AXI_RDATA;
        VlWide<3>/*71:0*/ tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA;
        VlWide<3>/*71:0*/ tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA;
        IData/*31:0*/ tmc_controller_tb__DOT__aw_addr_hold;
        IData/*31:0*/ tmc_controller_tb__DOT__w_data_hold;
        IData/*31:0*/ tmc_controller_tb__DOT__promote_count;
        IData/*31:0*/ tmc_controller_tb__DOT__bresp_count;
        IData/*31:0*/ tmc_controller_tb__DOT__mm2s_cmd_addr;
        IData/*31:0*/ tmc_controller_tb__DOT__s2mm_cmd_addr;
        IData/*31:0*/ tmc_controller_tb__DOT__last_copy_src;
        IData/*31:0*/ tmc_controller_tb__DOT__dm_copy_count;
        IData/*31:0*/ tmc_controller_tb__DOT__status_latency_cfg;
        IData/*31:0*/ tmc_controller_tb__DOT__mm2s_status_countdown;
        IData/*31:0*/ tmc_controller_tb__DOT__s2mm_status_countdown;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__reg_ctrl;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__reg_tier_split;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__reg_mode;
        VlWide<3>/*71:0*/ tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd;
        VlWide<3>/*71:0*/ tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__reg_promote_count;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__reg_demote_count;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__reg_status;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__alloc_seq;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__i;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__cidx;
        IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__fidx;
        IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_RDATA;
        IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__mm2s_status_countdown;
    };
    struct {
        IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__s2mm_status_countdown;
        VlWide<3>/*71:0*/ __Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA;
        VlWide<3>/*71:0*/ __Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 16384> tmc_controller_tb__DOT__tier0_mem;
        VlUnpacked<IData/*31:0*/, 16384> tmc_controller_tb__DOT__tier1_mem;
        VlUnpacked<CData/*0:0*/, 511> tmc_controller_tb__DOT__dut__DOT__logical_in_close;
        VlUnpacked<CData/*7:0*/, 511> tmc_controller_tb__DOT__dut__DOT__logical_slot;
        VlUnpacked<CData/*0:0*/, 256> tmc_controller_tb__DOT__dut__DOT__close_slot_valid;
        VlUnpacked<SData/*8:0*/, 256> tmc_controller_tb__DOT__dut__DOT__close_slot_logical;
        VlUnpacked<IData/*31:0*/, 256> tmc_controller_tb__DOT__dut__DOT__close_alloc_age;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_haf04f01d__0;
    VlTriggerScheduler __VtrigSched_hddec6451__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtmc_controller_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtmc_controller_tb___024root(Vtmc_controller_tb__Syms* symsp, const char* v__name);
    ~Vtmc_controller_tb___024root();
    VL_UNCOPYABLE(Vtmc_controller_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
