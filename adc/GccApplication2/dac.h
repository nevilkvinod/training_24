/*
 * dac.h
 *
 * Created: 01-08-2024 14:24:35
 *  Author: PARVEZ KHAN
 */ 


#ifndef DAC_H
#define DAC_H

#include <stdint.h>

float dac_convert(uint16_t digital_value, uint8_t n);

#endif
