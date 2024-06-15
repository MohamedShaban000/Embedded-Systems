/*
	ARM_cortex-m3 linker_script
	Made by: Mohamed Shaban
*/


MEMORY
{
	FLASH (RX) : ORIGIN = 0x08000000 , LENGTH = 128K
	SRAM (RWX) : ORIGIN = 0x20000000 , LENGTH = 20K
}

SECTIONS
{
	.text : {
			*(.vectors*)
			*(.text*)
			*(.rodata)
			_E_text = .;
	}> FLASH

	.data : {
			_S_data = .;	
			*(.data)
			_E_data = .;
	}> SRAM AT> FLASH

	.bss : {
			_S_bss = .;
			*(.bss)
			_E_bss = .;
			. = . + 1000 ;
			. = ALIGN(4);

			STACK_TOP = .; 
	}> SRAM

}