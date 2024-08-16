/*
 * CFile1.c
 *
 * Created: 01-08-2024 12:58:56
 *  Author: PARVEZ KHAN
 */ 


#include "adc.h"

extern float Vref;

uint16_t adc_convert(float analog_voltage, uint8_t n) 
{
	uint16_t digital_value = (analog_voltage * ((1 << n) - 1)) / Vref;
	return digital_value;
}
