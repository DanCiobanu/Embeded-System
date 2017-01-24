/*
 * Lab1.c
 *
 * Created: 06.10.2016 22:30:40
 *  Author: Danny Ciobanu
 */ 

#include "Header Files/uart_stdio.h"
#include "Header Files/button.h"
#include "Header Files/initPort.h"
#include "Header Files/led.h"
#include <util/delay.h>


int main(void) {
	
	uart_stdio_Init();
	initPorts();

	while(1){
		if (isButtonPressed() == 1) {
			ledOn();
			_delay_ms(500);
		} else {
			ledOff();
		}	
	}
	return 0;
}
