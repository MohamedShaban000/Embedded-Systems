#include "uart.h"

#define UART0DR *((vuint32*)((uint32*)0x101f1000))

void UART_send_string(uint8* ptr_Tx_Trans)
{
	while(*ptr_Tx_Trans != '\0')
	{
		UART0DR = (uint32)*ptr_Tx_Trans;
		ptr_Tx_Trans++;
	}

}