/*
 * button.c
 *
 * Created: 23.01.2017 22:20:32
 *  Author: Home
 */ 



#include "Header Files/button.h"

int isButtonPressed() {
	if ((PINC & (1<<PC0)) == 1) {
		return 1;
	}
	return 0;
}
