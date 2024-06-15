#@copyright : Mohamed Shaban
CC =arm-none-eabi-
CFLAGS =-g -mcpu=arm926ej-s
INCS =-I .
LIBS =
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
Project_name =lab1

all: $(Project_name).bin
	@echo "-----------------Build is done-----------"

startup.o: startup.s
	$(CC)as.exe $(CFLAGS) startup.s -o startup.o

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T liker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@


clean_all:  
	rm *.o *.elf *.bin *.map	

clean:
	rm *.elf *.bin