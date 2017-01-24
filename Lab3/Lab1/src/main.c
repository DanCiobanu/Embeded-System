/*
 * Lab1.c
 *
 * Created: 06.10.2016 22:30:40
 *  Author: Danny Ciobanu
 */ 

#include "Header Files/uart_stdio.h"
#include "Header Files/lm20.h"
#include "Header Files/button.h"
#include <avr/io.h>
#include <util/delay.h>


int main(void) {
	
	initButton1();
	initButton2();
	lm20Init();
	uart_stdio_Init();
	
	while(1){
		
		_delay_ms(500);
		
		if (button1Pressed()) {
			printf("Celsius: %d \r", lm20GetTemp());
		}
		
		if (button2Pressed()) {
			printf("Fahrenheit: %d \r", farenheitFromCelsius(lm20GetTemp()));
		}
		
	}
	return 0;
}
