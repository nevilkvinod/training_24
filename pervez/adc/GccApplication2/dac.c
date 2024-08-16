/*
 * CFile1.c
 *
 * Created: 01-08-2024 13:51:44
 *  Author: PARVEZ KHAN
 */ 
#include "dac.h"

extern float Vref;

float dac_convert(uint16_t digital_value, uint8_t n) 
{
	float analog_voltage = (digital_value * Vref) / ((1 << n) - 1);
	return analog_voltage;
}
