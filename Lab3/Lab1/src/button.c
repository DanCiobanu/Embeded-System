/*
 * button.c
 *
 * Created: 07.11.2016 18:08:03
 *  Author: Danny Ciobanu
 */ 


#include "Header Files/button.h"

void initButton1() {
	DDRC &= ~(1 << PORTC0) ;
}

void initButton2() {
	DDRC &= ~(1 << PORTC1);
}

int button1Pressed() {
	return PINC & (1 << PORTC0);
}

int button2Pressed() {
	return PINC & (1 << PORTC1);
}