/* verilator lint_off UNUSED */

`include "ysyx22040413_para.v"

module ysyx22040413_IFU (
    input wire clk,
    input wire rst,

    output wire           inst_ena,
    output reg  [`REG_BUS]pc
);

always@(posedge clk) begin
    if(rst) pc <= `reset_vector;
    else pc <= pc + 4;
end

assign inst_ena  = ( rst == 1'b1 ) ? 0 : 1;

endmodule
