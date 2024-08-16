/*
 * dac.c
 *
 * Created: 30-07-2024 17:36:53
 *  Author: Siyan Ananth A
 */ 
#include<math.h>
float vref;
long int power (int , int);

float dac(float analog_digital,int dac_resolution){
	float digital_analog;
	long int b = power(2,dac_resolution)-1;
	digital_analog=(analog_digital/b)*vref;
	return digital_analog;	
}