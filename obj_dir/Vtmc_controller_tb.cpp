// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtmc_controller_tb__pch.h"

//============================================================
// Constructors

Vtmc_controller_tb::Vtmc_controller_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtmc_controller_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtmc_controller_tb::Vtmc_controller_tb(const char* _vcname__)
    : Vtmc_controller_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtmc_controller_tb::~Vtmc_controller_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtmc_controller_tb___024root___eval_debug_assertions(Vtmc_controller_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtmc_controller_tb___024root___eval_static(Vtmc_controller_tb___024root* vlSelf);
void Vtmc_controller_tb___024root___eval_initial(Vtmc_controller_tb___024root* vlSelf);
void Vtmc_controller_tb___024root___eval_settle(Vtmc_controller_tb___024root* vlSelf);
void Vtmc_controller_tb___024root___eval(Vtmc_controller_tb___024root* vlSelf);

void Vtmc_controller_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtmc_controller_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtmc_controller_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtmc_controller_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtmc_controller_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtmc_controller_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtmc_controller_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtmc_controller_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtmc_controller_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtmc_controller_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtmc_controller_tb___024root___eval_final(Vtmc_controller_tb___024root* vlSelf);

VL_ATTR_COLD void Vtmc_controller_tb::final() {
    Vtmc_controller_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtmc_controller_tb::hierName() const { return vlSymsp->name(); }
const char* Vtmc_controller_tb::modelName() const { return "Vtmc_controller_tb"; }
unsigned Vtmc_controller_tb::threads() const { return 1; }
void Vtmc_controller_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtmc_controller_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtmc_controller_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtmc_controller_tb::trace()' called on model that was Verilated without --trace option");
}
