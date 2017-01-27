
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif


#define D0 eS_PORTC0
#define D1 eS_PORTC1
#define D2 eS_PORTC2
#define D3 eS_PORTC3
#define D4 eS_PORTC4
#define D5 eS_PORTC5
#define D6 eS_PORTC6
#define D7 eS_PORTC7
#define RS eS_PORTD6
#define EN eS_PORTD7

#include <avr/io.h>
#include <util/delay.h>
#include "Header Files/lcd.h"
#include "Header Files/convert.h"
#include "Header Files/lm20.h"
#include "Header Files/l293.h"
#include "Header Files/uart_stdio.h"
#include "Header Files/heat.h"
//#include "Header Files/pmw.h"


int main(void)
{
	
	
	DDRD |= (1<<PD6);
	DDRD |= (1<<PD7);
	DDRC = 0xFF;
	uart_stdio_Init();
	Lcd8_Init();
	lm20Init();
	l293Init();
	//pwm_init();
	
	//pwm_init();
	
	char res[10]; 
	char getHighTemp[10], getLowTemp[10];
	
	printf("Enter lower temperature: ");
	for (int i = 0; i < 2; i++){
		getLowTemp[i] = getchar();
	}
	
	printf("\rEnter high temperature:  ");
	for (int i = 0; i < 2; i++){
		getHighTemp[i] = getchar();
	}
	
	int lowTemp = atoi(getLowTemp);
	int highTemp = atoi(getHighTemp);
	int duty;
	
	
	
	while(1)
	{
		
		float tempFromSensor = lm20GetTemp();
		ftoa(tempFromSensor, res, 2);
		Lcd8_Set_Cursor(1,1);
		Lcd8_Write_String(res);
		duty = getDuty(tempFromSensor);
		printf("\r%d", duty);
		if (tempFromSensor > highTemp) {
			DDRA &= (1 << PA1);
			moveForward(duty);
			
		} else {
			stop();
		}	
		
		if (tempFromSensor < lowTemp) {
			heatOn();
			stop();
		} else {
			heatOff();
		}
		_delay_ms(500);
	}
	return 0;
}

