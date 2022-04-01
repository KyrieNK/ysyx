// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx22040413_SingleCpu.h"
#include "Vysyx22040413_SingleCpu__Syms.h"
#include "verilated_dpi.h"


void Vysyx22040413_SingleCpu::publicSetBool(svBit in_bool) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root::publicSetBool\n"); );
    // Variables
    CData/*0:0*/ in_bool__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("publicSetBool");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx22040413_SingleCpu__Vcb_publicSetBool_t __Vcb = (Vysyx22040413_SingleCpu__Vcb_publicSetBool_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    in_bool__Vcvt = (1U & in_bool);
    (*__Vcb)((Vysyx22040413_SingleCpu__Syms*)(__Vscopep->symsp()), in_bool__Vcvt);
}
