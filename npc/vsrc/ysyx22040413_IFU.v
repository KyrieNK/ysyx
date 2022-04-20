/* verilator lint_off UNUSED */

`include "ysyx22040413_para.v"

module ysyx22040413_IFU (
    input wire clk,
    input wire rst,
    input wire pc_update,
    input wire [`RV64_DATA_WIDTH-1:0] pc_res,

    output wire inst_ena,
    output reg  [`RV64_DATA_WIDTH-1:0] pc
);

always@(posedge clk ) begin
    if(rst == 1'b1) pc <= `reset_vector;
    else pc <= pc_update ? pc_res : pc + 4;
end

assign inst_ena  = ( rst == 1'b1 ) ? 0 : 1;

endmodule
