/*
 * Lab1.c
 *
 * Created: 06.10.2016 22:30:40
 *  Author: Danny Ciobanu
 */ 

#include "Header Files/uart_stdio.h"
#include "Header Files/l293.h"
#include <util/delay.h>


int main(void) {
	
	uart_stdio_Init();
	l293Init();
	char command;
	
	while(1){
		printf("Enter an action:  ");
		
		command = getchar();
		
		switch (command) {
			
			case 'w':
					moveForward();
					printf("The car is moving forward!\r");
					break;
			case 's':
					moveBackward();
					printf("The car is moving backward!\r");
					break;
			case 'a':
					moveLeft();
					printf("The car is moving left!\r");
					break;
			case 'd':
					moveRight();
					printf("The car is moving right!\r");
					break;
			case 'q':
					stop();
					printf("The car stopped!\r");
					break;
			default:
					printf("command not found");
					break;		 
		}
		
	}
	return 0;
}
