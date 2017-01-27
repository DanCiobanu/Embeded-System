
#include "Header Files/adc.h"

void initADC(){
	ADMUX = (1<<REFS0);
	ADCSRA=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}

int readADC(int channel) {
	int adcData = 0;
	while (ADCSRA & 1 << ADSC); //wait until ADC is busy
	channel &= 0x07;
	ADMUX = (ADMUX & (0x07)) | channel; //apply the channel to the ADMUX with protection of configuration bits
	ADCSRA |= (1 << ADSC); //start conversion
	while (ADCSRA & (1 << ADSC)); //wait until conversion is complete
	adcData = ADC;
	return adcData;	
}

