verilator --cc rtl/cnn_accelerator.v rtl/conv_layer.v rtl/relu.v rtl/maxpool.v --exe sim/sim_main.cpp
cd obj_dir
make -f Vcnn_accelerator.mk CXXFLAGS="-std=c++14" 
./Vcnn_accelerator  


verilator --cc rtl/cnn_accelerator.v rtl/conv_layer.v rtl/relu.v rtl/maxpool.v --exe sim/sim_main.cpp --trace
