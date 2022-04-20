// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx22040413_SingleCpu__Syms.h"


void Vysyx22040413_SingleCpu___024root__traceChgSub0(Vysyx22040413_SingleCpu___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx22040413_SingleCpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx22040413_SingleCpu___024root* const __restrict vlSelf = static_cast<Vysyx22040413_SingleCpu___024root*>(voidSelf);
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx22040413_SingleCpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx22040413_SingleCpu___024root__traceChgSub0(Vysyx22040413_SingleCpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,((((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
                                         & (((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm))) 
                                             & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm) 
                                            | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u))) 
                                               & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm))) 
                                        | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc))) 
                                           & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm)) 
                                       | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))))) 
                                      | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)))))),64);
            tracep->chgBit(oldp+2,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi));
            tracep->chgBit(oldp+3,(((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal) 
                                    | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))));
            tracep->chgQData(oldp+4,(vlSelf->ysyx22040413_SingleCpu__DOT__r_data1),64);
            tracep->chgBit(oldp+6,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm));
            tracep->chgBit(oldp+7,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc));
            tracep->chgBit(oldp+8,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui));
            tracep->chgBit(oldp+9,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal));
            tracep->chgBit(oldp+10,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr));
            tracep->chgBit(oldp+11,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u));
            tracep->chgQData(oldp+12,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm),64);
            tracep->chgQData(oldp+16,((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm))) 
                                        & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm) 
                                       | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u))) 
                                          & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm))),64);
            tracep->chgBit(oldp+18,(((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm) 
                                     | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u))));
            tracep->chgBit(oldp+19,((((((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                        | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc)) 
                                       | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui)) 
                                      | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal)) 
                                     | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+20,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0]),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[1]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[2]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[3]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[4]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[5]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[6]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[7]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[8]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[9]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[10]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[11]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[12]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[13]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[14]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[15]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[16]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[17]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[18]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[19]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[20]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[21]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[22]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[23]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[24]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[25]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[26]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[27]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[28]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[29]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[30]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+84,(vlSelf->clk));
        tracep->chgBit(oldp+85,(vlSelf->rst));
        tracep->chgIData(oldp+86,(vlSelf->inst),32);
        tracep->chgQData(oldp+87,(vlSelf->pc),64);
        tracep->chgBit(oldp+89,(vlSelf->inst_ena));
        tracep->chgBit(oldp+90,(((~ (IData)(vlSelf->rst)) 
                                 & (((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                     | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)) 
                                    | (IData)((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->inst)))))));
        tracep->chgCData(oldp+91,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgBit(oldp+92,(((~ (IData)(vlSelf->rst)) 
                                 & (IData)((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->inst))))));
        tracep->chgCData(oldp+93,((0x1fU & (vlSelf->inst 
                                            >> 0x14U))),5);
        tracep->chgBit(oldp+94,(((~ (IData)(vlSelf->rst)) 
                                 & (((((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                       | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc)) 
                                      | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui)) 
                                     | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal)) 
                                    | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)))));
        tracep->chgCData(oldp+95,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgQData(oldp+96,((((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
                                      & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1) 
                                     | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc))) 
                                        & vlSelf->pc)) 
                                    | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                       & vlSelf->pc)) 
                                   | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                                      & vlSelf->pc))),64);
        tracep->chgQData(oldp+98,((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                    & vlSelf->pc) | 
                                   ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                                    & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1))),64);
        tracep->chgQData(oldp+100,((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                     & (((- (QData)((IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
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
                                       & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm))),64);
        tracep->chgQData(oldp+102,(((IData)(vlSelf->rst)
                                     ? 0ULL : (((~ (IData)(vlSelf->rst)) 
                                                & (IData)(
                                                          (0x3023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))))
                                                ? vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs
                                               [(0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U))]
                                                : 0ULL))),64);
        tracep->chgQData(oldp+104,(((((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
                                        & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1) 
                                       | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc))) 
                                          & vlSelf->pc)) 
                                      | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                         & vlSelf->pc)) 
                                     | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                                        & vlSelf->pc)) 
                                    + (((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
                                          & (((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm))) 
                                              & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm) 
                                             | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u))) 
                                                & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm))) 
                                         | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc))) 
                                            & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm)) 
                                        | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))))) 
                                       | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))))))),64);
        tracep->chgQData(oldp+106,(((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__jalr)
                                     ? 0ULL : ((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                                 & vlSelf->pc) 
                                                | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                                                   & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1)) 
                                               + ((
                                                   (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0x15U) 
                                                      | (QData)((IData)(
                                                                        ((0x100000U 
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
                                                     & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm))))),64);
        tracep->chgCData(oldp+108,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+109,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+110,((vlSelf->inst >> 0x19U)),7);
        tracep->chgBit(oldp+111,((0U == (3U & vlSelf->inst))));
        tracep->chgBit(oldp+112,((1U == (3U & vlSelf->inst))));
        tracep->chgBit(oldp+113,((2U == (3U & vlSelf->inst))));
        tracep->chgBit(oldp+114,((3U == (3U & vlSelf->inst))));
        tracep->chgBit(oldp+115,((0U == (7U & (vlSelf->inst 
                                               >> 2U)))));
        tracep->chgBit(oldp+116,((1U == (7U & (vlSelf->inst 
                                               >> 2U)))));
        tracep->chgBit(oldp+117,((2U == (7U & (vlSelf->inst 
                                               >> 2U)))));
        tracep->chgBit(oldp+118,((3U == (7U & (vlSelf->inst 
                                               >> 2U)))));
        tracep->chgBit(oldp+119,((4U == (7U & (vlSelf->inst 
                                               >> 2U)))));
        tracep->chgBit(oldp+120,((5U == (7U & (vlSelf->inst 
                                               >> 2U)))));
        tracep->chgBit(oldp+121,((7U == (7U & (vlSelf->inst 
                                               >> 2U)))));
        tracep->chgBit(oldp+122,((0U == (3U & (vlSelf->inst 
                                               >> 5U)))));
        tracep->chgBit(oldp+123,((1U == (3U & (vlSelf->inst 
                                               >> 5U)))));
        tracep->chgBit(oldp+124,((2U == (3U & (vlSelf->inst 
                                               >> 5U)))));
        tracep->chgBit(oldp+125,((3U == (3U & (vlSelf->inst 
                                               >> 5U)))));
        tracep->chgBit(oldp+126,((0U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+127,((1U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+128,((2U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+129,((3U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+130,((4U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+131,((5U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+132,((6U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+133,((7U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+134,((0U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+135,((0x20U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+136,((1U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+137,((5U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+138,((9U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+139,((0xdU == (vlSelf->inst 
                                           >> 0x19U))));
        tracep->chgBit(oldp+140,((0x15U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+141,((0x21U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+142,((0x11U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+143,((0x2dU == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+144,((0x7fU == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+145,((4U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+146,((8U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+147,((0xcU == (vlSelf->inst 
                                           >> 0x19U))));
        tracep->chgBit(oldp+148,((0x2cU == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+149,((0x10U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+150,((0x14U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+151,((0x60U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+152,((0x70U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+153,((0x50U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+154,((0x68U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+155,((0x78U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+156,((0x51U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+157,((0x71U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+158,((0x61U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+159,((0x69U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+160,((IData)((0x23U == 
                                          (0x7fU & vlSelf->inst)))));
        tracep->chgBit(oldp+161,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgQData(oldp+162,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->inst 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U))))))))),64);
        tracep->chgBit(oldp+164,((((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                   | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)) 
                                  | (IData)((0x3023U 
                                             == (0x707fU 
                                                 & vlSelf->inst))))));
        tracep->chgQData(oldp+165,(((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                      & vlSelf->pc) 
                                     | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                                        & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1)) 
                                    + (((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU)))) 
                                            << 0x15U) 
                                           | (QData)((IData)(
                                                             ((0x100000U 
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
                                          & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm)))),64);
    }
}

void Vysyx22040413_SingleCpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx22040413_SingleCpu___024root* const __restrict vlSelf = static_cast<Vysyx22040413_SingleCpu___024root*>(voidSelf);
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
