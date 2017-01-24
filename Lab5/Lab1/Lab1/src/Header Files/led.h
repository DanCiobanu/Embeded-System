/*
 * led.h
 *
 * Created: 23.01.2017 22:09:10
 *  Author: Home
 */ 


#ifndef LED_H_
#define LED_H_
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


void firtsLedOn();
void secondLedOn();
void thirdLedOn();


void toggle_led(uint32_t pin);

#endif /* LED_H_ */