/*
 * initPort.c
 *
 * Created: 23.01.2017 22:19:19
 *  Author: Home
 */ 

#include "Header Files/initPort.h"

void initPorts() {
	
	DDRB|= 0xFF;
	
	DDRC &= ~(1<<PC0);//Makes firs pin of PORTD as Input
		
}
