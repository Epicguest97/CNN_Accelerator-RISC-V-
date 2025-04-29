`timescale 1ns / 1ps

module top_tb;

  reg clk = 0;
  reg resetn = 0;

  // Clock generation
  always #5 clk = ~clk;

  // Accelerator I/O
  wire [15:0] feature_map_in [0:35];
  // Suppress unused signal warning
  /* verilator lint_off UNUSEDSIGNAL */
  wire [15:0] feature_map_out [0:8];
  /* verilator lint_on UNUSEDSIGNAL */
  wire start;
  wire done;

  // Simple memory as shared RAM
  reg [31:0] memory [0:255];

  initial begin
    $readmemh("memory.hex", memory);  // RISC-V program memory
  end

  // Instantiate your accelerator
  cnn_accelerator uut (
    .clk(clk),
    .reset(~resetn),
    .start(start),
    .done(done),
    .feature_map_in(feature_map_in),
    .feature_map_out(feature_map_out)
  );

  // Assign some dummy logic to connect accelerator inputs from memory
  // Simulating memory-mapped interface (fake version)
  // Suppress width truncation warnings
  /* verilator lint_off WIDTHTRUNC */
  generate
    genvar i;
    for (i = 0; i < 36; i = i + 1) begin
      assign feature_map_in[i] = memory[i][15:0]; // Explicitly truncate to 16 bits
    end
  endgenerate

  assign start = memory[100][0]; // Explicitly truncate to 1 bit
  /* verilator lint_on WIDTHTRUNC */

  always @(posedge clk) begin
    if (done)
      memory[101] <= 1;  // Write done flag
  end

  // Simulation setup
  initial begin
    $dumpfile("waveform.vcd");
    $dumpvars(0, top_tb);

    // Reset pulse
    resetn = 0;
    #20;
    resetn = 1;

    // Run simulation
    #1000;
    $display("Simulation done");
    $finish;
  end

endmodule
