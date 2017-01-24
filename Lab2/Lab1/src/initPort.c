
#include "Header Files/initPort.h"

void initPorts() {
	
	DDRB |= (1<<PB0); //Makes first pin of PORTC as Output
	
	DDRC &= ~(1<<PC0);//Makes firs pin of PORTD as Input
	
}