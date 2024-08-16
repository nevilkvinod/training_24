/*
 * adc.c
 *
 * Created: 30-07-2024 17:30:25
 *  Author: Siyan Ananth A
 */ 
#include <math.h>
float vref;
long int power (int , int);

int adc(float analog_voltage,int adc_resolution){
	int analog_digital;
	long int a=power(2,adc_resolution)-1;
	analog_digital = (analog_voltage/vref)*a;
	return analog_digital;
}