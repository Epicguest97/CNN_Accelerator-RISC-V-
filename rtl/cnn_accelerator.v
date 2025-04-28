module cnn_accelerator(
    input [63:0] image,  // 8x8 grayscale image (64 bits)
    input [71:0] kernel, // 3x3 kernel (72 bits)
    output [8:0] output_map // 3x3 output feature map
);
    wire [35:0] conv_out;  // 6x6 feature map after convolution
    wire [35:0] relu_out;  // 6x6 feature map after ReLU
    wire [8:0] pool_out;   // 3x3 feature map after max-pooling

    // Instantiate the modules
    conv_layer conv_inst (
        .image(image),
        .kernel(kernel),
        .feature_map(conv_out)
    );

    relu relu_inst (
        .feature_map_in(conv_out),
        .feature_map_out(relu_out)
    );

    maxpool pool_inst (
        .feature_map_in(relu_out),
        .feature_map_out(pool_out)
    );

    assign output_map = pool_out;
endmodule
