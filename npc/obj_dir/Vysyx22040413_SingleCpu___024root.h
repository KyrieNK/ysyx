// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx22040413_SingleCpu.h for the primary calling header

#ifndef VERILATED_VYSYX22040413_SINGLECPU___024ROOT_H_
#define VERILATED_VYSYX22040413_SINGLECPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx22040413_SingleCpu__Syms;
class Vysyx22040413_SingleCpu_VerilatedVcd;


//----------

VL_MODULE(Vysyx22040413_SingleCpu___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(inst_ena,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*4:0*/ ysyx22040413_SingleCpu__DOT__rd_w_addr;
    CData/*4:0*/ ysyx22040413_SingleCpu__DOT__inst_type;
    CData/*7:0*/ ysyx22040413_SingleCpu__DOT__inst_opcode;
    CData/*0:0*/ ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__inst_addi;
    QData/*63:0*/ ysyx22040413_SingleCpu__DOT__rd_data;
    VlUnpacked<QData/*63:0*/, 32> ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx22040413_SingleCpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx22040413_SingleCpu___024root);  ///< Copying not allowed
  public:
    Vysyx22040413_SingleCpu___024root(const char* name);
    ~Vysyx22040413_SingleCpu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx22040413_SingleCpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
