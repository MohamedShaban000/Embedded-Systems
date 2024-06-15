

#include "Platform_Data_Types.h"


void Default_handler(void);
void reset_handler(void);
void NMI_handler(void) __attribute__((weak, alias ("Default_handler")));;
void H_fault_handler(void) __attribute__((weak, alias ("Default_handler")));;
void MM_fault_handler(void) __attribute__((weak, alias ("Default_handler")));;
void Bus_fault_handler(void) __attribute__((weak, alias ("Default_handler")));;
void Usage_fault_handler(void) __attribute__((weak, alias ("Default_handler")));;


extern int main(void);

extern uint32 STACK_TOP;
extern uint32 _E_text;
extern uint32 _S_data;
extern uint32 _E_data;
extern uint32 _S_bss;
extern uint32 _E_bss;

uint32 vectors[] __attribute__((section(".vectors"))) ={
	(uint32) &STACK_TOP,
	(uint32) &reset_handler,
	(uint32) &NMI_handler,
	(uint32) &H_fault_handler,
	(uint32) &MM_fault_handler,
	(uint32) &Bus_fault_handler,
	(uint32) &Usage_fault_handler
};


void Default_handler(void)
{
	reset_handler();
}
void reset_handler(void)
{
	uint32 data_size= (uint8* )&_E_data - (uint8* )&_S_data;
	uint8* src_ptr= (uint8* )&_E_data;
	uint8* dist_ptr= (uint8* )&_S_data;
	uint8 i=0;
	for(i=0;i<data_size;i++)
	{
		*((uint8 *)dist_ptr++) = *((uint8* )src_ptr); 
	}

	uint32 bss_size= (uint8* )&_E_bss - (uint8* )&_S_bss;    
	dist_ptr= (uint8* )&_S_bss;
	for(i=0;i<bss_size;i++)
	{
		*((uint8 *)dist_ptr++) = (uint8)0; 
	}

	main();
}






