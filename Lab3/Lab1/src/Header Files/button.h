/*
 * button.h
 *
 * Created: 07.11.2016 18:07:32
 *  Author: Danny Ciobanu
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include <stdio.h>
#include <avr/io.h>

void initButton1();
void initButton2();

int button1Pressed();
int button2Pressed();


#endif /* BUTTON_H_ */