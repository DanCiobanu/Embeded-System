
#include "Header Files/l293.h"
#include "Header Files/pmw.h"

void l293Init() {
	DDRB = 0xFF;
}

void moveForward(int speed) {
	//PORTB = 0x65;
	
	//PORTB |= (1 << 0);
	//PORTB |= (1 << 6);
	PORTB &= ~(1 << 1);
	PORTB &= ~(1 << 7);
	pwm_0_set(speed);
}

void stop() {
	pwm_0_set(0);
}


