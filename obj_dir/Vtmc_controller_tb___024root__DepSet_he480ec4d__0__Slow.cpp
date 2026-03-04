// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtmc_controller_tb.h for the primary calling header

#include "Vtmc_controller_tb__pch.h"
#include "Vtmc_controller_tb___024root.h"

VL_ATTR_COLD void Vtmc_controller_tb___024root___eval_static(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtmc_controller_tb___024root___eval_initial__TOP(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tmc_controller_tb__DOT__aclk = 0U;
}

VL_ATTR_COLD void Vtmc_controller_tb___024root___eval_final(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmc_controller_tb___024root___dump_triggers__stl(Vtmc_controller_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtmc_controller_tb___024root___eval_phase__stl(Vtmc_controller_tb___024root* vlSelf);

VL_ATTR_COLD void Vtmc_controller_tb___024root___eval_settle(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtmc_controller_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tmc_testbench/tmc_testbench.srcs/sources_1/new/tmc_controller_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtmc_controller_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmc_controller_tb___024root___dump_triggers__stl(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtmc_controller_tb___024root___stl_sequent__TOP__0(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__victim_age_sel;
    tmc_controller_tb__DOT__dut__DOT__victim_age_sel = 0;
    IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k;
    tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k = 0;
    // Body
    vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_found = 0U;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_slot_sel = 0U;
    tmc_controller_tb__DOT__dut__DOT__victim_age_sel = 0xffffffffU;
    tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k)) {
        if (vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_valid
            [(0xffU & tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k)]) {
            if ((1U & (~ ((~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far)) 
                          & (0xffU == (0xffU & tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k)))))) {
                if ((1U & ((~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_found)) 
                           | (vlSelf->tmc_controller_tb__DOT__dut__DOT__close_alloc_age
                              [(0xffU & tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k)] 
                              < tmc_controller_tb__DOT__dut__DOT__victim_age_sel)))) {
                    vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_found = 1U;
                    vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_slot_sel 
                        = (0xffU & tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k);
                    tmc_controller_tb__DOT__dut__DOT__victim_age_sel 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT__close_alloc_age
                        [(0xffU & tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k)];
                }
            }
        }
        tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k 
            = ((IData)(1U) + tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k);
    }
}

VL_ATTR_COLD void Vtmc_controller_tb___024root___eval_stl(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtmc_controller_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtmc_controller_tb___024root___eval_triggers__stl(Vtmc_controller_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtmc_controller_tb___024root___eval_phase__stl(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtmc_controller_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtmc_controller_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmc_controller_tb___024root___dump_triggers__act(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tmc_controller_tb.aclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tmc_controller_tb.aclk or negedge tmc_controller_tb.aresetn)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] (3'h0 != tmc_controller_tb.dut.mig_state))\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmc_controller_tb___024root___dump_triggers__nba(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tmc_controller_tb.aclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tmc_controller_tb.aclk or negedge tmc_controller_tb.aresetn)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] (3'h0 != tmc_controller_tb.dut.mig_state))\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtmc_controller_tb___024root___ctor_var_reset(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tmc_controller_tb__DOT__aclk = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__aresetn = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_BRESP = VL_RAND_RESET_I(2);
    vlSelf->tmc_controller_tb__DOT__S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__S_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_RDATA = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__S_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->tmc_controller_tb__DOT__S_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXI_RREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_AWADDR = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__M_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__M_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_BRESP = VL_RAND_RESET_I(2);
    vlSelf->tmc_controller_tb__DOT__M_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_ARADDR = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__M_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_RDATA = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__M_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->tmc_controller_tb__DOT__M_AXI_RLAST = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXI_RREADY = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA);
    vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TREADY = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA);
    vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TDATA = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TDATA = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TVALID = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tmc_controller_tb__DOT__tier0_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tmc_controller_tb__DOT__tier1_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tmc_controller_tb__DOT__aw_addr_hold = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__aw_seen = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__w_seen = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__w_data_hold = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__promote_count = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__bresp_count = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__mm2s_cmd_seen = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__s2mm_cmd_seen = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__mm2s_cmd_addr = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__s2mm_cmd_addr = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__last_copy_src = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dm_copy_count = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__status_latency_cfg = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__mm2s_status_countdown = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__s2mm_status_countdown = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state = VL_RAND_RESET_I(2);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state = VL_RAND_RESET_I(2);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state = VL_RAND_RESET_I(3);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched = VL_RAND_RESET_I(9);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched = VL_RAND_RESET_I(9);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_was_logical = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_was_logical = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_ctrl = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_tier_split = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_mode = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(72, vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd);
    VL_RAND_RESET_W(72, vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_promote_count = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_demote_count = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_status = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 511; ++__Vi0) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 511; ++__Vi0) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_logical[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__close_alloc_age[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tmc_controller_tb__DOT__dut__DOT__alloc_seq = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__relocation_pending = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__pending_logical_blk = VL_RAND_RESET_I(9);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical = VL_RAND_RESET_I(9);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical = VL_RAND_RESET_I(9);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__last_victim_slot = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_found = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_slot_sel = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx = VL_RAND_RESET_I(32);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__0 = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__0 = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__1 = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__1 = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__2 = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__2 = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hd984f98f__0 = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h46021f9d__0 = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h4f50fce4__0 = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hbfddda6c__0 = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__3 = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__3 = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__4 = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__4 = VL_RAND_RESET_I(8);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__5 = VL_RAND_RESET_I(1);
    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RDATA = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RLAST = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_cmd_seen = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_cmd_seen = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_status_countdown = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_status_countdown = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA);
    VL_RAND_RESET_W(72, vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA);
    vlSelf->__Vdly__tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tmc_controller_tb__DOT__aclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tmc_controller_tb__DOT__aresetn__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h89dc2a3f__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
