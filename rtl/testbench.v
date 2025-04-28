module testbench;

    reg [63:0] image;
    reg [71:0] kernel;
    wire [8:0] output_map;
    
    // Instantiate the CNN Accelerator
    cnn_accelerator uut (
        .image(image),
        .kernel(kernel),
        .output_map(output_map)
    );

    // Generate random test cases
    initial begin
        // Initialize image and kernel
        image = 64'b0000000000000000000000000000000000000000000000000000000000000000; // Example 8x8 image
        kernel = 72'b000000000000000000000000000000000000000000000000000000000000000000000000; // Example 3x3 kernel
        
        // Test with some random values
        #10 image = 64'b1111000011110000111100001111000011110000111100001111000011110000; kernel = 72'b0000000100000001000000001000000100000001000000001000000100000001;
        #10 image = 64'b1010101010101010101010101010101010101010101010101010101010101010; kernel = 72'b0101010101010101010101010101010101010101010101010101010101010101;
        
        // Finish simulation
        #10 $finish;
    end

    // Monitor output
    initial begin
        $monitor("At time %t, output_map = %b", $time, output_map);
    end
endmodule
