all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc -I./vsrc --trace --exe  --build ./csrc/main.cpp ./vsrc/ysyx22040413_SingleCpu.v
	obj_dir/Vysyx22040413_SingleCpu

wave:
	gtkwave obj_dir/top.vcd

clean:
	rm -r obj_dir
include ../Makefile
