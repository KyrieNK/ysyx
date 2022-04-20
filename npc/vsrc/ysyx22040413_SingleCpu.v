/* verilator lint_off UNUSED */

`include "ysyx22040413_para.v"

module ysyx22040413_SingleCpu(
    input wire          clk,
    input wire          rst,
    input wire [31 : 0] inst,

    output wire [63 : 0]pc,
    output wire         inst_ena
);

// id_stage
// id_stage -> regfile
wire rs1en;
wire [4 : 0] rs1idx;
wire rs2en;
wire [4 : 0] rs2idx;
wire rdwen;
wire [4 : 0] rdwidx;

// id_stage -> exe_stage
wire [`RV64_DATA_WIDTH-1:0] alu_op1;
wire [`RV64_DATA_WIDTH-1:0] alu_op2;
wire [`RV64_DATA_WIDTH-1:0] pc_op1;
wire [`RV64_DATA_WIDTH-1:0] pc_op2;
wire alu_add;
wire jalr;
wire pc_update;

// regfile -> id_stage
wire [`RV64_RFDATA_WIDTH-1:0] r_data1;
wire [`RV64_RFDATA_WIDTH-1:0] r_data2;

// exe_stage
// exe_stage -> others
wire pc_up;
// exe_stage -> regfile
wire [`RV64_DATA_WIDTH-1:0] alu_res;
wire [`RV64_DATA_WIDTH-1:0] pc_res;

ysyx22040413_IFU ysyx22040413_IFU(
    .clk(clk),
    .rst(rst),

    .pc_update(pc_up),
    .pc_res(pc_res),

    .inst_ena(inst_ena),
    .pc(pc)
);

ysyx22040413_IDU ysyx22040413_IDU(
    .rst(rst),
    .inst(inst),
    .pc(pc),
    
    .rs1data(r_data1),
    .rs2data(r_data2),

    .rs1en(rs1en),
    .rs2en(rs2en),
    .rdwen(rdwen),

    .rs1idx(rs1idx),
    .rs2idx(rs2idx),
    .rdwidx(rdwidx),

    .alu_op1(alu_op1),
    .alu_op2(alu_op2),
    .pc_op1(pc_op1),
    .pc_op2(pc_op2),

    .pc_update(pc_update),
    .jalr(jalr),
    .alu_add(alu_add)
);

ysyx22040413_EXU ysyx22040413_EXU(
    .rst(rst),

    .jalr(jalr),
    .pc_update(pc_update),

    .alu_op1(alu_op1),
    .alu_op2(alu_op2),

    .pc_op1(pc_op1),
    .pc_op2(pc_op2),

    .alu_add(alu_add),

    .alu_res(alu_res),
    .pc_res(pc_res),
    .pc_up(pc_up)
);

RegisterFile RegisterFile(
    .clk(clk),
    .rst(rst),

    .w_addr(rdwidx),
    .w_data(alu_res),
    .w_ena(rdwen),
    
    .r_addr1(rs1idx),
    .r_data1(r_data1),
    .r_ena1(rs1en),
    .r_addr2(rs2idx),
    .r_data2(r_data2),
    .r_ena2(rs2en)
);

endmodule
