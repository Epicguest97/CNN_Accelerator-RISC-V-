module relu (
    input signed [15:0] feature_map_in [0:35],  // Flattened 6x6 input array (16-bit each)
    output reg [15:0] feature_map_out [0:35] // Flattened 6x6 output array (16-bit each)
);

    genvar i;
    generate
        for (i = 0; i < 36; i = i + 1) begin : relu_logic
            assign feature_map_out[i] = (feature_map_in[i] < 0) ? 16'b0 : feature_map_in[i];
        end
    endgenerate

endmodule
