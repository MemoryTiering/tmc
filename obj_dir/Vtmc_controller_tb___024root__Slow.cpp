// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtmc_controller_tb.h for the primary calling header

#include "Vtmc_controller_tb__pch.h"
#include "Vtmc_controller_tb__Syms.h"
#include "Vtmc_controller_tb___024root.h"

void Vtmc_controller_tb___024root___ctor_var_reset(Vtmc_controller_tb___024root* vlSelf);

Vtmc_controller_tb___024root::Vtmc_controller_tb___024root(Vtmc_controller_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtmc_controller_tb___024root___ctor_var_reset(this);
}

void Vtmc_controller_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtmc_controller_tb___024root::~Vtmc_controller_tb___024root() {
}
