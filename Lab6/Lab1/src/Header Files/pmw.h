/*
 * pmw.h
 *
 * Created: 26.01.2017 20:26:20
 *  Author: Danny Ciobanu
 */ 


#ifndef PMW_H_
#define PMW_H_

void pwm_0_set(int time_on){
	// set timer0 for fast pwm
	
	TCCR0 |= (1 << WGM00) | (1 << WGM01) | (1 << COM01) | (1 << CS02);
	DDRB |= (1 << PB3);
	
	OCR0 = time_on;
	
	// reset counter
	TCNT0 = 0;
}

#endif /* PMW_H_ */