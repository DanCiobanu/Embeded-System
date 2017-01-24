/*
 * uart_stdio.h
 *
 * Created: 06.10.2016 22:36:00
 *  Author: Danny Ciobanu
 */ 


#ifndef UART_STDIO_H_
#define UART_STDIO_H_

#define F_CPU 1000000UL
#include <stdio.h>

void uart_stdio_Init(void);
int uart_PutChar(char c, FILE *stream);
char uart_ReadChar();

#endif /* UART_STDIO_H_ */