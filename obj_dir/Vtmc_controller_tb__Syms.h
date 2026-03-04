// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTMC_CONTROLLER_TB__SYMS_H_
#define VERILATED_VTMC_CONTROLLER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtmc_controller_tb.h"

// INCLUDE MODULE CLASSES
#include "Vtmc_controller_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtmc_controller_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtmc_controller_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtmc_controller_tb___024root   TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tmc_controller_tb;
    VerilatedScope __Vscope_tmc_controller_tb__axi_lite_read;
    VerilatedScope __Vscope_tmc_controller_tb__axi_lite_write;
    VerilatedScope __Vscope_tmc_controller_tb__check_equal;
    VerilatedScope __Vscope_tmc_controller_tb__check_true;
    VerilatedScope __Vscope_tmc_controller_tb__wait_migration_idle;
    VerilatedScope __Vscope_tmc_controller_tb__wait_migration_idle_signal;
    VerilatedScope __Vscope_tmc_controller_tb__wait_promote_increment;

    // CONSTRUCTORS
    Vtmc_controller_tb__Syms(VerilatedContext* contextp, const char* namep, Vtmc_controller_tb* modelp);
    ~Vtmc_controller_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
