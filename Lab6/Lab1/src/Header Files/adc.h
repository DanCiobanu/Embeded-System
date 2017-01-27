/*
 * adc.h
 *
 * Created: 07.11.2016 18:06:37
 *  Author: Danny Ciobanu
 */ 


#ifndef ADC_H_
#define ADC_H_

#include <avr/io.h>

void initADC();
int readADC(int channel);

#endif /* ADC_H_ */