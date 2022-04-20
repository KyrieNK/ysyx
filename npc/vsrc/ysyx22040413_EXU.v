/* verilator lint_off UNUSED */
`include "ysyx22040413_para.v"

module ysyx22040413_EXU(
    input wire rst,

    input wire alu_add,
    input wire jalr,
    input wire pc_update,

    input wire [`RV64_DATA_WIDTH-1:0] alu_op1,
    input wire [`RV64_DATA_WIDTH-1:0] alu_op2,
    
    input wire [`RV64_DATA_WIDTH-1:0] pc_op1,
    input wire [`RV64_DATA_WIDTH-1:0] pc_op2,

    output wire pc_up,
    output wire [`RV64_DATA_WIDTH-1:0] alu_res,
    output wire [`RV64_DATA_WIDTH-1:0] pc_res
);

// wire [`RV64_DATA_WIDTH-1:0] adder_in1;
// wire [`RV64_DATA_WIDTH-1:0] adder_in2;
// wire [`RV64_DATA_WIDTH-1:0] adder_res;

// assign adder_in1 = ({`RV64_DATA_WIDTH{alu_add}} & alu_op1);
// assign adder_in2 = ({`RV64_DATA_WIDTH{alu_add}} & alu_op2);
// assign adder_res = adder_in1 + adder_in2;

// assign alu_res = ({`RV64_DATA_WIDTH{alu_add}} & adder_res);
assign alu_res = alu_op1 + alu_op2;

assign pc_up = pc_update;
wire [`RV64_DATA_WIDTH-1:0]  pc_res_1 = pc_op1 + pc_op2;
assign pc_res = (jalr == 1'b0) ? pc_res_1 : pc_res_1 & {`RV64_DATA_WIDTH{~1'b1}};

endmodule
