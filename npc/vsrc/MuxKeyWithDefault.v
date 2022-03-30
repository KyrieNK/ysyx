module MuxKeyWithDefault #(NR_KEY, KEY_LEN, DATA_LEN) (
    output reg [DATA_LEN-1:0] out,
    input [KEY_LEN-1:0] key,
    input [DATA_LEN-1:0] default_out,
    input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(.NR_KEY(NR_KEY), .KEY_LEN(KEY_LEN), .DATA_LEN(DATA_LEN), .HAS_DEFAULT(1)) i0 (out, key, default_out, lut);
endmodule
