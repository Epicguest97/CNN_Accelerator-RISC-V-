module relu(
    input [35:0] feature_map_in,  // 6x6 feature map input
    output [35:0] feature_map_out // 6x6 feature map output after ReLU
);
    genvar i;
    generate
        for (i = 0; i < 36; i = i + 1) begin : relu_logic
            assign feature_map_out[i] = (feature_map_in[i] < 0) ? 0 : feature_map_in[i];
        end
    endgenerate
endmodule
