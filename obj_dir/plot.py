from vcdvcd import VCDVCD
import matplotlib.pyplot as plt
import numpy as np
import sys

def debug_vcd(vcd_file_path):
    """Print debug information about a VCD file"""
    print(f"Loading VCD file: {vcd_file_path}")
    vcd = VCDVCD(vcd_file_path)
    
    print("\nVCD object attributes:", dir(vcd))
    
    # Check if signals is a list or dictionary
    if hasattr(vcd, 'signals'):
        if isinstance(vcd.signals, list):
            print("\nSignals is a LIST with", len(vcd.signals), "items")
            if vcd.signals:
                print("First signal:", vcd.signals[0])
        elif isinstance(vcd.signals, dict):
            print("\nSignals is a DICT with", len(vcd.signals), "items")
            print("First 5 signal names:", list(vcd.signals.keys())[:5])
        else:
            print("\nSignals is neither a list nor a dict, it's a", type(vcd.signals))
    else:
        print("\nNo 'signals' attribute found!")
    
    # Check for data attribute
    if hasattr(vcd, 'data'):
        if isinstance(vcd.data, dict):
            print("\nData is a DICT with", len(vcd.data), "items")
            print("First 5 signal names in data:", list(vcd.data.keys())[:5])
            
            # Examine the first signal data
            if vcd.data:
                first_signal = list(vcd.data.keys())[0]
                print(f"\nExamining data for signal: {first_signal}")
                signal_data = vcd.data[first_signal]
                if isinstance(signal_data, dict):
                    print("Signal data is a dictionary with", len(signal_data), "time points")
                    times = list(signal_data.keys())
                    values = list(signal_data.values())
                    print(f"Time range: {min(times) if times else 'N/A'} to {max(times) if times else 'N/A'}")
                    print(f"First 3 time-value pairs: {list(signal_data.items())[:3]}")
                else:
                    print("Signal data is not a dictionary, it's a", type(signal_data))
    
    # Check for get_signals method
    if hasattr(vcd, 'get_signals') and callable(vcd.get_signals):
        try:
            signals = vcd.get_signals()
            print("\nCalled get_signals() method, received:", type(signals))
            print("Number of signals:", len(signals) if hasattr(signals, '__len__') else "N/A")
        except Exception as e:
            print("\nError calling get_signals():", e)
    
    return vcd

def get_available_signals(vcd):
    """Get a list of available signals from the VCD object"""
    # Try different approaches to get signal names
    signals = []
    
    # Approach 1: Check the data attribute
    if hasattr(vcd, 'data') and isinstance(vcd.data, dict):
        signals = list(vcd.data.keys())
    
    # Approach 2: Try the get_signals method
    elif hasattr(vcd, 'get_signals') and callable(vcd.get_signals):
        try:
            result = vcd.get_signals()
            if isinstance(result, dict):
                signals = list(result.keys())
            elif isinstance(result, list):
                signals = result
        except:
            pass
    
    # Approach 3: Try the signals attribute directly
    elif hasattr(vcd, 'signals'):
        if isinstance(vcd.signals, dict):
            signals = list(vcd.signals.keys())
        elif isinstance(vcd.signals, list):
            signals = vcd.signals
    
    return signals

def get_signal_tv_pairs(vcd, signal_name):
    """Get time-value pairs for a signal using multiple approaches"""
    # Find the signal in the data
    if hasattr(vcd, 'data') and signal_name in vcd.data:
        signal_data = vcd.data[signal_name]
        
        # If signal_data is a Signal object with tv attribute
        if hasattr(signal_data, 'tv'):
            # Convert Signal.tv to a dictionary
            return {time: value for time, value in signal_data.tv}
        
        # If signal_data is already a dict
        elif isinstance(signal_data, dict):
            return signal_data
    
    # Try direct access from the signals list
    signals = vcd.get_signals() if hasattr(vcd, 'get_signals') else []
    for signal in signals:
        if signal == signal_name and hasattr(signal, 'tv'):
            return {time: value for time, value in signal.tv}
    
    # If nothing worked, check if we can find the signal by name
    for available_signal in get_available_signals(vcd):
        if available_signal == signal_name:
            signal = vcd.signals[available_signal]
            if hasattr(signal, 'tv'):
                return {time: value for time, value in signal.tv}
    
    return {}  # Return empty dict if signal data not found

def plot_vcd_signals(vcd, signals_to_plot=None, max_signals=20):
    """Plot signals from a VCD object"""
    # Get available signals if none specified
    available_signals = get_available_signals(vcd)
    print(f"\nFound {len(available_signals)} available signals")
    
    if not signals_to_plot or not set(signals_to_plot).intersection(set(available_signals)):
        signals_to_plot = available_signals[:max_signals]
        print(f"Will plot first {len(signals_to_plot)} signals")
    else:
        # Filter to only include available signals
        signals_to_plot = [s for s in signals_to_plot if s in available_signals]
        if len(signals_to_plot) > max_signals:
            signals_to_plot = signals_to_plot[:max_signals]
    
    # Create a figure with subplots for each signal
    fig, axes = plt.subplots(len(signals_to_plot), 1, figsize=(12, 3 * len(signals_to_plot)))
    
    # Handle case where there's only one signal
    if len(signals_to_plot) == 1:
        axes = [axes]
    
    # Iterate over each signal and plot
    for i, signal_name in enumerate(signals_to_plot):
        try:
            # Get the signal object
            signal = vcd.data[signal_name]
            
            # Extract time-value pairs - handle both Signal objects and dictionaries
            if hasattr(signal, 'tv'):
                # It's a Signal object with tv attribute (list of tuples)
                times = [t for t, v in signal.tv]
                values = [v for t, v in signal.tv]
            elif isinstance(signal, dict):
                # It's a dictionary
                times = list(signal.keys())
                values = list(signal.values())
            else:
                print(f"Unsupported signal data type for {signal_name}: {type(signal)}")
                continue
            
            # Convert values to integers where possible
            numeric_values = []
            for v in values:
                try:
                    if isinstance(v, str) and v.startswith("0x"):
                        numeric_values.append(int(v, 16))
                    elif isinstance(v, str) and (v.lower() == 'x' or v.lower() == 'z'):
                        numeric_values.append(0)  # Use 0 for undefined values
                    else:
                        numeric_values.append(int(v))
                except (ValueError, TypeError):
                    numeric_values.append(0)
            
            # Plot the data
            if times and numeric_values:
                axes[i].step(times, numeric_values, where='post')
            
        except Exception as e:
            print(f"Error plotting signal {signal_name}: {e}")
            axes[i].text(0.5, 0.5, f"Error: {e}", 
                        horizontalalignment='center', verticalalignment='center')
        
        # Set titles and formatting
        axes[i].set_title(signal_name)
        axes[i].set_xlabel("Time")
        axes[i].set_ylabel("Value")
        axes[i].grid(True)
    
    # Adjust layout and save
    plt.tight_layout()
    plt.savefig("waveform_plot.png")
    plt.show()

if __name__ == "__main__":
    # Default VCD file
    vcd_file = "waveform.vcd"
    
    # Check if a file was specified as command line argument
    if len(sys.argv) > 1:
        vcd_file = sys.argv[1]
    
    # First, run debug to understand the file structure
    vcd = debug_vcd(vcd_file)
    
    # Define signals to plot - these are from the original request
    signals = [
        "TOP.feature_map_out[0][15:0]", "TOP.feature_map_out[1][15:0]", "TOP.feature_map_out[2][15:0]", 
        "TOP.feature_map_out[3][15:0]", "TOP.feature_map_out[4][15:0]", "TOP.feature_map_out[5][15:0]", 
        "TOP.feature_map_out[6][15:0]", "TOP.feature_map_out[7][15:0]", "TOP.feature_map_out[8][15:0]",
        "TOP.cnn_accelerator.feature_map_out[0][15:0]", "TOP.cnn_accelerator.feature_map_out[1][15:0]",
        "TOP.cnn_accelerator.feature_map_out[2][15:0]", "TOP.cnn_accelerator.feature_map_out[3][15:0]",
        "TOP.cnn_accelerator.feature_map_out[4][15:0]", "TOP.cnn_accelerator.feature_map_out[5][15:0]",
        "TOP.cnn_accelerator.feature_map_out[6][15:0]", "TOP.cnn_accelerator.feature_map_out[7][15:0]",
        "TOP.cnn_accelerator.feature_map_out[8][15:0]", "TOP.cnn_accelerator.conv_inst.i[31:0]",
        "TOP.cnn_accelerator.conv_inst.j[31:0]", "TOP.cnn_accelerator.conv_inst.m[31:0]", 
        "TOP.cnn_accelerator.conv_inst.n[31:0]", "TOP.cnn_accelerator.conv_inst.kernel[0][15:0]", 
        "TOP.cnn_accelerator.conv_inst.kernel[1][15:0]", "TOP.cnn_accelerator.conv_inst.kernel[2][15:0]",
        "TOP.cnn_accelerator.conv_inst.kernel[3][15:0]", "TOP.cnn_accelerator.conv_inst.kernel[4][15:0]",
        "TOP.cnn_accelerator.conv_inst.kernel[5][15:0]", "TOP.cnn_accelerator.conv_inst.kernel[6][15:0]",
        "TOP.cnn_accelerator.conv_inst.kernel[7][15:0]", "TOP.cnn_accelerator.conv_inst.kernel[8][15:0]",
        "TOP.cnn_accelerator.conv_inst.sum[15:0]", "TOP.cnn_accelerator.maxpool_inst.feature_map_out[0][15:0]",
        "TOP.cnn_accelerator.maxpool_inst.feature_map_out[1][15:0]", "TOP.cnn_accelerator.maxpool_inst.feature_map_out[2][15:0]",
        "TOP.cnn_accelerator.maxpool_inst.feature_map_out[3][15:0]", "TOP.cnn_accelerator.maxpool_inst.feature_map_out[4][15:0]",
        "TOP.cnn_accelerator.maxpool_inst.feature_map_out[5][15:0]", "TOP.cnn_accelerator.maxpool_inst.feature_map_out[6][15:0]",
        "TOP.cnn_accelerator.maxpool_inst.feature_map_out[7][15:0]", "TOP.cnn_accelerator.maxpool_inst.feature_map_out[8][15:0]",
        "TOP.cnn_accelerator.maxpool_inst.i[31:0]", "TOP.cnn_accelerator.maxpool_inst.j[31:0]", "TOP.cnn_accelerator.maxpool_inst.max_val[15:0]"
    ]
    
    # Plot the signals
    plot_vcd_signals(vcd, signals)