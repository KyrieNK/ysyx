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
        tracep->declBit(c+85,"clk", false,-1);
        tracep->declBit(c+86,"rst", false,-1);
        tracep->declBus(c+87,"inst", false,-1, 31,0);
        tracep->declQuad(c+88,"pc", false,-1, 63,0);
        tracep->declBit(c+90,"inst_ena", false,-1);
        tracep->declBit(c+85,"ysyx22040413_SingleCpu clk", false,-1);
        tracep->declBit(c+86,"ysyx22040413_SingleCpu rst", false,-1);
        tracep->declBus(c+87,"ysyx22040413_SingleCpu inst", false,-1, 31,0);
        tracep->declQuad(c+88,"ysyx22040413_SingleCpu pc", false,-1, 63,0);
        tracep->declBit(c+90,"ysyx22040413_SingleCpu inst_ena", false,-1);
        tracep->declBit(c+91,"ysyx22040413_SingleCpu rs1en", false,-1);
        tracep->declBus(c+92,"ysyx22040413_SingleCpu rs1idx", false,-1, 4,0);
        tracep->declBit(c+93,"ysyx22040413_SingleCpu rs2en", false,-1);
        tracep->declBus(c+94,"ysyx22040413_SingleCpu rs2idx", false,-1, 4,0);
        tracep->declBit(c+95,"ysyx22040413_SingleCpu rdwen", false,-1);
        tracep->declBus(c+96,"ysyx22040413_SingleCpu rdwidx", false,-1, 4,0);
        tracep->declQuad(c+97,"ysyx22040413_SingleCpu alu_op1", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx22040413_SingleCpu alu_op2", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx22040413_SingleCpu pc_op1", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx22040413_SingleCpu pc_op2", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx22040413_SingleCpu alu_add", false,-1);
        tracep->declBit(c+168,"ysyx22040413_SingleCpu jalr", false,-1);
        tracep->declBit(c+4,"ysyx22040413_SingleCpu pc_update", false,-1);
        tracep->declQuad(c+5,"ysyx22040413_SingleCpu r_data1", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx22040413_SingleCpu r_data2", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx22040413_SingleCpu pc_up", false,-1);
        tracep->declQuad(c+105,"ysyx22040413_SingleCpu alu_res", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx22040413_SingleCpu pc_res", false,-1, 63,0);
        tracep->declBit(c+85,"ysyx22040413_SingleCpu ysyx22040413_IFU clk", false,-1);
        tracep->declBit(c+86,"ysyx22040413_SingleCpu ysyx22040413_IFU rst", false,-1);
        tracep->declBit(c+4,"ysyx22040413_SingleCpu ysyx22040413_IFU pc_update", false,-1);
        tracep->declQuad(c+107,"ysyx22040413_SingleCpu ysyx22040413_IFU pc_res", false,-1, 63,0);
        tracep->declBit(c+90,"ysyx22040413_SingleCpu ysyx22040413_IFU inst_ena", false,-1);
        tracep->declQuad(c+88,"ysyx22040413_SingleCpu ysyx22040413_IFU pc", false,-1, 63,0);
        tracep->declBit(c+86,"ysyx22040413_SingleCpu ysyx22040413_IDU rst", false,-1);
        tracep->declBus(c+87,"ysyx22040413_SingleCpu ysyx22040413_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+88,"ysyx22040413_SingleCpu ysyx22040413_IDU pc", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx22040413_SingleCpu ysyx22040413_IDU rs1data", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx22040413_SingleCpu ysyx22040413_IDU rs2data", false,-1, 63,0);
        tracep->declBit(c+91,"ysyx22040413_SingleCpu ysyx22040413_IDU rs1en", false,-1);
        tracep->declBit(c+93,"ysyx22040413_SingleCpu ysyx22040413_IDU rs2en", false,-1);
        tracep->declBit(c+95,"ysyx22040413_SingleCpu ysyx22040413_IDU rdwen", false,-1);
        tracep->declBus(c+92,"ysyx22040413_SingleCpu ysyx22040413_IDU rs1idx", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx22040413_SingleCpu ysyx22040413_IDU rs2idx", false,-1, 4,0);
        tracep->declBus(c+96,"ysyx22040413_SingleCpu ysyx22040413_IDU rdwidx", false,-1, 4,0);
        tracep->declQuad(c+97,"ysyx22040413_SingleCpu ysyx22040413_IDU alu_op1", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx22040413_SingleCpu ysyx22040413_IDU alu_op2", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx22040413_SingleCpu ysyx22040413_IDU pc_op1", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx22040413_SingleCpu ysyx22040413_IDU pc_op2", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx22040413_SingleCpu ysyx22040413_IDU pc_update", false,-1);
        tracep->declBit(c+168,"ysyx22040413_SingleCpu ysyx22040413_IDU jalr", false,-1);
        tracep->declBit(c+3,"ysyx22040413_SingleCpu ysyx22040413_IDU alu_add", false,-1);
        tracep->declBus(c+109,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode", false,-1, 6,0);
        tracep->declBus(c+96,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_rd", false,-1, 4,0);
        tracep->declBus(c+110,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3", false,-1, 2,0);
        tracep->declBus(c+92,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_rs1", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_rs2", false,-1, 4,0);
        tracep->declBus(c+111,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7", false,-1, 6,0);
        tracep->declBit(c+112,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_1_0_00", false,-1);
        tracep->declBit(c+113,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_1_0_01", false,-1);
        tracep->declBit(c+114,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_1_0_10", false,-1);
        tracep->declBit(c+115,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_1_0_11", false,-1);
        tracep->declBit(c+116,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_4_2_000", false,-1);
        tracep->declBit(c+117,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_4_2_001", false,-1);
        tracep->declBit(c+118,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_4_2_010", false,-1);
        tracep->declBit(c+119,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_4_2_011", false,-1);
        tracep->declBit(c+120,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_4_2_100", false,-1);
        tracep->declBit(c+121,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_4_2_101", false,-1);
        tracep->declBit(c+122,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_4_2_111", false,-1);
        tracep->declBit(c+123,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_6_5_00", false,-1);
        tracep->declBit(c+124,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_6_5_01", false,-1);
        tracep->declBit(c+125,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_6_5_10", false,-1);
        tracep->declBit(c+126,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_opcode_6_5_11", false,-1);
        tracep->declBit(c+127,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3_000", false,-1);
        tracep->declBit(c+128,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3_001", false,-1);
        tracep->declBit(c+129,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3_010", false,-1);
        tracep->declBit(c+130,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3_011", false,-1);
        tracep->declBit(c+131,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3_100", false,-1);
        tracep->declBit(c+132,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3_101", false,-1);
        tracep->declBit(c+133,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3_110", false,-1);
        tracep->declBit(c+134,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func3_111", false,-1);
        tracep->declBit(c+135,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0000000", false,-1);
        tracep->declBit(c+136,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0100000", false,-1);
        tracep->declBit(c+137,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0000001", false,-1);
        tracep->declBit(c+138,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0000101", false,-1);
        tracep->declBit(c+139,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0001001", false,-1);
        tracep->declBit(c+140,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0001101", false,-1);
        tracep->declBit(c+141,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0010101", false,-1);
        tracep->declBit(c+142,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0100001", false,-1);
        tracep->declBit(c+143,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0010001", false,-1);
        tracep->declBit(c+144,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0101101", false,-1);
        tracep->declBit(c+145,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1111111", false,-1);
        tracep->declBit(c+146,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0000100", false,-1);
        tracep->declBit(c+147,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0001000", false,-1);
        tracep->declBit(c+148,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0001100", false,-1);
        tracep->declBit(c+149,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0101100", false,-1);
        tracep->declBit(c+150,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0010000", false,-1);
        tracep->declBit(c+151,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_0010100", false,-1);
        tracep->declBit(c+152,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1100000", false,-1);
        tracep->declBit(c+153,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1110000", false,-1);
        tracep->declBit(c+154,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1010000", false,-1);
        tracep->declBit(c+155,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1101000", false,-1);
        tracep->declBit(c+156,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1111000", false,-1);
        tracep->declBit(c+157,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1010001", false,-1);
        tracep->declBit(c+158,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1110001", false,-1);
        tracep->declBit(c+159,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1100001", false,-1);
        tracep->declBit(c+160,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_func7_1101001", false,-1);
        tracep->declBit(c+7,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_op_imm", false,-1);
        tracep->declBit(c+161,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_store", false,-1);
        tracep->declBit(c+3,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_addi", false,-1);
        tracep->declBit(c+8,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_auipc", false,-1);
        tracep->declBit(c+9,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_lui", false,-1);
        tracep->declBit(c+10,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_jal", false,-1);
        tracep->declBit(c+11,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_jalr", false,-1);
        tracep->declBit(c+162,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_sd", false,-1);
        tracep->declBit(c+7,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_imm_sel_i", false,-1);
        tracep->declBit(c+12,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_imm_sel_u", false,-1);
        tracep->declBit(c+10,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_imm_sel_j", false,-1);
        tracep->declQuad(c+13,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_u_imm", false,-1, 63,0);
        tracep->declQuad(c+163,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_imm", false,-1, 63,0);
        tracep->declBit(c+19,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_need_imm", false,-1);
        tracep->declBit(c+165,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_need_rs1", false,-1);
        tracep->declBit(c+162,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_need_rs2", false,-1);
        tracep->declBit(c+20,"ysyx22040413_SingleCpu ysyx22040413_IDU rv64_need_rd", false,-1);
        tracep->declBit(c+86,"ysyx22040413_SingleCpu ysyx22040413_EXU rst", false,-1);
        tracep->declBit(c+3,"ysyx22040413_SingleCpu ysyx22040413_EXU alu_add", false,-1);
        tracep->declBit(c+168,"ysyx22040413_SingleCpu ysyx22040413_EXU jalr", false,-1);
        tracep->declBit(c+4,"ysyx22040413_SingleCpu ysyx22040413_EXU pc_update", false,-1);
        tracep->declQuad(c+97,"ysyx22040413_SingleCpu ysyx22040413_EXU alu_op1", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx22040413_SingleCpu ysyx22040413_EXU alu_op2", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx22040413_SingleCpu ysyx22040413_EXU pc_op1", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx22040413_SingleCpu ysyx22040413_EXU pc_op2", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx22040413_SingleCpu ysyx22040413_EXU pc_up", false,-1);
        tracep->declQuad(c+105,"ysyx22040413_SingleCpu ysyx22040413_EXU alu_res", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx22040413_SingleCpu ysyx22040413_EXU pc_res", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx22040413_SingleCpu ysyx22040413_EXU pc_res_1", false,-1, 63,0);
        tracep->declBit(c+85,"ysyx22040413_SingleCpu RegisterFile clk", false,-1);
        tracep->declBit(c+86,"ysyx22040413_SingleCpu RegisterFile rst", false,-1);
        tracep->declBus(c+96,"ysyx22040413_SingleCpu RegisterFile w_addr", false,-1, 4,0);
        tracep->declQuad(c+105,"ysyx22040413_SingleCpu RegisterFile w_data", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx22040413_SingleCpu RegisterFile w_ena", false,-1);
        tracep->declBus(c+92,"ysyx22040413_SingleCpu RegisterFile r_addr1", false,-1, 4,0);
        tracep->declQuad(c+5,"ysyx22040413_SingleCpu RegisterFile r_data1", false,-1, 63,0);
        tracep->declBit(c+91,"ysyx22040413_SingleCpu RegisterFile r_ena1", false,-1);
        tracep->declBus(c+94,"ysyx22040413_SingleCpu RegisterFile r_addr2", false,-1, 4,0);
        tracep->declQuad(c+103,"ysyx22040413_SingleCpu RegisterFile r_data2", false,-1, 63,0);
        tracep->declBit(c+93,"ysyx22040413_SingleCpu RegisterFile r_ena2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+21+i*2,"ysyx22040413_SingleCpu RegisterFile regs", true,(i+0), 63,0);}}
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
        tracep->fullQData(oldp+1,((((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
                                      & (((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm))) 
                                          & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm) 
                                         | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u))) 
                                            & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm))) 
                                     | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc))) 
                                        & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm)) 
                                    | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))))) 
                                   | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)))))),64);
        tracep->fullBit(oldp+3,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi));
        tracep->fullBit(oldp+4,(((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal) 
                                 | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))));
        tracep->fullQData(oldp+5,(vlSelf->ysyx22040413_SingleCpu__DOT__r_data1),64);
        tracep->fullBit(oldp+7,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm));
        tracep->fullBit(oldp+8,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc));
        tracep->fullBit(oldp+9,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui));
        tracep->fullBit(oldp+10,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal));
        tracep->fullBit(oldp+11,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr));
        tracep->fullBit(oldp+12,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u));
        tracep->fullQData(oldp+13,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm),64);
        tracep->fullQData(oldp+17,((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm))) 
                                     & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_i_imm) 
                                    | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u))) 
                                       & vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_u_imm))),64);
        tracep->fullBit(oldp+19,(((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_op_imm) 
                                  | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_imm_sel_u))));
        tracep->fullBit(oldp+20,((((((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                     | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc)) 
                                    | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui)) 
                                   | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal)) 
                                  | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))));
        tracep->fullQData(oldp+21,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[0]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[1]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[2]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[3]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[4]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[5]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[6]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[7]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[8]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[9]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[10]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[11]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[12]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[13]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[14]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[15]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[16]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[17]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[18]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[19]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[20]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[21]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[22]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[23]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[24]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[25]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[26]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[27]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[28]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[29]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[30]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs[31]),64);
        tracep->fullBit(oldp+85,(vlSelf->clk));
        tracep->fullBit(oldp+86,(vlSelf->rst));
        tracep->fullIData(oldp+87,(vlSelf->inst),32);
        tracep->fullQData(oldp+88,(vlSelf->pc),64);
        tracep->fullBit(oldp+90,(vlSelf->inst_ena));
        tracep->fullBit(oldp+91,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                      | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)) 
                                     | (IData)((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->inst)))))));
        tracep->fullCData(oldp+92,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+93,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)((0x3023U 
                                             == (0x707fU 
                                                 & vlSelf->inst))))));
        tracep->fullCData(oldp+94,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+95,(((~ (IData)(vlSelf->rst)) 
                                  & (((((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                        | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc)) 
                                       | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_lui)) 
                                      | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal)) 
                                     | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)))));
        tracep->fullCData(oldp+96,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+97,((((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
                                       & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1) 
                                      | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_auipc))) 
                                         & vlSelf->pc)) 
                                     | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                        & vlSelf->pc)) 
                                    | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                                       & vlSelf->pc))),64);
        tracep->fullQData(oldp+99,((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                     & vlSelf->pc) 
                                    | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                                       & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1))),64);
        tracep->fullQData(oldp+101,((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
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
        tracep->fullQData(oldp+103,(((IData)(vlSelf->rst)
                                      ? 0ULL : (((~ (IData)(vlSelf->rst)) 
                                                 & (IData)(
                                                           (0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst))))
                                                 ? 
                                                vlSelf->ysyx22040413_SingleCpu__DOT__RegisterFile__DOT__regs
                                                [(0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U))]
                                                 : 0ULL))),64);
        tracep->fullQData(oldp+105,(((((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi))) 
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
                                         | (4ULL & 
                                            (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))))) 
                                        | (4ULL & (- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))))))),64);
        tracep->fullQData(oldp+107,(((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__jalr)
                                      ? 0ULL : ((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
                                                  & vlSelf->pc) 
                                                 | ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr))) 
                                                    & vlSelf->ysyx22040413_SingleCpu__DOT__r_data1)) 
                                                + (
                                                   ((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
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
        tracep->fullCData(oldp+109,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+110,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+111,((vlSelf->inst >> 0x19U)),7);
        tracep->fullBit(oldp+112,((0U == (3U & vlSelf->inst))));
        tracep->fullBit(oldp+113,((1U == (3U & vlSelf->inst))));
        tracep->fullBit(oldp+114,((2U == (3U & vlSelf->inst))));
        tracep->fullBit(oldp+115,((3U == (3U & vlSelf->inst))));
        tracep->fullBit(oldp+116,((0U == (7U & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+117,((1U == (7U & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+118,((2U == (7U & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+119,((3U == (7U & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+120,((4U == (7U & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+121,((5U == (7U & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+122,((7U == (7U & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+123,((0U == (3U & (vlSelf->inst 
                                                >> 5U)))));
        tracep->fullBit(oldp+124,((1U == (3U & (vlSelf->inst 
                                                >> 5U)))));
        tracep->fullBit(oldp+125,((2U == (3U & (vlSelf->inst 
                                                >> 5U)))));
        tracep->fullBit(oldp+126,((3U == (3U & (vlSelf->inst 
                                                >> 5U)))));
        tracep->fullBit(oldp+127,((0U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+128,((1U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+129,((2U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+130,((3U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+131,((4U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+132,((5U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+133,((6U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+134,((7U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+135,((0U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+136,((0x20U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+137,((1U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+138,((5U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+139,((9U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+140,((0xdU == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->fullBit(oldp+141,((0x15U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+142,((0x21U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+143,((0x11U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+144,((0x2dU == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+145,((0x7fU == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+146,((4U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+147,((8U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+148,((0xcU == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->fullBit(oldp+149,((0x2cU == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+150,((0x10U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+151,((0x14U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+152,((0x60U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+153,((0x70U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+154,((0x50U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+155,((0x68U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+156,((0x78U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+157,((0x51U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+158,((0x71U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+159,((0x61U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+160,((0x69U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+161,((IData)((0x23U == 
                                           (0x7fU & vlSelf->inst)))));
        tracep->fullBit(oldp+162,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullQData(oldp+163,((((- (QData)((IData)(
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
        tracep->fullBit(oldp+165,((((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_addi) 
                                    | (IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jalr)) 
                                   | (IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->inst))))));
        tracep->fullQData(oldp+166,(((((- (QData)((IData)(vlSelf->ysyx22040413_SingleCpu__DOT__ysyx22040413_IDU__DOT__rv64_jal))) 
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
        tracep->fullBit(oldp+168,(vlSelf->ysyx22040413_SingleCpu__DOT__jalr));
    }
}
