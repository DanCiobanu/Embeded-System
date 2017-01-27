/*
 * lm20.h
 *
 * Created: 07.11.2016 18:07:11
 *  Author: Danny Ciobanu
 */ 


#ifndef LM20_H_
#define LM20_H_

void lm20Init();
float lm20GetTemp();
int farenheitFromCelsius(int temp);

#endif /* LM20_H_ */