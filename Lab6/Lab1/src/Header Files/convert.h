/*
 * convert.h
 *
 * Created: 25.01.2017 21:31:58
 *  Author: Home
 */ 


#ifndef CONVERT_H_
#define CONVERT_H_

#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int getDuty(float highValue);
void reverse(char *str, int len);
int intToStr(int x, char str[], int d);
void ftoa(float n, char *res, int afterpoint);


#endif /* CONVERT_H_ */