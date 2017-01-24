
#include "Header Files/l293.h"


void l293Init() {
	DDRC = 0xFF;
}

void moveForward() {
	PORTC = 0x65;
}

void moveBackward() {
	PORTC = 0xA6;
}

void moveLeft() {
	PORTC = 0xA5;
}

void moveRight() {
	PORTC = 0x66;
}

void stop() {
	PORTC = 0xE7;
}


