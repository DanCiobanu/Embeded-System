/*
 * Lab1.c
 *
 * Created: 06.10.2016 22:30:40
 *  Author: Danny Ciobanu
 */ 

#include "Header Files/uart_stdio.h"
#include <util/delay.h>


int main(void) {
	
	uart_stdio_Init();
	//printf("System is on");
	
	while(1){
		_delay_ms(500);
		printf("Hello World!\r");
		
		
	}
	return 0;
}
