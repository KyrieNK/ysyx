// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx22040413_SingleCpu__Syms.h"


void Vysyx22040413_SingleCpu___024root__traceInitSub0(Vysyx22040413_SingleCpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx22040413_SingleCpu___024root__traceInitTop(Vysyx22040413_SingleCpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx22040413_SingleCpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx22040413_SingleCpu___024root__traceInitSub0(Vysyx22040413_SingleCpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+69,"clk", false,-1);
        tracep->declBit(c+70,"rst", false,-1);
        tracep->declBus(c+71,"inst", false,-1, 31,0);
        tracep->declQuad(c+72,"pc", false,-1, 63,0);
        tracep->declBit(c+74,"inst_ena", false,-1);
        tracep->declBit(c+69,"ysyx22040413_SingleCpu clk", false,-1);
        tracep->declBit(c+70,"ysyx22040413_SingleCpu rst", false,-1);
        tracep->declBus(c+71,"ysyx22040413_SingleCpu inst", false,-1, 31,0);
        tracep->declQuad(c+72,"ysyx22040413_SingleCpu pc", false,-1, 63,0);
        tracep->declBit(c+74,"ysyx22040413_SingleCpu inst_ena", false,-1);
        tracep->declBit(c+75,"ysyx22040413_SingleCpu rs1_r_ena", false,-1);
        tracep->declBus(c+76,"ysyx22040413_SingleCpu rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+90,"ysyx22040413_SingleCpu rs2_r_ena", false,-1);
        tracep->declBus(c+91,"ysyx22040413_SingleCpu rs2_r_addr", false,-1, 4,0);
        tracep->declBit(c+75,"ysyx22040413_SingleCpu rd_w_ena", false,-1);
        tracep->declBus(c+1,"ysyx22040413_SingleCpu rd_w_addr", false,-1, 4,0);
        tracep->declBus(c+2,"ysyx22040413_SingleCpu inst_type", false,-1, 4,0);
        tracep->declBus(c+3,"ysyx22040413_SingleCpu inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+77,"ysyx22040413_SingleCpu op1", false,-1, 63,0);
        tracep->declQuad(c+79,"ysyx22040413_SingleCpu op2", false,-1, 63,0);
        tracep->declQuad(c+81,"ysyx22040413_SingleCpu r_data1", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx22040413_SingleCpu r_data2", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx22040413_SingleCpu inst_type_o", false,-1, 4,0);
        tracep->declQuad(c+83,"ysyx22040413_SingleCpu rd_data", false,-1, 63,0);
        tracep->declBit(c+69,"ysyx22040413_SingleCpu ysyx22040413_IFU clk", false,-1);
        tracep->declBit(c+70,"ysyx22040413_SingleCpu ysyx22040413_IFU rst", false,-1);
        tracep->declBit(c+74,"ysyx22040413_SingleCpu ysyx22040413_IFU inst_ena", false,-1);
        tracep->declQuad(c+72,"ysyx22040413_SingleCpu ysyx22040413_IFU pc", false,-1, 63,0);
        tracep->declBit(c+70,"ysyx22040413_SingleCpu ysyx22040413_IDU rst", false,-1);
        tracep->declBus(c+71,"ysyx22040413_SingleCpu ysyx22040413_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+81,"ysyx22040413_SingleCpu ysyx22040413_IDU rs1_data", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx22040413_SingleCpu ysyx22040413_IDU rs2_data", false,-1, 63,0);
        tracep->declBit(c+75,"ysyx22040413_SingleCpu ysyx22040413_IDU rs1_r_ena", false,-1);
        tracep->declBus(c+76,"ysyx22040413_SingleCpu ysyx22040413_IDU rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+90,"ysyx22040413_SingleCpu ysyx22040413_IDU rs2_r_ena", false,-1);
        tracep->declBus(c+91,"ysyx22040413_SingleCpu ysyx22040413_IDU rs2_r_addr", false,-1, 4,0);
        tracep->declBit(c+75,"ysyx22040413_SingleCpu ysyx22040413_IDU rd_w_ena", false,-1);
        tracep->declBus(c+1,"ysyx22040413_SingleCpu ysyx22040413_IDU rd_w_addr", false,-1, 4,0);
        tracep->declBus(c+2,"ysyx22040413_SingleCpu ysyx22040413_IDU inst_type", false,-1, 4,0);
        tracep->declBus(c+3,"ysyx22040413_SingleCpu ysyx22040413_IDU inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+77,"ysyx22040413_SingleCpu ysyx22040413_IDU op1", false,-1, 63,0);
        tracep->declQuad(c+79,"ysyx22040413_SingleCpu ysyx22040413_IDU op2", false,-1, 63,0);
        tracep->declBus(c+85,"ysyx22040413_SingleCpu ysyx22040413_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+86,"ysyx22040413_SingleCpu ysyx22040413_IDU rd", false,-1, 4,0);
        tracep->declBus(c+87,"ysyx22040413_SingleCpu ysyx22040413_IDU func3", false,-1, 2,0);
        tracep->declBus(c+88,"ysyx22040413_SingleCpu ysyx22040413_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+89,"ysyx22040413_SingleCpu ysyx22040413_IDU imm", false,-1, 11,0);
        tracep->declBit(c+4,"ysyx22040413_SingleCpu ysyx22040413_IDU inst_addi", false,-1);
        tracep->declBit(c+70,"ysyx22040413_SingleCpu ysyx22040413_EXU rst", false,-1);
        tracep->declBus(c+2,"ysyx22040413_SingleCpu ysyx22040413_EXU inst_type_i", false,-1, 4,0);
        tracep->declBus(c+3,"ysyx22040413_SingleCpu ysyx22040413_EXU inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+77,"ysyx22040413_SingleCpu ysyx22040413_EXU op1", false,-1, 63,0);
        tracep->declQuad(c+79,"ysyx22040413_SingleCpu ysyx22040413_EXU op2", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx22040413_SingleCpu ysyx22040413_EXU inst_type_o", false,-1, 4,0);
        tracep->declQuad(c+83,"ysyx22040413_SingleCpu ysyx22040413_EXU rd_data", false,-1, 63,0);
        tracep->declBit(c+69,"ysyx22040413_SingleCpu RegisterFile clk", false,-1);
        tracep->declBit(c+70,"ysyx22040413_SingleCpu RegisterFile rst", false,-1);
        tracep->declBus(c+1,"ysyx22040413_SingleCpu RegisterFile w_addr", false,-1, 4,0);
        tracep->declQuad(c+83,"ysyx22040413_SingleCpu RegisterFile w_data", false,-1, 63,0);
        tracep->declBit(c+75,"ysyx22040413_SingleCpu RegisterFile w_ena", false,-1);
        tracep->declBus(c+76,"ysyx22040413_SingleCpu RegisterFile r_addr1", false,-1, 4,0);
        tracep->declQuad(c+81,"ysyx22040413_SingleCpu RegisterFile r_data1", false,-1, 63,0);
        tracep->declBit(c+75,"ysyx22040413_SingleCpu RegisterFile r_ena1", false,-1);
        tracep->declBus(c+91,"ysyx22040413_SingleCpu RegisterFile r_addr2", false,-1, 4,0);
        tracep->declQuad(c+92,"ysyx22040413_SingleCpu RegisterFile r_data2", false,-1, 63,0);
        tracep->declBit(c+90,"ysyx22040413_SingleCpu RegisterFile r_ena2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+5+i*2,"ysyx22040413_SingleCpu RegisterFile regs", true,(i+0), 63,0);}}
    }
}

void Vysyx22040413_SingleCpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx22040413_SingleCpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx22040413_SingleCpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx22040413_SingleCpu___024root__traceRegister(Vysyx22040413_SingleCpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx22040413_SingleCpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx22040413_SingleCpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx22040413_SingleCpu___024root__traceCleanup, vlSelf);
    }
}

void Vysyx22040413_SingleCpu___024root__traceFullSub0(Vysyx22040413_SingleCpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx22040413_SingleCpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx22040413_SingleCpu___024root* const __restrict vlSelf = static_cast<Vysyx22040413_SingleCpu___024root*>(voidSelf);
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx22040413_SingleCpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx22040413_SingleCpu___024root__traceFullSub0(Vysyx22040413_SingleCpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx22040413_SingleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx22040413_SingleCpu__DOT__rd_w_addr),5);
        tracep->fullCData(oldp+2,(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type),5);
        tracep->fullCData(oldp+3,(vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode),8);
        tracep->fullBit(oldp+4,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__inst_addi));
        tracep->fullQData(oldp+5,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0]),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[1]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[2]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[3]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[4]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[5]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[6]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[7]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[8]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[9]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[10]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[11]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[12]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[13]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[14]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[15]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[16]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[17]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[18]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[19]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[20]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[21]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[22]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[23]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[24]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[25]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[26]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[27]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[28]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[29]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[30]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[31]),64);
        tracep->fullBit(oldp+69,(vlSelf->clk));
        tracep->fullBit(oldp+70,(vlSelf->rst));
        tracep->fullIData(oldp+71,(vlSelf->inst),32);
        tracep->fullQData(oldp+72,(vlSelf->pc),64);
        tracep->fullBit(oldp+74,(vlSelf->inst_ena));
        tracep->fullBit(oldp+75,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & ((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type) 
                                                 >> 4U)))));
        tracep->fullCData(oldp+76,(((IData)(vlSelf->rst)
                                     ? 0U : ((0x10U 
                                              & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                                              ? (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0xfU))
                                              : 0U))),5);
        tracep->fullQData(oldp+77,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0x10U 
                                                & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                                                ? ((IData)(vlSelf->rst)
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
                                                : 0ULL))),64);
        tracep->fullQData(oldp+79,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0x10U 
                                                & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                                : 0ULL))),64);
        tracep->fullQData(oldp+81,(((IData)(vlSelf->rst)
                                     ? 0ULL : (((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & ((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type) 
                                                    >> 4U)))
                                                ? vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs
                                               [((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))
                                                   : 0U))]
                                                : 0ULL))),64);
        tracep->fullQData(oldp+83,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0x11U 
                                                == (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_opcode))
                                                ? (
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((0x10U 
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
                                                   + 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__inst_type))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x14U))))
                                                      : 0ULL)))
                                                : 0ULL))),64);
        tracep->fullCData(oldp+85,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+86,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+87,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+88,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullSData(oldp+89,((vlSelf->inst >> 0x14U)),12);
        tracep->fullBit(oldp+90,(0U));
        tracep->fullCData(oldp+91,(0U),5);
        tracep->fullQData(oldp+92,(0ULL),64);
    }
}
