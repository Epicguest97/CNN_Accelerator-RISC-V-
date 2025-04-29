verilator --cc /Users/mehul/Downloads/cnn_hardware/sim/top_tb.v \
    --exe /Users/mehul/Downloads/cnn_hardware/sim/sim_main.cpp \
    --trace \
    -o sim.out \
    --top-module top_tb \
    -I/Users/mehul/Downloads/cnn_hardware/rtl \
    --timing \
    --Mdir /Users/mehul/Downloads/cnn_hardware/obj_dir \
    -LDFLAGS "-lstdc++ -lm -lpthread" \
    /Users/mehul/Downloads/cnn_hardware/rtl/cnn_accelerator.v /Users/mehul/Downloads/cnn_hardware/rtl/conv_layer.v /Users/mehul/Downloads/cnn_hardware/rtl/relu.v /Users/mehul/Downloads/cnn_hardware/rtl/maxpool.v

make -C /Users/mehul/Downloads/cnn_hardware/obj_dir -f Vtop_tb.mk Vtop_tb
/Users/mehul/Downloads/cnn_hardware/obj_dir/sim.out
