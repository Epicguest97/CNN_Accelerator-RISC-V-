`timescale 1ns / 1ps

module cnn_accelerator (
    input clk,
    input reset,
    input start,
    output reg done,
    input [15:0] feature_map_in [0:35],
    output [15:0] feature_map_out [0:8]
);

    wire [15:0] conv_out [0:35];
    wire [15:0] relu_out [0:35];

    // Simple FSM to mimic processing delay
    reg processing;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            done <= 0;
            processing <= 0;
        end else begin
            if (start && !processing) begin
                processing <= 1;
                done <= 0;
            end else if (processing) begin
                processing <= 0;
                done <= 1;
            end else begin
                done <= 0;
            end
        end
    end

    // Instantiate the layers
    conv_layer conv_inst (
        .feature_map_in(feature_map_in),
        .feature_map_out(conv_out)
    );

    relu relu_inst (
        .feature_map_in(conv_out),
        .feature_map_out(relu_out)
    );

    maxpool maxpool_inst (
        .feature_map_in(relu_out),
        .feature_map_out(feature_map_out)
    );

endmodule
