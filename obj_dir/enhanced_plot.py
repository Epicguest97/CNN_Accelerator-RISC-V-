#!/usr/bin/env python3
# filepath: /Users/mehul/Downloads/cnn_hardware/obj_dir/fixed_plot.py
from vcdvcd import VCDVCD
import matplotlib.pyplot as plt
import numpy as np
import sys
import matplotlib.colors as mcolors
from matplotlib.ticker import MaxNLocator
import os
from datetime import datetime

# Set plot style
plt.style.use('seaborn-v0_8-darkgrid')

def load_vcd(vcd_file_path):
    """Load a VCD file and return the VCDVCD object"""
    print(f"Loading VCD file: {vcd_file_path}")
    return VCDVCD(vcd_file_path)

def get_available_signals(vcd):
    """Get a list of available signals from the VCD object"""
    signals = []
    
    # Try different approaches to get signal names
    if hasattr(vcd, 'data') and isinstance(vcd.data, dict):
        signals = list(vcd.data.keys())
    elif hasattr(vcd, 'get_signals') and callable(vcd.get_signals):
        try:
            result = vcd.get_signals()
            if isinstance(result, dict):
                signals = list(result.keys())
            elif isinstance(result, list):
                signals = result
        except:
            pass
    elif hasattr(vcd, 'signals'):
        if isinstance(vcd.signals, dict):
            signals = list(vcd.signals.keys())
        elif isinstance(vcd.signals, list):
            signals = vcd.signals
    
    return signals

def extract_signal_data(vcd, signal_name):
    """Extract time and value data from a signal"""
    try:
        signal = vcd.data[signal_name]
        
        # Handle Signal objects with tv attribute
        if hasattr(signal, 'tv'):
            times = [t for t, v in signal.tv]
            values = [v for t, v in signal.tv]
        # Handle dictionary format
        elif isinstance(signal, dict):
            times = list(signal.keys())
            values = list(signal.values())
        else:
            print(f"Unsupported signal data type: {type(signal)}")
            return [], []
        
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
                
        return times, numeric_values
    except Exception as e:
        print(f"Error extracting data for signal {signal_name}: {e}")
        return [], []

# Define the function outside of any class or other function
def group_signals_by_hierarchy(signals):
    """Group signals by hierarchy for better organization"""
    groups = {}
    
    for signal in signals:
        parts = signal.split('.')
        if len(parts) > 1:
            # Use the first part as the group name
            group_name = parts[0]
            if group_name not in groups:
                groups[group_name] = []
            groups[group_name].append(signal)
        else:
            # For signals without hierarchy, put in 'Other' group
            if 'Other' not in groups:
                groups['Other'] = []
            groups['Other'].append(signal)
    
    return groups

def plot_vcd_signals_enhanced(vcd, signals_to_plot=None, max_signals_per_group=5,
                              output_file="enhanced_waveforms.png", show_plot=True):
    """Create enhanced plots of VCD signals with better organization and styling"""
    available_signals = get_available_signals(vcd)
    
    # Filter and prepare signals
    if not signals_to_plot or not set(signals_to_plot).intersection(set(available_signals)):
        signals_to_plot = available_signals[:20]  # Limit to first 20 if none specified
        print(f"Using {len(signals_to_plot)} default signals")
    else:
        # Filter to only include available signals
        signals_to_plot = [s for s in signals_to_plot if s in available_signals]
        print(f"Found {len(signals_to_plot)} of your specified signals")
    
    # Group signals by hierarchy - this is the key fix
    signal_groups = group_signals_by_hierarchy(signals_to_plot)
    
    # Get a range of colors for different signal groups
    colors = list(mcolors.TABLEAU_COLORS.values())
    
    # Create a figure for each group
    for group_idx, (group_name, group_signals) in enumerate(signal_groups.items()):
        # Limit signals per group
        if len(group_signals) > max_signals_per_group:
            print(f"Limiting group {group_name} to {max_signals_per_group} signals")
            group_signals = group_signals[:max_signals_per_group]
        
        # Create figure and axes
        fig, axes = plt.subplots(len(group_signals), 1, 
                                figsize=(12, 2.5 * len(group_signals)),
                                sharex=True)
        
        # Handle case with single signal
        if len(group_signals) == 1:
            axes = [axes]
        
        # Set the figure title
        fig.suptitle(f"Signal Group: {group_name}", fontsize=16, fontweight='bold')
        
        # Track the overall time range
        min_time = float('inf')
        max_time = 0
        
        # Plot each signal
        for i, signal_name in enumerate(group_signals):
            # Get signal color from the color cycle
            signal_color = colors[i % len(colors)]
            
            # Extract time and value data
            times, values = extract_signal_data(vcd, signal_name)
            
            if times and values:
                # Update time range
                min_time = min(min_time, min(times))
                max_time = max(max_time, max(times))
                
                # Plot the signal
                axes[i].step(times, values, where='post', color=signal_color, 
                          linewidth=1.5, alpha=0.8)
                
                # Add marker points at transitions
                axes[i].plot(times, values, 'o', markersize=3, color=signal_color, alpha=0.6)
                
                # Format y-axis to show integer ticks
                axes[i].yaxis.set_major_locator(MaxNLocator(integer=True))
                
                # Highlight zero level
                axes[i].axhline(y=0, color='gray', linestyle='--', alpha=0.3)
                
                # Show min/max values
                if values:
                    min_val = min(values)
                    max_val = max(values)
                    value_range = f"Range: [{min_val}, {max_val}]"
                    axes[i].text(0.98, 0.95, value_range,
                               transform=axes[i].transAxes,
                               horizontalalignment='right',
                               verticalalignment='top',
                               fontsize=8, bbox=dict(facecolor='white', alpha=0.7))
            else:
                axes[i].text(0.5, 0.5, "No data available", 
                          horizontalalignment='center', 
                          verticalalignment='center',
                          fontsize=12, color='red')
            
            # Clean up signal name for display
            display_name = signal_name
            if '.' in signal_name:
                # Remove group prefix for cleaner display
                display_name = '.'.join(signal_name.split('.')[1:])
            
            # Set titles and labels
            axes[i].set_title(display_name, fontsize=10, loc='left', fontweight='bold')
            axes[i].set_ylabel("Value", fontsize=9)
            axes[i].grid(True, alpha=0.3)
            
            # Only show x-label on the bottom plot
            if i == len(group_signals) - 1:
                axes[i].set_xlabel("Time", fontsize=10)
        
        # Set time range for all subplots
        if min_time != float('inf') and max_time > 0:
            for ax in axes:
                ax.set_xlim(min_time, max_time)
        
        # Adjust layout
        fig.tight_layout(rect=[0, 0, 1, 0.97])  # Leave room for suptitle
        
        # Save figure with group name in the filename
        group_filename = f"{os.path.splitext(output_file)[0]}_{group_name}.png"
        plt.savefig(group_filename, dpi=150)
        print(f"Saved {group_name} signals to {group_filename}")
    
    # Return the signal groups for use in HTML generation
    return signal_groups
def generate_html_report(vcd_file, signal_groups):
    """Generate an HTML report with all the plots"""
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    html_content = f"""<!DOCTYPE html>
<html>
<head>
    <title>VCD Signal Waveforms</title>
    <style>
        body {{
            font-family: 'Segoe UI', Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f8f9fa;
            color: #333;
        }}
        .header {{
            background-color: #2c3e50;
            color: white;
            padding: 20px;
            text-align: center;
        }}
        h1, h2 {{
            margin: 0;
        }}
        .meta-info {{
            background-color: #eaeaea;
            padding: 10px 20px;
            font-size: 0.9em;
            border-bottom: 1px solid #ddd;
        }}
        .container {{
            max-width: 1200px;
            margin: 0 auto;
            background-color: white;
            box-shadow: 0 0 10px rgba(0,0,0,0.1);
        }}
        .content {{
            padding: 20px;
        }}
        .group {{
            margin-bottom: 30px;
            border: 1px solid #ddd;
            border-radius: 8px;
            overflow: hidden;
        }}
        .group-header {{
            background-color: #4a69bd;
            color: white;
            padding: 10px 15px;
            font-weight: bold;
            cursor: pointer;
            display: flex;
            justify-content: space-between;
            align-items: center;
        }}
        .group-header:hover {{
            background-color: #1e3799;
        }}
        .group-content {{
            padding: 15px;
        }}
        .waveform-img {{
            width: 100%;
            max-width: 1100px;
            border: 1px solid #eee;
            border-radius: 4px;
        }}
        .footer {{
            margin-top: 30px;
            text-align: center;
            color: #7f8c8d;
            font-size: 0.8em;
            padding: 20px;
            border-top: 1px solid #eee;
        }}
        .collapsible {{
            background-color: #4a69bd;
            color: white;
            cursor: pointer;
            border: none;
            text-align: left;
            outline: none;
            font-size: 15px;
        }}
        .active, .collapsible:hover {{
            background-color: #1e3799;
        }}
        .collapsed {{
            display: none;
        }}
        .expand-icon {{
            font-size: 18px;
        }}
    </style>
    <script>
        function toggleGroup(groupId) {{
            var content = document.getElementById(groupId);
            var icon = document.getElementById(groupId + '-icon');
            if (content.style.display === "none") {{
                content.style.display = "block";
                icon.innerHTML = "−";
            }} else {{
                content.style.display = "none";
                icon.innerHTML = "+";
            }}
        }}
        
        // Expand all groups on page load
        window.onload = function() {{
            var groupContents = document.getElementsByClassName("group-content");
            for (var i = 0; i < groupContents.length; i++) {{
                groupContents[i].style.display = "block";
            }}
        }};
    </script>
</head>
<body>
    <div class="container">
        <div class="header">
            <h1>VCD Signal Waveform Visualization</h1>
        </div>
        <div class="meta-info">
            <p><strong>File:</strong> <code>{vcd_file}</code></p>
            <p><strong>Generated:</strong> {timestamp}</p>
        </div>
        <div class="content">
"""

    # Add each group's waveform
    for i, group_name in enumerate(signal_groups.keys()):
        group_id = f"group-{i}"
        img_filename = f"enhanced_waveforms_{group_name}.png"
        html_content += f"""
        <div class="group">
            <div class="group-header" onclick="toggleGroup('{group_id}')">
                <span>{group_name}</span>
                <span class="expand-icon" id="{group_id}-icon">−</span>
            </div>
            <div class="group-content" id="{group_id}">
                <img class="waveform-img" src="{img_filename}" alt="Waveform for {group_name}">
            </div>
        </div>
"""

    html_content += """
        </div>
        <div class="footer">
            <p>Generated by Enhanced VCD Plotter | Interactive HTML Report</p>
        </div>
    </div>
</body>
</html>
"""

    with open("waveform_report.html", "w") as f:
        f.write(html_content)
    
    print("Generated HTML report: waveform_report.html")


if __name__ == "__main__":
    # Default VCD file
    vcd_file = "waveform.vcd"
    
    # Check if a file was specified as command line argument
    if len(sys.argv) > 1:
        vcd_file = sys.argv[1]
    
    # Load VCD data
    try:
        vcd = load_vcd(vcd_file)
        
        # Define signals to plot
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
        
        # Create enhanced plots and get signal groups
        signal_groups = plot_vcd_signals_enhanced(vcd, signals, max_signals_per_group=10)
        
        # Generate HTML report
        generate_html_report(vcd_file, signal_groups)
        
        print("\nWaveform visualization complete!")
    except Exception as e:
        print(f"Error processing VCD file: {e}")
        import traceback
        traceback.print_exc()