
#include "Header Files/led.h"

void ledOff() {
	 PORTB &= ~(1<<PB0); //Turns OFF LED
}

void ledOn() {
	PORTB |= (1<<PB0);
}