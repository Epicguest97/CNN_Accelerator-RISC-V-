module cnn_accelerator (
    input [15:0] feature_map_in [0:35],  // Input 6x6 array (flattened)
    output [15:0] feature_map_out [0:8]  // Output 3x3 array (flattened)
);

    wire [15:0] conv_out [0:35];   // Output of the convolution layer
    wire [15:0] relu_out [0:35];   // Output of the ReLU layer

    // Instantiate the Convolution Layer
    conv_layer conv_inst (
        .feature_map_in(feature_map_in),
        .feature_map_out(conv_out)
    );

    // Instantiate the ReLU Layer
    relu relu_inst (
        .feature_map_in(conv_out),
        .feature_map_out(relu_out)
    );

    // Instantiate the MaxPool Layer
    maxpool maxpool_inst (
        .feature_map_in(relu_out),
        .feature_map_out(feature_map_out)
    );

endmodule
