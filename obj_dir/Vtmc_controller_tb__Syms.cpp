// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtmc_controller_tb__pch.h"
#include "Vtmc_controller_tb.h"
#include "Vtmc_controller_tb___024root.h"

// FUNCTIONS
Vtmc_controller_tb__Syms::~Vtmc_controller_tb__Syms()
{
}

Vtmc_controller_tb__Syms::Vtmc_controller_tb__Syms(VerilatedContext* contextp, const char* namep, Vtmc_controller_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tmc_controller_tb.configure(this, name(), "tmc_controller_tb", "tmc_controller_tb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tmc_controller_tb__axi_lite_read.configure(this, name(), "tmc_controller_tb.axi_lite_read", "axi_lite_read", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tmc_controller_tb__axi_lite_write.configure(this, name(), "tmc_controller_tb.axi_lite_write", "axi_lite_write", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tmc_controller_tb__check_equal.configure(this, name(), "tmc_controller_tb.check_equal", "check_equal", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tmc_controller_tb__check_true.configure(this, name(), "tmc_controller_tb.check_true", "check_true", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tmc_controller_tb__wait_migration_idle.configure(this, name(), "tmc_controller_tb.wait_migration_idle", "wait_migration_idle", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tmc_controller_tb__wait_migration_idle_signal.configure(this, name(), "tmc_controller_tb.wait_migration_idle_signal", "wait_migration_idle_signal", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tmc_controller_tb__wait_promote_increment.configure(this, name(), "tmc_controller_tb.wait_promote_increment", "wait_promote_increment", -9, VerilatedScope::SCOPE_OTHER);
}
