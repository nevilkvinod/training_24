/*
 * sixteen.c
 *
 * Created: 31-07-2024 12:12:20
 * Author : Siyan Ananth A
 */ 

#include <avr/io.h>


int main(void)
{
    uint8_t a= 59;
	uint8_t b= 43;
	uint16_t result=(b<<8)|a;
}

