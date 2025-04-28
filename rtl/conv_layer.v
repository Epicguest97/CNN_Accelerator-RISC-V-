module conv_layer(
    input [63:0] image,  // 8x8 grayscale image (64 bits)
    input [71:0] kernel, // 3x3 kernel (72 bits)
    output [35:0] feature_map // 6x6 output feature map (36 bits)
);

    integer i, j;
    reg [15:0] sum;
    reg [5:0] feature_map_reg [5:0];  // 6x6 feature map

    always @(*) begin
        // Apply convolution with no padding, stride of 1
        for (i = 0; i < 6; i = i + 1) begin
            for (j = 0; j < 6; j = j + 1) begin
                sum = 0;
                // Perform element-wise multiplication and sum
                sum = sum + image[(i+0)*8+j] * kernel[(0)*3+j];
                sum = sum + image[(i+1)*8+j] * kernel[(1)*3+j];
                sum = sum + image[(i+2)*8+j] * kernel[(2)*3+j];
                feature_map_reg[i][j] = sum;
            end
        end
    end

    assign feature_map = feature_map_reg;
endmodule
