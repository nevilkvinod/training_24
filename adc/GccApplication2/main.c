/*
 * GccApplication2.c
 *
 * Created: 01-08-2024 12:57:53
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>
#include <stdio.h>
#include "adc.h"
#include "dac.h"

float Vref = 3.3;

int main(void) {
	float analog[10] = {0.5, 1.2, 2.8, 3.1, 1.9, 0.7, 2.3, 1.5, 0.9, 3.0};
	uint16_t digital[10];
	float converted_analog[10];
	uint8_t an = 14; 
	uint8_t dn = 16;
	float error[10];

	for (int i = 0; i < 10; i++) {
		digital[i] = adc_convert(analog[i], an);
	}

	for (int i = 0; i < 10; i++) 
	{
		converted_analog[i] = dac_convert(digital[i], dn);
		
		error[i] = analog[i] - converted_analog[i];
	}

	return 0;
}


