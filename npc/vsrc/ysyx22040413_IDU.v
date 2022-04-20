/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */

`include "ysyx22040413_para.v"

module ysyx22040413_IDU(
    input wire rst,
    input wire [`RV64_INST_WIDTH-1:0] inst,
    input wire [`RV64_DATA_WIDTH-1:0] pc,
    input wire [`RV64_RFDATA_WIDTH-1:0] rs1data,
    input wire [`RV64_RFDATA_WIDTH-1:0] rs2data,

    output wire rs1en,
    output wire rs2en,
    output wire rdwen,
    output wire [`RV64_RFIDX_WIDTH-1:0] rs1idx,
    output wire [`RV64_RFIDX_WIDTH-1:0] rs2idx,
    output wire [`RV64_RFIDX_WIDTH-1:0] rdwidx,

    output wire [`RV64_DATA_WIDTH-1:0] alu_op1,
    output wire [`RV64_DATA_WIDTH-1:0] alu_op2,
    
    output wire [`RV64_DATA_WIDTH-1:0] pc_op1,
    output wire [`RV64_DATA_WIDTH-1:0] pc_op2,

    output wire pc_update,
    output wire jalr,
    output wire alu_add
);

wire [6:0] rv64_opcode = inst[6:0];
wire [4:0] rv64_rd     = inst[11:7];
wire [2:0] rv64_func3  = inst[14:12];
wire [4:0] rv64_rs1    = inst[19:15];
wire [4:0] rv64_rs2    = inst[24:20];
wire [6:0] rv64_func7  = inst[31:25];

wire rv64_opcode_1_0_00  = (rv64_opcode[1:0] == 2'b00);
wire rv64_opcode_1_0_01  = (rv64_opcode[1:0] == 2'b01);
wire rv64_opcode_1_0_10  = (rv64_opcode[1:0] == 2'b10);
wire rv64_opcode_1_0_11  = (rv64_opcode[1:0] == 2'b11);

wire rv64_opcode_4_2_000 = (rv64_opcode[4:2] == 3'b000);
wire rv64_opcode_4_2_001 = (rv64_opcode[4:2] == 3'b001);
wire rv64_opcode_4_2_010 = (rv64_opcode[4:2] == 3'b010);
wire rv64_opcode_4_2_011 = (rv64_opcode[4:2] == 3'b011);
wire rv64_opcode_4_2_100 = (rv64_opcode[4:2] == 3'b100);
wire rv64_opcode_4_2_101 = (rv64_opcode[4:2] == 3'b101);
wire rv64_opcode_4_2_111 = (rv64_opcode[4:2] == 3'b111);

wire rv64_opcode_6_5_00  = (rv64_opcode[6:5] == 2'b00);
wire rv64_opcode_6_5_01  = (rv64_opcode[6:5] == 2'b01);
wire rv64_opcode_6_5_10  = (rv64_opcode[6:5] == 2'b10);
wire rv64_opcode_6_5_11  = (rv64_opcode[6:5] == 2'b11);

wire rv64_func3_000 = (rv64_func3 == 3'b000);
wire rv64_func3_001 = (rv64_func3 == 3'b001);
wire rv64_func3_010 = (rv64_func3 == 3'b010);
wire rv64_func3_011 = (rv64_func3 == 3'b011);
wire rv64_func3_100 = (rv64_func3 == 3'b100);
wire rv64_func3_101 = (rv64_func3 == 3'b101);
wire rv64_func3_110 = (rv64_func3 == 3'b110);
wire rv64_func3_111 = (rv64_func3 == 3'b111);

wire rv64_func7_0000000 = (rv64_func7 == 7'b0000000);
wire rv64_func7_0100000 = (rv64_func7 == 7'b0100000);
wire rv64_func7_0000001 = (rv64_func7 == 7'b0000001);
wire rv64_func7_0000101 = (rv64_func7 == 7'b0000101);
wire rv64_func7_0001001 = (rv64_func7 == 7'b0001001);
wire rv64_func7_0001101 = (rv64_func7 == 7'b0001101);
wire rv64_func7_0010101 = (rv64_func7 == 7'b0010101);
wire rv64_func7_0100001 = (rv64_func7 == 7'b0100001);
wire rv64_func7_0010001 = (rv64_func7 == 7'b0010001);
wire rv64_func7_0101101 = (rv64_func7 == 7'b0101101);
wire rv64_func7_1111111 = (rv64_func7 == 7'b1111111);
wire rv64_func7_0000100 = (rv64_func7 == 7'b0000100); 
wire rv64_func7_0001000 = (rv64_func7 == 7'b0001000); 
wire rv64_func7_0001100 = (rv64_func7 == 7'b0001100); 
wire rv64_func7_0101100 = (rv64_func7 == 7'b0101100); 
wire rv64_func7_0010000 = (rv64_func7 == 7'b0010000); 
wire rv64_func7_0010100 = (rv64_func7 == 7'b0010100); 
wire rv64_func7_1100000 = (rv64_func7 == 7'b1100000); 
wire rv64_func7_1110000 = (rv64_func7 == 7'b1110000); 
wire rv64_func7_1010000 = (rv64_func7 == 7'b1010000); 
wire rv64_func7_1101000 = (rv64_func7 == 7'b1101000); 
wire rv64_func7_1111000 = (rv64_func7 == 7'b1111000); 
wire rv64_func7_1010001 = (rv64_func7 == 7'b1010001);  
wire rv64_func7_1110001 = (rv64_func7 == 7'b1110001);  
wire rv64_func7_1100001 = (rv64_func7 == 7'b1100001);  
wire rv64_func7_1101001 = (rv64_func7 == 7'b1101001);  

wire rv64_op_imm = rv64_opcode_6_5_00 & rv64_opcode_4_2_100;
wire rv64_store = rv64_opcode_6_5_01 & rv64_opcode_4_2_000 & rv64_opcode_1_0_11; 

//I-type Instruction
wire rv64_addi = rv64_op_imm & rv64_func3_000;

//U-type Instruction
wire rv64_auipc = rv64_opcode_6_5_00 & rv64_opcode_4_2_101 & rv64_opcode_1_0_11; 
wire rv64_lui   = rv64_opcode_6_5_01 & rv64_opcode_4_2_101 & rv64_opcode_1_0_11; 

//J-type Instruction
wire rv64_jal  =  rv64_opcode_6_5_11 & rv64_opcode_4_2_011 & rv64_opcode_1_0_11; 
wire rv64_jalr =  rv64_opcode_6_5_11 & rv64_opcode_4_2_001 & rv64_opcode_1_0_11; 

//S-type Instuction
wire rv64_sd = rv64_store & rv64_func3_011;

wire rv64_imm_sel_i = rv64_op_imm;
wire rv64_imm_sel_u = rv64_auipc | rv64_lui;
wire rv64_imm_sel_j = rv64_jal;

wire [`RV64_XLEN-1:0] rv64_i_imm = {
                                     {52{inst[31]}}
                                   , inst[31:20]
                                   };

wire [`RV64_XLEN-1:0] rv64_u_imm = {
                                     {40{inst[31]}}
                                   , inst[31:20]
                                   , 12'b0
                                   };

wire [`RV64_XLEN-1:0] rv64_j_imm = {
                                     {43{inst[31]}} 
                                   , inst[31] 
                                   , inst[19:12]
                                   , inst[20] 
                                   , inst[30:21] 
                                   , 1'b0
                                   };


wire [`RV64_XLEN-1:0] rv64_imm = 
                            ({`RV64_XLEN{rv64_imm_sel_i}} & rv64_i_imm)
                          | ({`RV64_XLEN{rv64_imm_sel_u}} & rv64_u_imm)
                          ;

wire rv64_need_imm = 
                    rv64_imm_sel_i
                  | rv64_imm_sel_u
                  ;

// wire [`RV64_XLEN-1:0] rv64_pc_imm = ({`RV64_XLEN{rv64_imm_sel_u}} & rv64_u_imm);

assign pc_update = rv64_jal | rv64_jalr;

wire rv64_need_rs1 = rv64_addi | rv64_jalr | rv64_sd; 
wire rv64_need_rs2 = rv64_sd;
wire rv64_need_rd  = rv64_addi | rv64_auipc | rv64_lui | rv64_jal | rv64_jalr;

assign alu_op1 =  
                ({`RV64_XLEN{rv64_addi     }} & rs1data)
              | ({`RV64_XLEN{rv64_auipc    }} & pc)
              | ({`RV64_XLEN{rv64_jal      }} & pc)
              | ({`RV64_XLEN{rv64_jalr     }} & pc)
              ;

assign alu_op2 =  
                ({`RV64_XLEN{rv64_addi     }} & rv64_imm)
              | ({`RV64_XLEN{rv64_auipc    }} & rv64_u_imm)
              | ({`RV64_XLEN{rv64_jal      }} & 4)
              | ({`RV64_XLEN{rv64_jalr     }} & 4)
              ;

assign pc_op1 = ({`RV64_XLEN{rv64_jal  }} & pc) 
              | ({`RV64_XLEN{rv64_jalr }} & rs1data) 
              ;
assign pc_op2 = ({`RV64_XLEN{rv64_jal  }} & rv64_j_imm) 
              | ({`RV64_XLEN{rv64_jalr }} & rv64_i_imm) 
              ;

assign rs1en = (rst == 1'b1) ? 1'b0 : rv64_need_rs1;
assign rs2en = (rst == 1'b1) ? 1'b0 : rv64_need_rs2;
assign rdwen = (rst == 1'b1) ? 1'b0 : rv64_need_rd;

assign rs1idx = rv64_rs1;
assign rs2idx = rv64_rs2;
assign rdwidx = rv64_rd;

assign alu_add = rv64_addi;

endmodule
