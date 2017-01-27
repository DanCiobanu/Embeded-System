/*
 * lm20.c
 *
 * Created: 07.11.2016 18:07:55
 *  Author: Danny Ciobanu
 */ 

#include "Header Files/lm20.h"
#include "Header Files/adc.h"
#include "Header Files/uart_stdio.h"
#include <avr/io.h>


void lm20Init() {
	initADC();
}

float lm20GetTemp() {
	return  (float)(382 - readADC(3)) / 2.4;
	
}

