// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX22040413_SINGLECPU__SYMS_H_
#define VERILATED_VYSYX22040413_SINGLECPU__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vysyx22040413_SingleCpu.h"

// INCLUDE MODULE CLASSES
#include "Vysyx22040413_SingleCpu___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vysyx22040413_SingleCpu__Vcb_publicSetBool_t = void (*) (Vysyx22040413_SingleCpu__Syms* __restrict vlSymsp, CData/*0:0*/ in_bool);

// SYMS CLASS (contains all model state)
class Vysyx22040413_SingleCpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx22040413_SingleCpu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx22040413_SingleCpu___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyx22040413_SingleCpu__ysyx22040413_IDU;

    // CONSTRUCTORS
    Vysyx22040413_SingleCpu__Syms(VerilatedContext* contextp, const char* namep, Vysyx22040413_SingleCpu* modelp);
    ~Vysyx22040413_SingleCpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
