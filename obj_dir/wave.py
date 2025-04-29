from vcdvcd import VCDVCD

# Load the VCD file
vcd = VCDVCD("waveform.vcd")

# Print all available signal names and their paths
for signal in vcd.signals:
    print(signal)
