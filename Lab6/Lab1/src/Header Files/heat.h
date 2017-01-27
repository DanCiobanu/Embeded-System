/*
 * heat.h
 *
 * Created: 26.01.2017 21:12:47
 *  Author: Danny Ciobanu
 */ 


#ifndef HEAT_H_
#define HEAT_H_

void heatOn() {
	DDRA |= (1 << PA1);
	
}

void heatOff() {
	DDRA &= ~(1 << PA1);
}



#endif /* HEAT_H_ */