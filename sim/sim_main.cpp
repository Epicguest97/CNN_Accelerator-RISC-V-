#include "Vcnn_accelerator.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of the accelerator
    Vcnn_accelerator* top = new Vcnn_accelerator;
    
    // Initialize feature_map_in with zeros
    for (int i = 0; i < 36; i++) {
        top->feature_map_in[i] = 0;
    }
    
    // Initial evaluation
    top->eval();
    
    // Print initial outputs
    std::cout << "Initial outputs:" << std::endl;
    for (int i = 0; i < 9; i++) {
        std::cout << "feature_map_out[" << i << "]: 0x" 
                  << std::hex << top->feature_map_out[i] << std::endl;
    }
    
    // Test case 1: Fill feature_map_in with pattern
    std::cout << "\nTest case 1:" << std::endl;
    for (int i = 0; i < 36; i++) {
        top->feature_map_in[i] = 0xF0F0; // Pattern 1
    }
    top->eval();
    
    // Print outputs
    std::cout << "Outputs:" << std::endl;
    for (int i = 0; i < 9; i++) {
        std::cout << "feature_map_out[" << i << "]: 0x" 
                  << std::hex << top->feature_map_out[i] << std::endl;
    }
    
    // Test case 2: Another pattern
    std::cout << "\nTest case 2:" << std::endl;
    for (int i = 0; i < 36; i++) {
        top->feature_map_in[i] = (i % 2) ? 0xAAAA : 0x5555; // Alternating pattern
    }
    top->eval();
    
    // Print outputs
    std::cout << "Outputs:" << std::endl;
    for (int i = 0; i < 9; i++) {
        std::cout << "feature_map_out[" << i << "]: 0x" 
                  << std::hex << top->feature_map_out[i] << std::endl;
    }
    
    // Clean up
    top->final();
    delete top;
    return 0;
}