/*
 * timer.c
 *
 * Created: 23.01.2017 22:00:37
 *  Author: Home
 */ 

#include "Header Files/timer.h"

// initialize timer, interrupt and variable
void timer0_init()
{
	// set up timer with prescaler = 256
	TCCR0 |= (1 << CS02);
	
	// initialize counter
	TCNT0 = 0;
	
	// enable overflow interrupt
	TIMSK |= (1 << TOIE0);
	
	// enable global interrupts
	sei();
	
}

