// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtmc_controller_tb.h for the primary calling header

#include "Vtmc_controller_tb__pch.h"
#include "Vtmc_controller_tb___024root.h"

VL_ATTR_COLD void Vtmc_controller_tb___024root___eval_initial__TOP(Vtmc_controller_tb___024root* vlSelf);
VlCoroutine Vtmc_controller_tb___024root___eval_initial__TOP__Vtiming__0(Vtmc_controller_tb___024root* vlSelf);
VlCoroutine Vtmc_controller_tb___024root___eval_initial__TOP__Vtiming__1(Vtmc_controller_tb___024root* vlSelf);

void Vtmc_controller_tb___024root___eval_initial(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_initial\n"); );
    // Body
    Vtmc_controller_tb___024root___eval_initial__TOP(vlSelf);
    Vtmc_controller_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtmc_controller_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tmc_controller_tb__DOT__aclk__0 
        = vlSelf->tmc_controller_tb__DOT__aclk;
    vlSelf->__Vtrigprevexpr___TOP__tmc_controller_tb__DOT__aresetn__0 
        = vlSelf->tmc_controller_tb__DOT__aresetn;
    vlSelf->__Vtrigprevexpr_h89dc2a3f__0 = (0U != (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state));
}

VL_INLINE_OPT VlCoroutine Vtmc_controller_tb___024root___eval_initial__TOP__Vtiming__1(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tmc_testbench/tmc_testbench.srcs/sources_1/new/tmc_controller_tb.sv", 
                                           167);
        vlSelf->tmc_controller_tb__DOT__aclk = (1U 
                                                & (~ (IData)(vlSelf->tmc_controller_tb__DOT__aclk)));
    }
}

void Vtmc_controller_tb___024root___eval_act(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtmc_controller_tb___024root___nba_sequent__TOP__0(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr;
    __Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr = 0;
    IData/*31:0*/ __Vtask_tmc_controller_tb__DOT__mem_write_word__0__data;
    __Vtask_tmc_controller_tb__DOT__mem_write_word__0__data = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr;
    __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__aw_seen;
    __Vdly__tmc_controller_tb__DOT__aw_seen = 0;
    IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__aw_addr_hold;
    __Vdly__tmc_controller_tb__DOT__aw_addr_hold = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__w_seen;
    __Vdly__tmc_controller_tb__DOT__w_seen = 0;
    IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__w_data_hold;
    __Vdly__tmc_controller_tb__DOT__w_data_hold = 0;
    // Body
    vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_status_countdown 
        = vlSelf->tmc_controller_tb__DOT__s2mm_status_countdown;
    vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_status_countdown 
        = vlSelf->tmc_controller_tb__DOT__mm2s_status_countdown;
    vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_cmd_seen 
        = vlSelf->tmc_controller_tb__DOT__s2mm_cmd_seen;
    vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_cmd_seen 
        = vlSelf->tmc_controller_tb__DOT__mm2s_cmd_seen;
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RLAST 
        = vlSelf->tmc_controller_tb__DOT__M_AXI_RLAST;
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RVALID 
        = vlSelf->tmc_controller_tb__DOT__M_AXI_RVALID;
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RDATA 
        = vlSelf->tmc_controller_tb__DOT__M_AXI_RDATA;
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_BVALID 
        = vlSelf->tmc_controller_tb__DOT__M_AXI_BVALID;
    __Vdly__tmc_controller_tb__DOT__w_data_hold = vlSelf->tmc_controller_tb__DOT__w_data_hold;
    __Vdly__tmc_controller_tb__DOT__w_seen = vlSelf->tmc_controller_tb__DOT__w_seen;
    __Vdly__tmc_controller_tb__DOT__aw_addr_hold = vlSelf->tmc_controller_tb__DOT__aw_addr_hold;
    __Vdly__tmc_controller_tb__DOT__aw_seen = vlSelf->tmc_controller_tb__DOT__aw_seen;
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_AWVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_AWREADY))) {
            __Vdly__tmc_controller_tb__DOT__aw_seen = 1U;
            __Vdly__tmc_controller_tb__DOT__aw_addr_hold 
                = vlSelf->tmc_controller_tb__DOT__M_AXI_AWADDR;
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_WVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_WREADY))) {
            __Vdly__tmc_controller_tb__DOT__w_seen = 1U;
            __Vdly__tmc_controller_tb__DOT__w_data_hold 
                = vlSelf->tmc_controller_tb__DOT__M_AXI_WDATA;
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__aw_seen) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__w_seen))) {
            __Vtask_tmc_controller_tb__DOT__mem_write_word__0__data 
                = vlSelf->tmc_controller_tb__DOT__w_data_hold;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr 
                = vlSelf->tmc_controller_tb__DOT__aw_addr_hold;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__0__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__0__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__0__data;
            }
            vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_BVALID = 1U;
            __Vdly__tmc_controller_tb__DOT__aw_seen = 0U;
            __Vdly__tmc_controller_tb__DOT__w_seen = 0U;
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_BVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_BREADY))) {
            vlSelf->tmc_controller_tb__DOT__bresp_count 
                = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__bresp_count);
            vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_BVALID = 0U;
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_ARVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_ARREADY))) {
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr 
                = vlSelf->tmc_controller_tb__DOT__M_AXI_ARADDR;
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__1__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RDATA 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__1__Vfuncout;
            vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RVALID = 1U;
            vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RLAST = 1U;
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_RVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_RREADY))) {
            vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RVALID = 0U;
            vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RLAST = 0U;
        }
    } else {
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_BVALID = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RVALID = 0U;
        __Vdly__tmc_controller_tb__DOT__aw_seen = 0U;
        __Vdly__tmc_controller_tb__DOT__w_seen = 0U;
        vlSelf->tmc_controller_tb__DOT__bresp_count = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RDATA = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RLAST = 0U;
        __Vdly__tmc_controller_tb__DOT__aw_addr_hold = 0U;
        __Vdly__tmc_controller_tb__DOT__w_data_hold = 0U;
    }
    vlSelf->tmc_controller_tb__DOT__aw_seen = __Vdly__tmc_controller_tb__DOT__aw_seen;
    vlSelf->tmc_controller_tb__DOT__aw_addr_hold = __Vdly__tmc_controller_tb__DOT__aw_addr_hold;
    vlSelf->tmc_controller_tb__DOT__w_seen = __Vdly__tmc_controller_tb__DOT__w_seen;
    vlSelf->tmc_controller_tb__DOT__w_data_hold = __Vdly__tmc_controller_tb__DOT__w_data_hold;
}

VL_INLINE_OPT void Vtmc_controller_tb___024root___nba_sequent__TOP__1(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 256> tmc_controller_tb__DOT__dut__DOT__far_slot_valid;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        tmc_controller_tb__DOT__dut__DOT__far_slot_valid[__Vi0] = 0;
    }
    VlUnpacked<SData/*8:0*/, 256> tmc_controller_tb__DOT__dut__DOT__far_slot_logical;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        tmc_controller_tb__DOT__dut__DOT__far_slot_logical[__Vi0] = 0;
    }
    IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__victim_age_sel;
    tmc_controller_tb__DOT__dut__DOT__victim_age_sel = 0;
    IData/*31:0*/ tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k;
    tmc_controller_tb__DOT__dut__DOT__unnamedblk1__DOT__k = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__bidx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__bidx = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__rel;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__rel = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__bidx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__bidx = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__rel;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__rel = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__160__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__160__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__160__scratch_in_far;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__160__scratch_in_far = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__161__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__161__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__161__scratch_in_far;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__161__scratch_in_far = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__rel;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__rel = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__logical_addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__logical_addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__bidx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__bidx = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__sidx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__sidx = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__rel;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__rel = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__166__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__166__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__166__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__166__slot_idx = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__167__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__167__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__167__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__167__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__168__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__168__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__168__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__168__slot_idx = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__169__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__169__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__169__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__169__addr = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__bidx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__bidx = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__rel;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__rel = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr = 0;
    CData/*0:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__rel;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__rel = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__logical_addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__logical_addr = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__bidx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__bidx = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__sidx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__sidx = 0;
    SData/*8:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__rel;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__rel = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__178__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__178__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__178__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__178__slot_idx = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__179__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__179__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__179__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__179__addr = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__180__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__180__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__180__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__180__slot_idx = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__181__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__181__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__181__addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__181__addr = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__Vfuncout);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__src_addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__src_addr = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__183__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__183__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__183__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__183__slot_idx = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__Vfuncout);
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd);
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__Vfuncout);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__src_addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__src_addr = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__188__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__188__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__188__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__188__slot_idx = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__Vfuncout);
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd);
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__Vfuncout);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__src_addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__src_addr = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__193__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__193__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__193__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__193__slot_idx = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__Vfuncout);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__src_addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__src_addr = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__195__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__195__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__195__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__195__slot_idx = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__Vfuncout);
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd);
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__Vfuncout);
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd);
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__Vfuncout;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__Vfuncout);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__src_addr;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__src_addr = 0;
    VlWide<3>/*71:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd;
    VL_ZERO_W(72, __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd);
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__203__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__203__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__203__slot_idx;
    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__203__slot_idx = 0;
    CData/*7:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts = 0;
    IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts = 0;
    CData/*7:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__S_AXI_AWREADY;
    __Vdly__tmc_controller_tb__DOT__S_AXI_AWREADY = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__S_AXI_WREADY;
    __Vdly__tmc_controller_tb__DOT__S_AXI_WREADY = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID;
    __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID = 0;
    IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_ctrl;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_ctrl = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far = 0;
    IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_tier_split;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_tier_split = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending = 0;
    CData/*2:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 0;
    IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq = 0;
    IData/*31:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_mode;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_mode = 0;
    VlWide<3>/*71:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd;
    VL_ZERO_W(72, __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd);
    VlWide<3>/*71:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd;
    VL_ZERO_W(72, __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd);
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_was_logical;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_was_logical = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_AWVALID;
    __Vdly__tmc_controller_tb__DOT__M_AXI_AWVALID = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_WVALID;
    __Vdly__tmc_controller_tb__DOT__M_AXI_WVALID = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_BREADY;
    __Vdly__tmc_controller_tb__DOT__M_AXI_BREADY = 0;
    CData/*1:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_state;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_state = 0;
    SData/*8:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched = 0;
    SData/*8:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__pending_logical_blk;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__pending_logical_blk = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__S_AXI_ARREADY;
    __Vdly__tmc_controller_tb__DOT__S_AXI_ARREADY = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID;
    __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_was_logical;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_was_logical = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_ARVALID;
    __Vdly__tmc_controller_tb__DOT__M_AXI_ARVALID = 0;
    CData/*1:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_state;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_state = 0;
    SData/*8:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched = 0;
    CData/*0:0*/ __Vdly__tmc_controller_tb__DOT__M_AXI_RREADY;
    __Vdly__tmc_controller_tb__DOT__M_AXI_RREADY = 0;
    SData/*8:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_logical;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_logical = 0;
    CData/*7:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot = 0;
    SData/*8:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_logical;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_logical = 0;
    CData/*7:0*/ __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot = 0;
    SData/*8:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0 = 0;
    CData/*0:0*/ __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0;
    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0;
    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_slot_logical__v0;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_slot_logical__v0 = 0;
    SData/*8:0*/ __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__close_slot_logical__v0;
    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__close_slot_logical__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_alloc_age__v0;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_alloc_age__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__close_alloc_age__v0;
    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__close_alloc_age__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1 = 0;
    CData/*0:0*/ __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1;
    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1;
    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1 = 0;
    CData/*7:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__far_slot_logical__v0;
    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__far_slot_logical__v0 = 0;
    SData/*8:0*/ __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__far_slot_logical__v0;
    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__far_slot_logical__v0 = 0;
    // Body
    vlSelf->__Vdly__tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY 
        = vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY;
    vlSelf->__Vdly__tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY 
        = vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_logical 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_logical 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical;
    __Vdly__tmc_controller_tb__DOT__M_AXI_RREADY = vlSelf->tmc_controller_tb__DOT__M_AXI_RREADY;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_state 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state;
    __Vdly__tmc_controller_tb__DOT__M_AXI_ARVALID = vlSelf->tmc_controller_tb__DOT__M_AXI_ARVALID;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_was_logical 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_was_logical;
    __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID = vlSelf->tmc_controller_tb__DOT__S_AXI_RVALID;
    __Vdly__tmc_controller_tb__DOT__S_AXI_ARREADY = vlSelf->tmc_controller_tb__DOT__S_AXI_ARREADY;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__pending_logical_blk 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__pending_logical_blk;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_state 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state;
    __Vdly__tmc_controller_tb__DOT__M_AXI_BREADY = vlSelf->tmc_controller_tb__DOT__M_AXI_BREADY;
    __Vdly__tmc_controller_tb__DOT__M_AXI_WVALID = vlSelf->tmc_controller_tb__DOT__M_AXI_WVALID;
    __Vdly__tmc_controller_tb__DOT__M_AXI_AWVALID = vlSelf->tmc_controller_tb__DOT__M_AXI_AWVALID;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_was_logical 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_was_logical;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[0U] 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[0U];
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[1U] 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[1U];
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[2U] 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[2U];
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[0U] 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[0U];
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[1U] 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[1U];
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[2U] 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[2U];
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_mode 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_mode;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__alloc_seq;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__relocation_pending;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_tier_split 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_tier_split;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_ctrl 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_ctrl;
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U] 
        = vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U];
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U] 
        = vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U];
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U] 
        = vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U];
    __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID = vlSelf->tmc_controller_tb__DOT__S_AXI_BVALID;
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U] 
        = vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U];
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U] 
        = vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U];
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U] 
        = vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U];
    __Vdly__tmc_controller_tb__DOT__S_AXI_WREADY = vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY;
    __Vdly__tmc_controller_tb__DOT__S_AXI_AWREADY = vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_status;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts;
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID 
        = vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID;
    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID 
        = vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0 = 0U;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1 = 0U;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0 = 0U;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1 = 0U;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0 = 0U;
    __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far 
        = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far;
    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0 = 0U;
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_ARVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_ARREADY))) {
                if ((1U & (~ ([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr 
                                        = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout 
                                        = (0xffff0000U 
                                           == (0xfffff000U 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr));
                                }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout))))) {
                    if (([&]() {
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr 
                                    = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout 
                                    = ((0xc0000000U 
                                        <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr) 
                                       & (0xc001ff00U 
                                          > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr));
                            }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_ARVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_ARREADY))) {
                if ((1U & (~ ([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr 
                                        = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout 
                                        = (0xffff0000U 
                                           == (0xfffff000U 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr));
                                }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout))))) {
                    if (([&]() {
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr 
                                    = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout 
                                    = ((0xc0000000U 
                                        <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr) 
                                       & (0xc001ff00U 
                                          > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr));
                            }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_ARVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_ARREADY))) {
                if ((1U & (~ ([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr 
                                        = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout 
                                        = (0xffff0000U 
                                           == (0xfffff000U 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr));
                                }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout))))) {
                    if (([&]() {
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr 
                                    = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout 
                                    = ((0xc0000000U 
                                        <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr) 
                                       & (0xc001ff00U 
                                          > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr));
                            }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if ((1U & (~ ([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                        = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                        = (0xffff0000U 
                                           == (0xfffff000U 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                                }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))))) {
                    if (([&]() {
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr 
                                    = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout 
                                    = ((0xc0000000U 
                                        <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr) 
                                       & (0xc001ff00U 
                                          > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr));
                            }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if ((1U & (~ ([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                        = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                        = (0xffff0000U 
                                           == (0xfffff000U 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                                }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))))) {
                    if (([&]() {
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr 
                                    = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout 
                                    = ((0xc0000000U 
                                        <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr) 
                                       & (0xc001ff00U 
                                          > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr));
                            }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                if ((1U & (~ ([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                        = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                        = (0xffff0000U 
                                           == (0xfffff000U 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                                }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))))) {
                    if (([&]() {
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr 
                                    = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout 
                                    = ((0xc0000000U 
                                        <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr) 
                                       & (0xc001ff00U 
                                          > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr));
                            }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID = 0U;
        if (vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TVALID) {
            __Vdly__tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts 
                = vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TDATA;
            __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status 
                = (8U | __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status);
            __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts = 0U;
        }
        if (vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TVALID) {
            __Vdly__tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts 
                = vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TDATA;
            __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status 
                = (0x10U | __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status);
            __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts = 0U;
        }
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            __Vdly__tmc_controller_tb__DOT__S_AXI_AWREADY 
                = (1U & (~ ([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__Vfuncout = 0U;
                            if ((0U != (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
                                if ((2U & vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_mode)) {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__Vfuncout = 1U;
                                } else if (([&]() {
                                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__addr 
                                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__addr;
                                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__Vfuncout 
                                                = (
                                                   (0xc0000000U 
                                                    <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__addr) 
                                                   & (0xc001ff00U 
                                                      > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__addr));
                                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__154__Vfuncout))) {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__Vfuncout 
                                        = (((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__bidx) 
                                            == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical)) 
                                           | ((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__bidx) 
                                              == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical)));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__bidx 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__Vfuncout;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__Vfuncout 
                                        = (0x1ffU & 
                                           (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__rel 
                                            >> 8U));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__rel 
                                        = (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__addr 
                                           - (IData)(0xc0000000U));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__155__addr 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__addr;
                                }
                            }
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__153__Vfuncout))));
            __Vdly__tmc_controller_tb__DOT__S_AXI_WREADY 
                = (1U & (~ ([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__Vfuncout = 0U;
                            if ((0U != (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
                                if ((2U & vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_mode)) {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__Vfuncout = 1U;
                                } else if (([&]() {
                                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__addr 
                                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__addr;
                                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__Vfuncout 
                                                = (
                                                   (0xc0000000U 
                                                    <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__addr) 
                                                   & (0xc001ff00U 
                                                      > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__addr));
                                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__157__Vfuncout))) {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__Vfuncout 
                                        = (((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__bidx) 
                                            == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical)) 
                                           | ((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__bidx) 
                                              == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical)));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__bidx 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__Vfuncout;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__Vfuncout 
                                        = (0x1ffU & 
                                           (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__rel 
                                            >> 8U));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__rel 
                                        = (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__addr 
                                           - (IData)(0xc0000000U));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__158__addr 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__addr;
                                }
                            }
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__156__Vfuncout))));
            if (((((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWVALID) 
                   & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WVALID)) 
                  & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY)) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY))) {
                __Vdly__tmc_controller_tb__DOT__S_AXI_AWREADY = 0U;
                __Vdly__tmc_controller_tb__DOT__S_AXI_WREADY = 0U;
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__159__Vfuncout))) {
                    if ((((0xffff0000U == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR) 
                          & (vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA 
                             >> 1U)) & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TREADY))) {
                        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U] 
                            = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[0U];
                        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U] 
                            = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[1U];
                        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U] 
                            = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[2U];
                        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID = 1U;
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status 
                            = (2U | __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status);
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts = 1U;
                    }
                    vlSelf->tmc_controller_tb__DOT__S_AXI_BRESP = 0U;
                    __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID = 1U;
                    if ((((0xffff0000U == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR) 
                          & (vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA 
                             >> 2U)) & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TREADY))) {
                        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U] 
                            = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[0U];
                        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U] 
                            = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[1U];
                        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U] 
                            = vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[2U];
                        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID = 1U;
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status 
                            = (4U | __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status);
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts = 1U;
                    }
                    if ((0xffff0000U == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR)) {
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_ctrl 
                            = vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA;
                        if ((0x200U & vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA)) {
                            __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far 
                                = (1U & (vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA 
                                         >> 8U));
                            __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_tier_split 
                                = ((IData)(0xc0000000U) 
                                   + VL_SHIFTL_III(32,32,32, 
                                                   ([&]() {
                                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__160__scratch_in_far 
                                                = (1U 
                                                   & (vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA 
                                                      >> 8U));
                                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__160__Vfuncout 
                                                = ((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__160__scratch_in_far)
                                                    ? 0x100U
                                                    : 0xffU);
                                        }(), __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__160__Vfuncout), 8U));
                            __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending = 0U;
                            __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 0U;
                            vlSelf->tmc_controller_tb__DOT__dut__DOT__i = 0U;
                            while (VL_GTS_III(32, 0x1ffU, vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
                                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__0 = 0U;
                                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__0 = 0U;
                                if ((0x1feU >= (0x1ffU 
                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i))) {
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[(0x1ffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__0;
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[(0x1ffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__0;
                                }
                                vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                                    = ((IData)(1U) 
                                       + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                            }
                            vlSelf->tmc_controller_tb__DOT__dut__DOT__i = 0U;
                            while (VL_GTS_III(32, 0x100U, vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
                                vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_valid[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0U;
                                vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_logical[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0U;
                                vlSelf->tmc_controller_tb__DOT__dut__DOT__close_alloc_age[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0xffffffffU;
                                vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                                    = ((IData)(1U) 
                                       + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                            }
                            vlSelf->tmc_controller_tb__DOT__dut__DOT__i = 0U;
                            while (VL_GTS_III(32, 0x100U, vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
                                tmc_controller_tb__DOT__dut__DOT__far_slot_valid[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0U;
                                tmc_controller_tb__DOT__dut__DOT__far_slot_logical[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0U;
                                vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                                    = ((IData)(1U) 
                                       + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                            }
                            vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx = 0U;
                            vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx = 0U;
                            vlSelf->tmc_controller_tb__DOT__dut__DOT__i = 0U;
                            while (VL_GTS_III(32, 0x1ffU, vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
                                if ((vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                                     < ([&]() {
                                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__161__scratch_in_far 
                                                    = 
                                                    (1U 
                                                     & (vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA 
                                                        >> 8U));
                                                __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__161__Vfuncout 
                                                    = 
                                                    ((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__161__scratch_in_far)
                                                      ? 0x100U
                                                      : 0xffU);
                                            }(), __Vfunc_tmc_controller_tb__DOT__dut__DOT__close_usable_blocks__161__Vfuncout))) {
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__1 = 1U;
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__1 
                                        = (0xffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx);
                                    if ((0x1feU >= 
                                         (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i))) {
                                        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[(0x1ffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                                            = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__1;
                                        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[(0x1ffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                                            = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__1;
                                    }
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_valid[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx)] = 1U;
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_logical[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx)] 
                                        = (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__close_alloc_age[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx)] 
                                        = (vlSelf->tmc_controller_tb__DOT__dut__DOT__alloc_seq 
                                           + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx 
                                        = ((IData)(1U) 
                                           + vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx);
                                } else {
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__2 = 0U;
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__2 
                                        = (0xffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx);
                                    if ((0x1feU >= 
                                         (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i))) {
                                        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[(0x1ffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                                            = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__2;
                                        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[(0x1ffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                                            = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__2;
                                    }
                                    tmc_controller_tb__DOT__dut__DOT__far_slot_valid[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx)] = 1U;
                                    tmc_controller_tb__DOT__dut__DOT__far_slot_logical[(0xffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx)] 
                                        = (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx 
                                        = ((IData)(1U) 
                                           + vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx);
                                }
                                vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                                    = ((IData)(1U) 
                                       + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                            }
                            __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq = 1U;
                            __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq = 0x200U;
                        }
                    } else if ((0xffff0008U == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR)) {
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_tier_split 
                            = vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA;
                    } else if ((0xffff000cU == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR)) {
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_mode 
                            = vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA;
                    } else if ((0xffff0010U == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR)) {
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[0U] 
                            = vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA;
                    } else if ((0xffff0014U == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR)) {
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[1U] 
                            = vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA;
                    } else if ((0xffff0018U == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR)) {
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[0U] 
                            = vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA;
                    } else if ((0xffff001cU == vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR)) {
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[1U] 
                            = vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA;
                    }
                } else if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout 
                                = ((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr) 
                                   & (0xc001ff00U > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__162__Vfuncout))) {
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__addr 
                        = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__rel 
                        = (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__addr 
                           - (IData)(0xc0000000U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__logical_addr 
                        = vlSelf->tmc_controller_tb__DOT__S_AXI_AWADDR;
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_was_logical = 1U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__Vfuncout 
                        = (0x1ffU & (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__rel 
                                     >> 8U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__addr 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__logical_addr;
                    __Vdly__tmc_controller_tb__DOT__M_AXI_AWVALID = 1U;
                    vlSelf->tmc_controller_tb__DOT__M_AXI_WDATA 
                        = vlSelf->tmc_controller_tb__DOT__S_AXI_WDATA;
                    __Vdly__tmc_controller_tb__DOT__M_AXI_WVALID = 1U;
                    __Vdly__tmc_controller_tb__DOT__M_AXI_BREADY = 0U;
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_state = 1U;
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__163__Vfuncout;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__rel 
                        = (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__addr 
                           - (IData)(0xc0000000U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__Vfuncout 
                        = (0x1ffU & (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__rel 
                                     >> 8U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__bidx 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__165__Vfuncout;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__sidx 
                        = ((0x1feU >= (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__bidx))
                            ? vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot
                           [__Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__bidx]
                            : 0U);
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__Vfuncout 
                        = (((0x1feU >= (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__bidx)) 
                            && vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close
                            [__Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__bidx])
                            ? (([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__166__slot_idx 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__sidx;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__166__Vfuncout 
                                        = ((IData)(0xc0000000U) 
                                           + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__166__slot_idx), 8U));
                                }(), __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__166__Vfuncout) 
                               + VL_EXTEND_II(32,8, 
                                              ([&]() {
                                        __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__167__addr 
                                            = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__logical_addr;
                                        __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__167__Vfuncout 
                                            = (0xffU 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__167__addr);
                                    }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__167__Vfuncout))))
                            : (([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__168__slot_idx 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__sidx;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__168__Vfuncout 
                                        = ((IData)(0xc0010000U) 
                                           + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__168__slot_idx), 8U));
                                }(), __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__168__Vfuncout) 
                               + VL_EXTEND_II(32,8, 
                                              ([&]() {
                                        __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__169__addr 
                                            = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__logical_addr;
                                        __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__169__Vfuncout 
                                            = (0xffU 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__169__addr);
                                    }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__169__Vfuncout)))));
                    vlSelf->tmc_controller_tb__DOT__M_AXI_AWADDR 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__164__Vfuncout;
                } else {
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_was_logical = 0U;
                    vlSelf->tmc_controller_tb__DOT__S_AXI_BRESP = 3U;
                    __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_AWVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_AWREADY))) {
                __Vdly__tmc_controller_tb__DOT__M_AXI_AWVALID = 0U;
            }
            if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_WVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_WREADY))) {
                __Vdly__tmc_controller_tb__DOT__M_AXI_WVALID = 0U;
            }
            if ((1U & ((~ (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_AWVALID)) 
                       & (~ (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_WVALID))))) {
                __Vdly__tmc_controller_tb__DOT__M_AXI_BREADY = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_BVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_BREADY))) {
                __Vdly__tmc_controller_tb__DOT__M_AXI_BREADY = 0U;
                vlSelf->tmc_controller_tb__DOT__S_AXI_BRESP 
                    = vlSelf->tmc_controller_tb__DOT__M_AXI_BRESP;
                __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID = 1U;
                if (((vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_ctrl 
                      & (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_was_logical)) 
                     & (~ ((0x1feU >= (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched)) 
                           && vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close
                           [vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched])))) {
                    if (((~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__relocation_pending)) 
                         & (0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state)))) {
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending = 1U;
                        __Vdly__tmc_controller_tb__DOT__dut__DOT__pending_logical_blk 
                            = vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched;
                    }
                }
                __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_state = 0U;
            }
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_BVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_BREADY))) {
            __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID = 0U;
        }
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state))) {
            __Vdly__tmc_controller_tb__DOT__S_AXI_ARREADY 
                = (1U & (~ ([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__Vfuncout = 0U;
                            if ((0U != (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
                                if ((2U & vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_mode)) {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__Vfuncout = 1U;
                                } else if (([&]() {
                                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__addr 
                                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__addr;
                                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__Vfuncout 
                                                = (
                                                   (0xc0000000U 
                                                    <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__addr) 
                                                   & (0xc001ff00U 
                                                      > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__addr));
                                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__171__Vfuncout))) {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__Vfuncout 
                                        = (((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__bidx) 
                                            == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical)) 
                                           | ((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__bidx) 
                                              == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical)));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__bidx 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__Vfuncout;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__Vfuncout 
                                        = (0x1ffU & 
                                           (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__rel 
                                            >> 8U));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__rel 
                                        = (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__addr 
                                           - (IData)(0xc0000000U));
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__172__addr 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__addr;
                                }
                            }
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__blocked_by_relocation__170__Vfuncout))));
            if (((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_ARVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_ARREADY))) {
                __Vdly__tmc_controller_tb__DOT__S_AXI_ARREADY = 0U;
                if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout 
                                = (0xffff0000U == (0xfffff000U 
                                                   & __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_ctrl_addr__173__Vfuncout))) {
                    vlSelf->tmc_controller_tb__DOT__S_AXI_RDATA 
                        = (((((((((0xffff0000U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR) 
                                  | (0xffff0004U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)) 
                                 | (0xffff0008U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)) 
                                | (0xffff000cU == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)) 
                               | (0xffff0010U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)) 
                              | (0xffff0014U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)) 
                             | (0xffff0018U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)) 
                            | (0xffff001cU == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR))
                            ? ((0xffff0000U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                ? vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_ctrl
                                : ((0xffff0004U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                    ? (((IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts) 
                                         << 8U) | (0xffU 
                                                   & vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_status)))
                                    : ((0xffff0008U 
                                        == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                        ? vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_tier_split
                                        : ((0xffff000cU 
                                            == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                            ? vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_mode
                                            : ((0xffff0010U 
                                                == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                                ? vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[0U]
                                                : (
                                                   (0xffff0014U 
                                                    == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                                    ? 
                                                   vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[1U]
                                                    : 
                                                   ((0xffff0018U 
                                                     == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                                     ? 
                                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[0U]
                                                     : 
                                                    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[1U])))))))
                            : ((0xffff0020U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                ? (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__last_victim_slot)
                                : ((0xffff0024U == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                    ? vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_promote_count
                                    : ((0xffff0028U 
                                        == vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR)
                                        ? vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_demote_count
                                        : 0xbad00000U))));
                    vlSelf->tmc_controller_tb__DOT__S_AXI_RRESP = 0U;
                    __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID = 1U;
                } else if (([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr 
                                = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout 
                                = ((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr) 
                                   & (0xc001ff00U > __Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__addr));
                        }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__is_logical_addr__174__Vfuncout))) {
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__addr 
                        = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__rel 
                        = (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__addr 
                           - (IData)(0xc0000000U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__logical_addr 
                        = vlSelf->tmc_controller_tb__DOT__S_AXI_ARADDR;
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_was_logical = 1U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__Vfuncout 
                        = (0x1ffU & (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__rel 
                                     >> 8U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__addr 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__logical_addr;
                    __Vdly__tmc_controller_tb__DOT__M_AXI_ARVALID = 1U;
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_state = 1U;
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__175__Vfuncout;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__rel 
                        = (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__addr 
                           - (IData)(0xc0000000U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__Vfuncout 
                        = (0x1ffU & (__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__rel 
                                     >> 8U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__bidx 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_block_idx__177__Vfuncout;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__sidx 
                        = ((0x1feU >= (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__bidx))
                            ? vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot
                           [__Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__bidx]
                            : 0U);
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__Vfuncout 
                        = (((0x1feU >= (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__bidx)) 
                            && vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close
                            [__Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__bidx])
                            ? (([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__178__slot_idx 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__sidx;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__178__Vfuncout 
                                        = ((IData)(0xc0000000U) 
                                           + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__178__slot_idx), 8U));
                                }(), __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__178__Vfuncout) 
                               + VL_EXTEND_II(32,8, 
                                              ([&]() {
                                        __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__179__addr 
                                            = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__logical_addr;
                                        __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__179__Vfuncout 
                                            = (0xffU 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__179__addr);
                                    }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__179__Vfuncout))))
                            : (([&]() {
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__180__slot_idx 
                                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__sidx;
                                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__180__Vfuncout 
                                        = ((IData)(0xc0010000U) 
                                           + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__180__slot_idx), 8U));
                                }(), __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__180__Vfuncout) 
                               + VL_EXTEND_II(32,8, 
                                              ([&]() {
                                        __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__181__addr 
                                            = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__logical_addr;
                                        __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__181__Vfuncout 
                                            = (0xffU 
                                               & __Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__181__addr);
                                    }(), (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__logical_offset__181__Vfuncout)))));
                    vlSelf->tmc_controller_tb__DOT__M_AXI_ARADDR 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__remap_addr__176__Vfuncout;
                } else {
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_was_logical = 0U;
                    vlSelf->tmc_controller_tb__DOT__S_AXI_RDATA = 0xbad00001U;
                    vlSelf->tmc_controller_tb__DOT__S_AXI_RRESP = 3U;
                    __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_ARVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_ARREADY))) {
                __Vdly__tmc_controller_tb__DOT__M_AXI_ARVALID = 0U;
                __Vdly__tmc_controller_tb__DOT__M_AXI_RREADY = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_RVALID) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXI_RREADY))) {
                vlSelf->tmc_controller_tb__DOT__S_AXI_RDATA 
                    = vlSelf->tmc_controller_tb__DOT__M_AXI_RDATA;
                vlSelf->tmc_controller_tb__DOT__S_AXI_RRESP 
                    = vlSelf->tmc_controller_tb__DOT__M_AXI_RRESP;
                __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID = 1U;
                if (vlSelf->tmc_controller_tb__DOT__M_AXI_RLAST) {
                    __Vdly__tmc_controller_tb__DOT__M_AXI_RREADY = 0U;
                    __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_state = 0U;
                    if (((vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_ctrl 
                          & (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_was_logical)) 
                         & (~ ((0x1feU >= (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched)) 
                               && vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close
                               [vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched])))) {
                        if (((~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__relocation_pending)) 
                             & (0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state)))) {
                            __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending = 1U;
                            __Vdly__tmc_controller_tb__DOT__dut__DOT__pending_logical_blk 
                                = vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched;
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_RVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXI_RREADY))) {
            __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID = 0U;
        }
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status 
            = ((0xfffffffeU & __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status) 
               | (0U != (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state)));
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status 
            = ((0xffffff9fU & __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status) 
               | (((IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far) 
                   << 6U) | ((IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__relocation_pending) 
                             << 5U)));
        if ((0U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__relocation_pending) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_found))) {
                __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending = 0U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_logical 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__pending_logical_blk;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_slot_sel;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_logical 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_logical
                    [vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_slot_sel];
                vlSelf->tmc_controller_tb__DOT__dut__DOT__last_victim_slot 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__victim_slot_sel;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot 
                    = ((0x1feU >= (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__pending_logical_blk))
                        ? vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot
                       [vlSelf->tmc_controller_tb__DOT__dut__DOT__pending_logical_blk]
                        : 0U);
            }
        } else if ((1U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TREADY) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TREADY))) {
                if (vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far) {
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__183__slot_idx 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__183__Vfuncout 
                        = ((IData)(0xc0010000U) + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__183__slot_idx), 8U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[0U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[1U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[2U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__src_addr 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__183__Vfuncout;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[0U] = 0xc001ff00U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[1U] 
                        = (0x800100U | (0xff000000U 
                                        & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[1U]));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[0U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[1U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[2U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__Vfuncout[0U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[0U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__Vfuncout[1U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[1U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__Vfuncout[2U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__cmd[2U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[0U] 
                        = (IData)((0x80010000000000ULL 
                                   | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__src_addr))));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[1U] 
                        = ((0xff000000U & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[1U]) 
                           | (IData)(((0x80010000000000ULL 
                                       | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__src_addr))) 
                                      >> 0x20U)));
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__Vfuncout[0U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__Vfuncout[1U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__184__Vfuncout[2U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__Vfuncout[0U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[0U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__Vfuncout[1U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[1U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__Vfuncout[2U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__cmd[2U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__Vfuncout[0U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__Vfuncout[1U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__182__Vfuncout[2U];
                } else {
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__188__slot_idx 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__188__Vfuncout 
                        = ((IData)(0xc0010000U) + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__188__slot_idx), 8U));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[0U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[1U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[2U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__src_addr 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__188__Vfuncout;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[0U] = 0xc000ff00U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[1U] 
                        = (0x800100U | (0xff000000U 
                                        & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[1U]));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[0U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[1U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[2U] = 0U;
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__Vfuncout[0U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[0U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__Vfuncout[1U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[1U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__Vfuncout[2U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__cmd[2U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[0U] 
                        = (IData)((0x80010000000000ULL 
                                   | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__src_addr))));
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[1U] 
                        = ((0xff000000U & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[1U]) 
                           | (IData)(((0x80010000000000ULL 
                                       | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__src_addr))) 
                                      >> 0x20U)));
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__Vfuncout[0U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__Vfuncout[1U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__189__Vfuncout[2U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__Vfuncout[0U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[0U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__Vfuncout[1U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[1U];
                    __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__Vfuncout[2U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__cmd[2U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__Vfuncout[0U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__Vfuncout[1U];
                    vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U] 
                        = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__187__Vfuncout[2U];
                }
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID = 1U;
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
            if ((1U & ((~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts)) 
                       & (~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts))))) {
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TREADY) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TREADY))) {
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__193__slot_idx 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__195__slot_idx 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__193__Vfuncout 
                    = ((IData)(0xc0000000U) + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__193__slot_idx), 8U));
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__195__Vfuncout 
                    = ((IData)(0xc0010000U) + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__195__slot_idx), 8U));
                vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_demote_count 
                    = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_demote_count);
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__src_addr 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__193__Vfuncout;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__src_addr 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier1_slot_phys__195__Vfuncout;
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID = 1U;
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 4U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[0U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[1U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[2U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[0U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[1U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[2U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[0U] 
                    = (IData)((0x80010000000000ULL 
                               | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__src_addr))));
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[1U] 
                    = ((0xff000000U & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[1U]) 
                       | (IData)(((0x80010000000000ULL 
                                   | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__src_addr))) 
                                  >> 0x20U)));
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[0U] 
                    = (IData)((0x80010000000000ULL 
                               | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__src_addr))));
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[1U] 
                    = ((0xff000000U & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[1U]) 
                       | (IData)(((0x80010000000000ULL 
                                   | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__src_addr))) 
                                  >> 0x20U)));
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__Vfuncout[0U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[0U];
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__Vfuncout[1U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[1U];
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__Vfuncout[2U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__cmd[2U];
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__Vfuncout[0U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[0U];
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__Vfuncout[1U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[1U];
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__Vfuncout[2U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__cmd[2U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__Vfuncout[0U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__Vfuncout[1U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__192__Vfuncout[2U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__Vfuncout[0U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__Vfuncout[1U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__194__Vfuncout[2U];
            }
        } else if ((4U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
            if ((1U & ((~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts)) 
                       & (~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts))))) {
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 5U;
            }
        } else if ((5U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
            if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TREADY) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TREADY))) {
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__203__slot_idx 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__203__Vfuncout 
                    = ((IData)(0xc0000000U) + VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__203__slot_idx), 8U));
                vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_promote_count 
                    = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_promote_count);
                VL_COND_WIWW(72, vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA, (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far), 
                             ([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[0U] = 0U;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[1U] = 0U;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[2U] = 0U;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[0U] = 0xc001ff00U;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[1U] 
                                = (0x800100U | (0xff000000U 
                                                & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[1U]));
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__Vfuncout[0U] 
                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[0U];
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__Vfuncout[1U] 
                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[1U];
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__Vfuncout[2U] 
                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__cmd[2U];
                        }(), __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__196__Vfuncout), 
                             ([&]() {
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[0U] = 0U;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[1U] = 0U;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[2U] = 0U;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[0U] = 0xc000ff00U;
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[1U] 
                                = (0x800100U | (0xff000000U 
                                                & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[1U]));
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__Vfuncout[0U] 
                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[0U];
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__Vfuncout[1U] 
                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[1U];
                            __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__Vfuncout[2U] 
                                = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__cmd[2U];
                        }(), __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__199__Vfuncout));
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__src_addr 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__tier0_slot_phys__203__Vfuncout;
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID = 1U;
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 6U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[0U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[1U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[2U] = 0U;
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[0U] 
                    = (IData)((0x80010000000000ULL 
                               | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__src_addr))));
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[1U] 
                    = ((0xff000000U & __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[1U]) 
                       | (IData)(((0x80010000000000ULL 
                                   | (QData)((IData)(__Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__src_addr))) 
                                  >> 0x20U)));
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__Vfuncout[0U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[0U];
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__Vfuncout[1U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[1U];
                __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__Vfuncout[2U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__cmd[2U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__Vfuncout[0U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__Vfuncout[1U];
                vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U] 
                    = __Vfunc_tmc_controller_tb__DOT__dut__DOT__mk_datamover_cmd__202__Vfuncout[2U];
            }
        } else if ((6U == (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state))) {
            if ((1U & ((~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts)) 
                       & (~ (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts))))) {
                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hd984f98f__0 = 1U;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 0U;
                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h46021f9d__0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
                if ((0x1feU >= (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical))) {
                    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hd984f98f__0;
                    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0 = 1U;
                    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical;
                    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h46021f9d__0;
                    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0 = 1U;
                    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical;
                }
                __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0 = 1U;
                __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
                __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__close_slot_logical__v0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical;
                __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_slot_logical__v0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
                __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__close_alloc_age__v0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__alloc_seq;
                __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_alloc_age__v0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
                __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq 
                    = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__alloc_seq);
                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h4f50fce4__0 = 0U;
                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hbfddda6c__0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
                if ((0x1feU >= (IData)(vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical))) {
                    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h4f50fce4__0;
                    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1 = 1U;
                    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical;
                    __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hbfddda6c__0;
                    __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1 = 1U;
                    __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical;
                }
                __Vdlyvset__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0 = 1U;
                __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
                __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__far_slot_logical__v0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical;
                __Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__far_slot_logical__v0 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
            }
        }
    } else {
        __Vdly__tmc_controller_tb__DOT__S_AXI_AWREADY = 0U;
        __Vdly__tmc_controller_tb__DOT__S_AXI_WREADY = 0U;
        __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID = 0U;
        __Vdly__tmc_controller_tb__DOT__S_AXI_ARREADY = 0U;
        __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID = 0U;
        vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_promote_count = 0U;
        vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_demote_count = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__pending_logical_blk = 0U;
        vlSelf->tmc_controller_tb__DOT__dut__DOT__i = 0U;
        vlSelf->tmc_controller_tb__DOT__S_AXI_BRESP = 0U;
        vlSelf->tmc_controller_tb__DOT__S_AXI_RDATA = 0U;
        vlSelf->tmc_controller_tb__DOT__S_AXI_RRESP = 0U;
        vlSelf->tmc_controller_tb__DOT__M_AXI_AWADDR = 0U;
        __Vdly__tmc_controller_tb__DOT__M_AXI_AWVALID = 0U;
        vlSelf->tmc_controller_tb__DOT__M_AXI_WDATA = 0U;
        __Vdly__tmc_controller_tb__DOT__M_AXI_WVALID = 0U;
        __Vdly__tmc_controller_tb__DOT__M_AXI_BREADY = 0U;
        vlSelf->tmc_controller_tb__DOT__M_AXI_ARADDR = 0U;
        __Vdly__tmc_controller_tb__DOT__M_AXI_ARVALID = 0U;
        __Vdly__tmc_controller_tb__DOT__M_AXI_RREADY = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U] = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U] = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U] = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U] = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U] = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U] = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY = 1U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY = 1U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_state = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_state = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_was_logical = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_was_logical = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_ctrl = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_mode = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[0U] = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[1U] = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[2U] = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[0U] = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[1U] = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[2U] = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far = 1U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_logical = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_logical = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot = 0U;
        vlSelf->tmc_controller_tb__DOT__dut__DOT__last_victim_slot = 0U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_tier_split = 0xc0010000U;
        while (VL_GTS_III(32, 0x1ffU, vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
            vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__3 = 0U;
            vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__3 = 0U;
            if ((0x1feU >= (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i))) {
                vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[(0x1ffU 
                                                                            & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__3;
                vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[(0x1ffU 
                                                                        & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                    = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__3;
            }
            vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
        }
        vlSelf->tmc_controller_tb__DOT__dut__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
            vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_valid[(0xffU 
                                                                        & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0U;
            vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_logical[(0xffU 
                                                                          & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0U;
            vlSelf->tmc_controller_tb__DOT__dut__DOT__close_alloc_age[(0xffU 
                                                                       & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0xffffffffU;
            vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
        }
        vlSelf->tmc_controller_tb__DOT__dut__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
            tmc_controller_tb__DOT__dut__DOT__far_slot_valid[(0xffU 
                                                              & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0U;
            tmc_controller_tb__DOT__dut__DOT__far_slot_logical[(0xffU 
                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] = 0U;
            vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
        }
        vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx = 0U;
        vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx = 0U;
        vlSelf->tmc_controller_tb__DOT__dut__DOT__i = 0U;
        while (VL_GTS_III(32, 0x1ffU, vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
            if ((0x100U > vlSelf->tmc_controller_tb__DOT__dut__DOT__i)) {
                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__4 = 1U;
                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__4 
                    = (0xffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx);
                if ((0x1feU >= (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i))) {
                    vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[(0x1ffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__4;
                    vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[(0x1ffU 
                                                                            & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__4;
                }
                vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_valid[(0xffU 
                                                                            & vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx)] = 1U;
                vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_logical[(0xffU 
                                                                              & vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx)] 
                    = (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                vlSelf->tmc_controller_tb__DOT__dut__DOT__close_alloc_age[(0xffU 
                                                                           & vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx)] 
                    = (vlSelf->tmc_controller_tb__DOT__dut__DOT__alloc_seq 
                       + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx 
                    = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__cidx);
            } else {
                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__5 = 0U;
                vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__5 
                    = (0xffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx);
                if ((0x1feU >= (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i))) {
                    vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[(0x1ffU 
                                                                                & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_hda6de725__5;
                    vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[(0x1ffU 
                                                                            & vlSelf->tmc_controller_tb__DOT__dut__DOT__i)] 
                        = vlSelf->tmc_controller_tb__DOT__dut__DOT____Vlvbound_h438ed047__5;
                }
                tmc_controller_tb__DOT__dut__DOT__far_slot_valid[(0xffU 
                                                                  & vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx)] = 1U;
                tmc_controller_tb__DOT__dut__DOT__far_slot_logical[(0xffU 
                                                                    & vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx)] 
                    = (0x1ffU & vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
                vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx 
                    = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__fidx);
            }
            vlSelf->tmc_controller_tb__DOT__dut__DOT__i 
                = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dut__DOT__i);
        }
        __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq = 1U;
        __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq = 0x200U;
    }
    vlSelf->tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__last_mm2s_sts;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_status 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_status;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_mm2s_sts;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__last_s2mm_sts;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__waiting_s2mm_sts;
    vlSelf->tmc_controller_tb__DOT__S_AXI_BVALID = __Vdly__tmc_controller_tb__DOT__S_AXI_BVALID;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_ctrl 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_ctrl;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_tier_split 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_tier_split;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__relocation_pending 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__relocation_pending;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_state 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_state;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__alloc_seq 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__alloc_seq;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_mode 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_mode;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[0U] 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[0U];
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[1U] 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[1U];
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[2U] 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_mm2s_cmd[2U];
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[0U] 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[0U];
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[1U] 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[1U];
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[2U] 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_manual_s2mm_cmd[2U];
    vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_was_logical 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_was_logical;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_lblk_latched;
    vlSelf->tmc_controller_tb__DOT__M_AXI_AWVALID = __Vdly__tmc_controller_tb__DOT__M_AXI_AWVALID;
    vlSelf->tmc_controller_tb__DOT__M_AXI_WVALID = __Vdly__tmc_controller_tb__DOT__M_AXI_WVALID;
    vlSelf->tmc_controller_tb__DOT__M_AXI_BREADY = __Vdly__tmc_controller_tb__DOT__M_AXI_BREADY;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__pending_logical_blk 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__pending_logical_blk;
    vlSelf->tmc_controller_tb__DOT__S_AXI_RVALID = __Vdly__tmc_controller_tb__DOT__S_AXI_RVALID;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_was_logical 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_was_logical;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_lblk_latched;
    vlSelf->tmc_controller_tb__DOT__M_AXI_ARVALID = __Vdly__tmc_controller_tb__DOT__M_AXI_ARVALID;
    vlSelf->tmc_controller_tb__DOT__M_AXI_RREADY = __Vdly__tmc_controller_tb__DOT__M_AXI_RREADY;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_logical 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_logical;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_close_slot;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_victim_logical 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_victim_logical;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__mig_hot_far_slot;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__rd_state 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__rd_state;
    vlSelf->tmc_controller_tb__DOT__S_AXI_ARREADY = __Vdly__tmc_controller_tb__DOT__S_AXI_ARREADY;
    if (__Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0] 
            = __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v0;
    }
    if (__Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_in_close[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1] 
            = __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_in_close__v1;
    }
    if (__Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0] 
            = __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_slot__v0;
    }
    if (__Vdlyvset__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__logical_slot[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1] 
            = __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__logical_slot__v1;
    }
    if (__Vdlyvset__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0) {
        tmc_controller_tb__DOT__dut__DOT__far_slot_valid[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__far_slot_valid__v0] = 1U;
        tmc_controller_tb__DOT__dut__DOT__far_slot_logical[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__far_slot_logical__v0] 
            = __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__far_slot_logical__v0;
    }
    vlSelf->tmc_controller_tb__DOT__dut__DOT__wr_state 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__wr_state;
    vlSelf->tmc_controller_tb__DOT__S_AXI_AWREADY = __Vdly__tmc_controller_tb__DOT__S_AXI_AWREADY;
    vlSelf->tmc_controller_tb__DOT__S_AXI_WREADY = __Vdly__tmc_controller_tb__DOT__S_AXI_WREADY;
    vlSelf->tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far 
        = __Vdly__tmc_controller_tb__DOT__dut__DOT__reg_scratch_in_far;
    if (__Vdlyvset__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0) {
        vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_logical[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_slot_logical__v0] 
            = __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__close_slot_logical__v0;
        vlSelf->tmc_controller_tb__DOT__dut__DOT__close_slot_valid[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_slot_valid__v0] = 1U;
        vlSelf->tmc_controller_tb__DOT__dut__DOT__close_alloc_age[__Vdlyvdim0__tmc_controller_tb__DOT__dut__DOT__close_alloc_age__v0] 
            = __Vdlyvval__tmc_controller_tb__DOT__dut__DOT__close_alloc_age__v0;
    }
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

VL_INLINE_OPT void Vtmc_controller_tb___024root___nba_sequent__TOP__2(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr;
    __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr = 0;
    IData/*31:0*/ __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr;
    __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr = 0;
    IData/*31:0*/ __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
    __Vtask_tmc_controller_tb__DOT__copy_block__2__s = 0;
    IData/*31:0*/ __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
    __Vtask_tmc_controller_tb__DOT__copy_block__2__d = 0;
    IData/*31:0*/ __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr;
    __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr = 0;
    IData/*31:0*/ __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
    __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
    __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr;
    __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr = 0;
    // Body
    vlSelf->tmc_controller_tb__DOT__M_AXI_RDATA = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RDATA;
    vlSelf->tmc_controller_tb__DOT__M_AXI_RLAST = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RLAST;
    vlSelf->tmc_controller_tb__DOT__M_AXI_BVALID = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_BVALID;
    vlSelf->tmc_controller_tb__DOT__M_AXI_RVALID = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXI_RVALID;
    if (vlSelf->tmc_controller_tb__DOT__aresetn) {
        vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TVALID = 0U;
        vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TVALID = 0U;
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TREADY))) {
            vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_cmd_seen = 1U;
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TREADY))) {
            vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_cmd_seen = 1U;
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__mm2s_cmd_seen) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__s2mm_cmd_seen))) {
            __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr 
                = vlSelf->tmc_controller_tb__DOT__s2mm_cmd_addr;
            vlSelf->tmc_controller_tb__DOT__dm_copy_count 
                = ((IData)(1U) + vlSelf->tmc_controller_tb__DOT__dm_copy_count);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr 
                = vlSelf->tmc_controller_tb__DOT__mm2s_cmd_addr;
            vlSelf->tmc_controller_tb__DOT__last_copy_src 
                = vlSelf->tmc_controller_tb__DOT__mm2s_cmd_addr;
            vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_cmd_seen = 0U;
            vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_cmd_seen = 0U;
            vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_status_countdown 
                = vlSelf->tmc_controller_tb__DOT__status_latency_cfg;
            vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_status_countdown 
                = vlSelf->tmc_controller_tb__DOT__status_latency_cfg;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr;
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xcU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xcU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x10U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x10U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x14U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x14U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x18U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x18U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x1cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x1cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x20U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x20U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x24U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x24U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x28U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x28U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x2cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x2cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x30U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x30U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x34U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x34U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x38U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x38U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x3cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x3cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x40U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x40U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x44U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x44U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x48U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x48U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x4cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x4cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x50U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x50U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x54U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x54U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x58U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x58U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x5cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x5cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x60U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x60U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x64U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x64U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x68U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x68U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x6cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x6cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x70U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x70U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x74U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x74U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x78U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x78U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x7cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x7cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x80U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x80U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x84U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x84U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x88U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x88U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x8cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x8cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x90U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x90U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x94U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x94U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x98U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x98U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0x9cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0x9cU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xa0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xa0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xa4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xa4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xa8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xa8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xacU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xacU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xb0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xb0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xb4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xb4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xb8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xb8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xbcU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xbcU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xc0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xc0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xc4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xc4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xc8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xc8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xccU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xccU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xd0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xd0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xd4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xd4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xd8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xd8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xdcU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xdcU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xe0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xe0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xe4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xe4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xe8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xe8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xecU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xecU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xf0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xf0U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xf4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xf4U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xf8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xf8U) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            __Vtask_tmc_controller_tb__DOT__copy_block__2__s 
                = ((IData)(0xfcU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__src_addr);
            __Vtask_tmc_controller_tb__DOT__copy_block__2__d 
                = ((IData)(0xfcU) + __Vtask_tmc_controller_tb__DOT__copy_block__2__dst_addr);
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__s;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
            __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout 
                = (((0xc0000000U <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                    & (0xc0010000U > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                    ? vlSelf->tmc_controller_tb__DOT__tier0_mem
                   [(0x3fffU & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                 - (IData)(0xc0000000U)) 
                                >> 2U))] : (((0xc0010000U 
                                              <= __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr) 
                                             & (0xc0020000U 
                                                > __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr))
                                             ? vlSelf->tmc_controller_tb__DOT__tier1_mem
                                            [(0x3fffU 
                                              & ((__Vfunc_tmc_controller_tb__DOT__mem_read_word__4__addr 
                                                  - (IData)(0xc0010000U)) 
                                                 >> 2U))]
                                             : 0xdead0000U));
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data 
                = __Vfunc_tmc_controller_tb__DOT__mem_read_word__4__Vfuncout;
            __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                = __Vtask_tmc_controller_tb__DOT__copy_block__2__d;
            if (((0xc0000000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                 & (0xc0010000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier0_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0000000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            } else if (((0xc0010000U <= __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr) 
                        & (0xc0020000U > __Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr))) {
                vlSelf->tmc_controller_tb__DOT__tier1_mem[(0x3fffU 
                                                           & ((__Vtask_tmc_controller_tb__DOT__mem_write_word__3__addr 
                                                               - (IData)(0xc0010000U)) 
                                                              >> 2U))] 
                    = __Vtask_tmc_controller_tb__DOT__mem_write_word__3__data;
            }
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TREADY))) {
            vlSelf->tmc_controller_tb__DOT__mm2s_cmd_addr 
                = vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U];
        }
        if (((IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID) 
             & (IData)(vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TREADY))) {
            vlSelf->tmc_controller_tb__DOT__s2mm_cmd_addr 
                = vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U];
        }
        if ((0U != vlSelf->tmc_controller_tb__DOT__mm2s_status_countdown)) {
            vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_status_countdown 
                = (vlSelf->tmc_controller_tb__DOT__mm2s_status_countdown 
                   - (IData)(1U));
            if (((1U == vlSelf->tmc_controller_tb__DOT__mm2s_status_countdown) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY))) {
                vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TVALID = 1U;
                vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TDATA = 0x80U;
            }
        }
        if ((0U != vlSelf->tmc_controller_tb__DOT__s2mm_status_countdown)) {
            vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_status_countdown 
                = (vlSelf->tmc_controller_tb__DOT__s2mm_status_countdown 
                   - (IData)(1U));
            if (((1U == vlSelf->tmc_controller_tb__DOT__s2mm_status_countdown) 
                 & (IData)(vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY))) {
                vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TVALID = 1U;
                vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TDATA = 0x40U;
            }
        }
    } else {
        vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_cmd_seen = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_cmd_seen = 0U;
        vlSelf->tmc_controller_tb__DOT__dm_copy_count = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_status_countdown = 0U;
        vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_status_countdown = 0U;
        vlSelf->tmc_controller_tb__DOT__last_copy_src = 0U;
        vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TVALID = 0U;
        vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TVALID = 0U;
        vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TDATA = 0U;
        vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TDATA = 0U;
        vlSelf->tmc_controller_tb__DOT__s2mm_cmd_addr = 0U;
        vlSelf->tmc_controller_tb__DOT__mm2s_cmd_addr = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->tmc_controller_tb__DOT__aresetn)))) {
        vlSelf->tmc_controller_tb__DOT__M_AXI_BRESP = 0U;
        vlSelf->tmc_controller_tb__DOT__M_AXI_RRESP = 0U;
        vlSelf->tmc_controller_tb__DOT__M_AXI_AWREADY = 1U;
        vlSelf->tmc_controller_tb__DOT__M_AXI_WREADY = 1U;
        vlSelf->tmc_controller_tb__DOT__M_AXI_ARREADY = 1U;
        vlSelf->tmc_controller_tb__DOT__status_latency_cfg = 2U;
    }
    vlSelf->tmc_controller_tb__DOT__mm2s_cmd_seen = vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_cmd_seen;
    vlSelf->tmc_controller_tb__DOT__s2mm_cmd_seen = vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_cmd_seen;
    vlSelf->tmc_controller_tb__DOT__mm2s_status_countdown 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__mm2s_status_countdown;
    vlSelf->tmc_controller_tb__DOT__s2mm_status_countdown 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__s2mm_status_countdown;
}

VL_INLINE_OPT void Vtmc_controller_tb___024root___nba_sequent__TOP__3(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__S_AXIS_MM2S_STS_TREADY;
    vlSelf->tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__S_AXIS_S2MM_STS_TREADY;
    vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U] 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[0U];
    vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U] 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[1U];
    vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U] 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TDATA[2U];
    vlSelf->tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_S2MM_CMD_TVALID;
    vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U] 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[0U];
    vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U] 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[1U];
    vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U] 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TDATA[2U];
    vlSelf->tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID 
        = vlSelf->__Vdly__tmc_controller_tb__DOT__M_AXIS_MM2S_CMD_TVALID;
}

void Vtmc_controller_tb___024root___eval_nba(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtmc_controller_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtmc_controller_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtmc_controller_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtmc_controller_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vtmc_controller_tb___024root___timing_resume(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_haf04f01d__0.resume("@(posedge tmc_controller_tb.aclk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hddec6451__0.resume("@([changed] (3'h0 != tmc_controller_tb.dut.mig_state))");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtmc_controller_tb___024root___timing_commit(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_haf04f01d__0.commit("@(posedge tmc_controller_tb.aclk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hddec6451__0.commit("@([changed] (3'h0 != tmc_controller_tb.dut.mig_state))");
    }
}

void Vtmc_controller_tb___024root___eval_triggers__act(Vtmc_controller_tb___024root* vlSelf);

bool Vtmc_controller_tb___024root___eval_phase__act(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtmc_controller_tb___024root___eval_triggers__act(vlSelf);
    Vtmc_controller_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtmc_controller_tb___024root___timing_resume(vlSelf);
        Vtmc_controller_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtmc_controller_tb___024root___eval_phase__nba(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtmc_controller_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmc_controller_tb___024root___dump_triggers__nba(Vtmc_controller_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmc_controller_tb___024root___dump_triggers__act(Vtmc_controller_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtmc_controller_tb___024root___eval(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtmc_controller_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tmc_testbench/tmc_testbench.srcs/sources_1/new/tmc_controller_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtmc_controller_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tmc_testbench/tmc_testbench.srcs/sources_1/new/tmc_controller_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtmc_controller_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtmc_controller_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtmc_controller_tb___024root___eval_debug_assertions(Vtmc_controller_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtmc_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmc_controller_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
