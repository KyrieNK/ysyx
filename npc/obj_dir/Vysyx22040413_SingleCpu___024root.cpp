// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx22040413_SingleCpu.h for the primary calling header

#include "Vysyx22040413_SingleCpu___024root.h"
#include "Vysyx22040413_SingleCpu__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx22040413_SingleCpu___024root____Vdpiimwrap_ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root____Vdpiimwrap_ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vysyx22040413_SingleCpu___024root___combo__TOP__1(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->inst_ena = ((IData)(vlSelf->rst) ? 0U : 1U);
}

VL_INLINE_OPT void Vysyx22040413_SingleCpu___024root___sequent__TOP__3(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32;
    QData/*63:0*/ __Vdly__pc;
    QData/*63:0*/ __Vdlyvval__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32;
    // Body
    __Vdly__pc = vlSelf->pc;
    __Vdlyvset__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32 = 0U;
    __Vdly__pc = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal) 
                                                  | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__jalr)
                                                   ? 0ULL
                                                   : vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_EXU__DOT__pc_res_1)
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->pc)));
    if (vlSelf->rst) {
        __Vdlyvset__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v0 = 1U;
    } else if ((((~ (IData)(vlSelf->rst)) & (((((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                                | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc)) 
                                               | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui)) 
                                              | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal)) 
                                             | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                & (0U != (0x1fU & (vlSelf->inst >> 7U))))) {
        __Vdlyvval__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32 
            = ((((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
                   & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1) 
                  | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc))) 
                     & vlSelf->pc)) | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                       & vlSelf->pc)) 
                | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                   & vlSelf->pc)) + (((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
                                        & (((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm))) 
                                            & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm) 
                                           | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u))) 
                                              & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm))) 
                                       | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc))) 
                                          & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm)) 
                                      | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))))) 
                                     | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))))));
        __Vdlyvset__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32 = 1U;
        __Vdlyvdim0__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    vlSelf->pc = __Vdly__pc;
    if (__Vdlyvset__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v0) {
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[1U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[2U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[3U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[4U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[5U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[6U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[7U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[8U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[9U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0xaU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0xbU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0xcU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0xdU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0xeU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0xfU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x10U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x11U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x12U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x13U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x14U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x15U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x16U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x17U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x18U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x19U] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x1aU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x1bU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x1cU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x1dU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x1eU] = 0ULL;
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32) {
        vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[__Vdlyvdim0__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32] 
            = __Vdlyvval__ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs__v32;
    }
}

VL_INLINE_OPT void Vysyx22040413_SingleCpu___024root___combo__TOP__5(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm 
        = (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
            << 0x18U) | (QData)((IData)((0xfff000U 
                                         & (vlSelf->inst 
                                            >> 8U)))));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc 
        = (IData)((0x17U == (0x7fU & vlSelf->inst)));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui 
        = (IData)((0x37U == (0x7fU & vlSelf->inst)));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm 
        = (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)((vlSelf->inst 
                                        >> 0x14U))));
    vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal 
        = (IData)((0x6fU == (0x7fU & vlSelf->inst)));
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

void Vysyx22040413_SingleCpu___024root___eval(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___eval\n"); );
    // Body
    Vysyx22040413_SingleCpu___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx22040413_SingleCpu___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vysyx22040413_SingleCpu___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx22040413_SingleCpu___024root___change_request_1(Vysyx22040413_SingleCpu___024root* vlSelf);

VL_INLINE_OPT QData Vysyx22040413_SingleCpu___024root___change_request(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___change_request\n"); );
    // Body
    return (Vysyx22040413_SingleCpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx22040413_SingleCpu___024root___change_request_1(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx22040413_SingleCpu___024root___eval_debug_assertions(Vysyx22040413_SingleCpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx22040413_SingleCpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
