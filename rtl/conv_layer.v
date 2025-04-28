module conv_layer (
    input [15:0] feature_map_in [0:35],  // Flattened 6x6 input array (16-bit each)
    output reg [15:0] feature_map_out [0:35] // Flattened 6x6 output array (16-bit each)
);

    integer i, j, m, n;
    reg [15:0] kernel [0:8];  // 3x3 kernel (flattened)
    reg [15:0] sum;
    
    initial begin
        // Define a simple 3x3 kernel (e.g., all ones for simplicity)
        kernel[0] = 1; kernel[1] = 1; kernel[2] = 1;
        kernel[3] = 1; kernel[4] = 1; kernel[5] = 1;
        kernel[6] = 1; kernel[7] = 1; kernel[8] = 1;
    end
    
    // Convolution operation (no padding, stride = 1)
    always @(*) begin
        for (i = 0; i < 6; i = i + 1) begin
            for (j = 0; j < 6; j = j + 1) begin
                sum = 0;
                // Apply kernel over the 3x3 window
                for (m = 0; m < 3; m = m + 1) begin
                    for (n = 0; n < 3; n = n + 1) begin
                        if ((i+m < 6) && (j+n < 6)) begin
                            sum = sum + feature_map_in[(i+m)*6 + (j+n)] * kernel[m*3 + n];
                        end
                    end
                end
                feature_map_out[i*6 + j] = sum;
            end
        end
    end
endmodule
