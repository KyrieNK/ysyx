// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx22040413_SingleCpu.h for the primary calling header

#include "Vysyx22040413_SingleCpu___024root.h"
#include "Vysyx22040413_SingleCpu__Syms.h"

//==========


void Vysyx22040413_SingleCpu___024root___ctor_var_reset(Vysyx22040413_SingleCpu___024root* vlSelf);

Vysyx22040413_SingleCpu___024root::Vysyx22040413_SingleCpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx22040413_SingleCpu___024root___ctor_var_reset(this);
}

void Vysyx22040413_SingleCpu___024root::__Vconfigure(Vysyx22040413_SingleCpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx22040413_SingleCpu___024root::~Vysyx22040413_SingleCpu___024root() {
}

void Vysyx22040413_SingleCpu___024root___settle__TOP__1(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode 
        = (0xf1U & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode));
    vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode 
        = (0x1fU & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode));
    vlSelf->inst_ena = ((IData)(vlSelf->rst) ? 0U : 1U);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__inst_addi 
        = (IData)((0x10U == (0x707cU & vlSelf->inst)));
    vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode 
        = ((0xfeU & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode)) 
           | ((IData)(vlSelf->rst) ? 0U : (1U & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__inst_addi))));
    vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode 
        = ((0xefU & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__inst_addi))) 
              << 4U));
    vlSelf->ysyx22040413_SingleCpu__DOT__inst_type 
        = ((0xfU & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__inst_addi))) 
              << 4U));
    if (vlSelf->rst) {
        vlSelf->ysyx22040413_SingleCpu__DOT__rd_w_addr = 0U;
        vlSelf->ysyx22040413_SingleCpu__DOT__rd_data = 0ULL;
    } else {
        vlSelf->ysyx22040413_SingleCpu__DOT__rd_w_addr 
            = ((0x10U & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                ? (0x1fU & (vlSelf->inst >> 7U)) : 0U);
        vlSelf->ysyx22040413_SingleCpu__DOT__rd_data 
            = ((0x11U == (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode))
                ? (((IData)(vlSelf->rst) ? 0ULL : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    (((IData)(vlSelf->rst)
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type) 
                                                          >> 4U)))
                                                      ? 
                                                     vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs
                                                     [
                                                     ((IData)(vlSelf->rst)
                                                       ? 0U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->inst 
                                                           >> 0xfU))
                                                        : 0U))]
                                                      : 0ULL))
                                                    : 0ULL)) 
                   + ((IData)(vlSelf->rst) ? 0ULL : 
                      ((0x10U & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                        ? (((- (QData)((IData)((vlSelf->inst 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))
                        : 0ULL))) : 0ULL);
    }
}

void Vysyx22040413_SingleCpu___024root___eval_initial(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx22040413_SingleCpu___024root___eval_settle(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___eval_settle\n"); );
    // Body
    Vysyx22040413_SingleCpu___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx22040413_SingleCpu___024root___final(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___final\n"); );
}

void Vysyx22040413_SingleCpu___024root___ctor_var_reset(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->inst_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__rd_w_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx22040413_SingleCpu__DOT__inst_type = VL_RAND_RESET_I(5);
    vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode = VL_RAND_RESET_I(8);
    vlSelf->ysyx22040413_SingleCpu__DOT__rd_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__inst_addi = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
