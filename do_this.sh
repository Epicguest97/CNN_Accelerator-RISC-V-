verilator --cc rtl/cnn_accelerator.v rtl/conv_layer.v rtl/relu.v rtl/maxpool.v --exe sim/sim_main.cpp
cd obj_dir
make -j -f Vcnn_accelerator.mk    
./Vcnn_accelerator  