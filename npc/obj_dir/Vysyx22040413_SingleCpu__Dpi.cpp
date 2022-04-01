// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vysyx22040413_SingleCpu::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vysyx22040413_SingleCpu__Dpi.h"
#include "Vysyx22040413_SingleCpu.h"

#ifndef VL_DPIDECL_publicSetBool_
#define VL_DPIDECL_publicSetBool_
void publicSetBool(svBit in_bool) {
    // DPI export at vsrc/ysyx22040413_IDU.v:71:6
    return Vysyx22040413_SingleCpu::publicSetBool(in_bool);
}
#endif

