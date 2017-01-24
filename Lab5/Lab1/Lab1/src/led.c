/*
 * led.c
 *
 * Created: 23.01.2017 22:09:23
 *  Author: Home
 */ 
#include "Header Files/led.h"

void firtsLedOn() {
	
	PORTB |= (1 << PINB0);
}
void secondLedOn() {
	PORTB |= (1 << PINB1);
}
void thirdLedOn() {
	PORTB |= (1 << PINB2);
}

void toggle_led(uint32_t pin) {
	
	switch (pin)
	{
		case 0:
			firtsLedOn();
			_delay_ms(1000);
			PORTB = 0x00;
			break;
		case 1:
			secondLedOn();
			_delay_ms(1000);
			PORTB = 0x00;
			break;
		case 2:
			thirdLedOn();
			_delay_ms(1000);
			PORTB = 0x00;
			break;
		default:
			/* Your code here */
			break;
	}
	
	
}

