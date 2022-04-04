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

    // CONSTRUCTORS
    Vysyx22040413_SingleCpu__Syms(VerilatedContext* contextp, const char* namep, Vysyx22040413_SingleCpu* modelp);
    ~Vysyx22040413_SingleCpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
