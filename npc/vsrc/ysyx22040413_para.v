`timescale 1ns / 1ps

`define reset_vector 64'h00000000_00000000
//`define reset_vector 64'h00000000_80000000
`define REG_BUS      63 : 0    
`define ZERO_WORD    64'h00000000_00000000
`define INST_ADD     8'h11

`define RV64_INST_WIDTH 32
`define RV64_RFIDX_WIDTH 5
`define RV64_RFDATA_WIDTH 64
`define RV64_DATA_WIDTH 64
`define RV64_XLEN 64
