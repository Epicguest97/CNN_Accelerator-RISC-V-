# Verilated -*- Makefile -*- 
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable

default: Vcnn_accelerator

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /opt/homebrew/Cellar/verilator/5.036/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vcnn_accelerator
# Module prefix (from --prefix)
VM_MODPREFIX = Vcnn_accelerator
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
    -std=c++14

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
    sim_main \
    

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
    .. \
    ../sim \

### Verbose Output (for debugging)
VERBOSE = 1

### Default rules...
# Include list of all generated classes
include Vcnn_accelerator_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Object files (ensure they are compiled)
sim_main.o: sim/sim_main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

# 


### Linking rule...
# Ensure the linking process includes all necessary objects
Vcnn_accelerator: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS) sim_main.o 
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@
