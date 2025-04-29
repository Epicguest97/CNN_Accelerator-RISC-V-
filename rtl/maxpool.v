`timescale 1ns / 1ps

module maxpool (
    input [15:0] feature_map_in [0:35],  // Flattened 6x6 input array (16-bit each)
    output reg [15:0] feature_map_out [0:8]  // Flattened 3x3 output array (16-bit each)
);

    integer i, j;
    reg [15:0] max_val;
    
    // Max pooling operation (2x2)
    always @(*) begin
        for (i = 0; i < 3; i = i + 1) begin
            for (j = 0; j < 3; j = j + 1) begin
                max_val = feature_map_in[(2*i)*6 + (2*j)];  // Initialize with the first element of the 2x2 block
                // Check the other 3 elements in the 2x2 block
                max_val = (feature_map_in[(2*i)*6 + (2*j+1)] > max_val) ? feature_map_in[(2*i)*6 + (2*j+1)] : max_val;
                max_val = (feature_map_in[(2*i+1)*6 + (2*j)] > max_val) ? feature_map_in[(2*i+1)*6 + (2*j)] : max_val;
                max_val = (feature_map_in[(2*i+1)*6 + (2*j+1)] > max_val) ? feature_map_in[(2*i+1)*6 + (2*j+1)] : max_val;
                feature_map_out[i*3 + j] = max_val;
            end
        end
    end

endmodule
