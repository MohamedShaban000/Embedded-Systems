#include "uart.h"

uint8 str_buf[100] = "My name is : Mohamed";

int main(void)
{
	UART_send_string(str_buf);
	return 0;
}