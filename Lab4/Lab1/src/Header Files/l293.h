/*
 * ln293.h
 *
 * Created: 02.11.2016 09:35:26
 *  Author: Danny Ciobanu
 */ 


#ifndef L293_H_
#define L293_H_

#include <avr/io.h>

void l293Init();
void moveForward();
void moveBackward();
void moveLeft();
void moveRight();
void stop();

#endif /* LN293_H_ */