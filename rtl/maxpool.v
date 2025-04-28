module maxpool(
    input [35:0] feature_map_in,  // 6x6 feature map input
    output [8:0] feature_map_out  // 3x3 feature map output
);
    reg [3:0] max_val [8:0];
    integer i, j;
    
    always @(*) begin
        // Apply 2x2 max-pooling
        for (i = 0; i < 3; i = i + 1) begin
            for (j = 0; j < 3; j = j + 1) begin
                max_val[i*3+j] = max(feature_map_in[(2*i)*6+j], feature_map_in[(2*i+1)*6+j]);
            end
        end
    end
    
    function [3:0] max;
        input [3:0] a, b;
        begin
            max = (a > b) ? a : b;
        end
    endfunction
    
    assign feature_map_out = max_val;
endmodule
