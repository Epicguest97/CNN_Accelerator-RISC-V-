RISCV_PREFIX=riscv32-unknown-elf
CC=$(RISCV_PREFIX)-gcc
OBJCOPY=$(RISCV_PREFIX)-objcopy

all: main.hex

main.elf: main.c
	$(CC) -Os -nostartfiles -march=rv32i -mabi=ilp32 -Tlinker.ld -o $@ $^

main.hex: main.elf
	$(OBJCOPY) -O verilog --only-section .text $< $@
	hexdump -v -e '1/4 "%08x\n"' $< > ../sim/memory.hex

clean:
	rm -f main.elf main.hex
