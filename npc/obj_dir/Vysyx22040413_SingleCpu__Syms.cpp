// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx22040413_SingleCpu__Syms.h"
#include "Vysyx22040413_SingleCpu.h"
#include "Vysyx22040413_SingleCpu___024root.h"

void Vysyx22040413_SingleCpu___024root____Vdpiexp_ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__publicSetBool_TOP(Vysyx22040413_SingleCpu__Syms* __restrict vlSymsp, CData/*0:0*/ in_bool);

// FUNCTIONS
Vysyx22040413_SingleCpu__Syms::~Vysyx22040413_SingleCpu__Syms()
{
}

Vysyx22040413_SingleCpu__Syms::Vysyx22040413_SingleCpu__Syms(VerilatedContext* contextp, const char* namep,Vysyx22040413_SingleCpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_ysyx22040413_SingleCpu__ysyx22040413_IDU.configure(this, name(), "ysyx22040413_SingleCpu.ysyx22040413_IDU", "ysyx22040413_IDU", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_ysyx22040413_SingleCpu__ysyx22040413_IDU.exportInsert(__Vfinal, "publicSetBool", (void*)(&Vysyx22040413_SingleCpu___024root____Vdpiexp_ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__publicSetBool_TOP));
    }
}
