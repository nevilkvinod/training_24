/*
 * adc.h
 *
 * Created: 01-08-2024 14:24:19
 *  Author: PARVEZ KHAN
 */ 


#ifndef ADC_H
#define ADC_H

#include <stdint.h>

uint16_t adc_convert(float analog_voltage, uint8_t n);

#endif
