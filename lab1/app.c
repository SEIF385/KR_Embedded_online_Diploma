#include "uart.h"
unsigned char string[100]="Welcome seif in Embedded world";
unsigned char string0[100] ;
void main(void)
{
	Uart_send_string(string);
}