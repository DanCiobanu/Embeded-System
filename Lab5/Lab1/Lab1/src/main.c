/*
 * Lab1.c
 *
 * Created: 06.10.2016 22:30:40
 *  Author: Danny Ciobanu
 */ 

#include "Header Files/uart_stdio.h"
#include "Header Files/led.h"
#include "Header Files/timer.h"
#include "Header Files/initPort.h"
#include "Header Files/button.h"
#include <util/delay.h>


// global variable to count the number of overflows
volatile uint8_t tot_overflow = 0;
uint8_t count = 0;
	// initialize overflow counter variable
	//tot_overflow = 0;

// TIMER0 overflow interrupt service routine
// called whenever TCNT0 overflows
ISR(TIMER0_OVF_vect)
{
	// keep a track of number of overflows
	tot_overflow++;
	if (tot_overflow >= 12)  // NOTE: '>=' is used
	{
		if (isButtonPressed() == 1){
			toggle_led(count);
			count += 1;
			if (count > 2) {
				count = 0;
			}
			
		}
		tot_overflow = 0;
	}
	

}


int main(void)
{
	
	initPorts();
	// initialize timer
	timer0_init();
	
	while(1)
	{
	
	}
}