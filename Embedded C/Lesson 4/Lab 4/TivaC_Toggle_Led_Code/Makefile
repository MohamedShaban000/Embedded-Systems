#@copyright : Mohamed Shaban
CC =arm-none-eabi-
CFLAGS =-gdwarf-2 -mcpu=cortex-m4
INCS =-I .
LIBS =
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
Project_name =TivaC_Toggle_Led

all: $(Project_name).bin
	@echo "-----------------all is done-----------"



%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	cp $(Project_name).elf $(Project_name).axf
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@


clean_all:  
	rm *.o *.elf *.bin *.map	

clean:
	rm *.elf *.bin