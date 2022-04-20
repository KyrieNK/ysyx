// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx22040413_SingleCpu.h for the primary calling header

#include "Vysyx22040413_SingleCpu___024root.h"
#include "Vysyx22040413_SingleCpu__Syms.h"

#include "verilated_dpi.h"

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

void Vysyx22040413_SingleCpu___024root___settle__TOP__2(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->inst_ena = ((IData)(vlSelf->rst) ? 0U : 1U);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm 
        = (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
            << 0x18U) | (QData)((IData)((0xfff000U 
                                         & (vlSelf->inst 
                                            >> 8U)))));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc 
        = (IData)((0x17U == (0x7fU & vlSelf->inst)));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui 
        = (IData)((0x37U == (0x7fU & vlSelf->inst)));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal 
        = (IData)((0x6fU == (0x7fU & vlSelf->inst)));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm 
        = (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)((vlSelf->inst 
                                        >> 0x14U))));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr 
        = (IData)((0x67U == (0x7fU & vlSelf->inst)));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm 
        = (IData)((0x10U == (0x7cU & vlSelf->inst)));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u 
        = ((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc) 
           | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi 
        = ((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm) 
           & (0U == (7U & (vlSelf->inst >> 0xcU))));
    vlSelf->ysyx22040413_SingleCpu__DOT__r_data1 = 
        ((IData)(vlSelf->rst) ? 0ULL : (((~ (IData)(vlSelf->rst)) 
                                         & (((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                             | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)) 
                                            | (IData)(
                                                      (0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)))))
                                         ? vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs
                                        [(0x1fU & (vlSelf->inst 
                                                   >> 0xfU))]
                                         : 0ULL));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_EXU__DOT__pc_res_1 
        = ((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
             & vlSelf->pc) | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                              & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1)) 
           + (((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
               & (((- (QData)((IData)((vlSelf->inst 
                                       >> 0x1fU)))) 
                   << 0x15U) | (QData)((IData)(((0x100000U 
                                                 & (vlSelf->inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->inst 
                                                            >> 0x14U))))))))) 
              | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                 & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm)));
}

void Vysyx22040413_SingleCpu___024root____Vdpiimwrap_ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx22040413_SingleCpu___024root___initial__TOP__4(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___initial__TOP__4\n"); );
    // Body
    Vysyx22040413_SingleCpu___024root____Vdpiimwrap_ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs);
}

void Vysyx22040413_SingleCpu___024root___eval_initial(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx22040413_SingleCpu___024root___initial__TOP__4(vlSelf);
}

void Vysyx22040413_SingleCpu___024root___eval_settle(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___eval_settle\n"); );
    // Body
    Vysyx22040413_SingleCpu___024root___settle__TOP__2(vlSelf);
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
    vlSelf->ysyx22040413_SingleCpu__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__r_data1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u = VL_RAND_RESET_I(1);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_EXU__DOT__pc_res_1 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
