/*
 * eleventh.c
 *
 * Created: 30-07-2024 17:27:33
 * Author : Siyan Ananth A
 */ 

#include <avr/io.h>
extern float vref=3.3;

int adc(float analog_voltage,int adc_resolution);
float dac(float a,int adc_resolution);

int main(void)
{
    /* Replace with your application code */
    float analog_voltage=2;
	int adc_resolution=14,dac_resolution=16;
	
	float a;
	a=adc(analog_voltage,adc_resolution);
	
	float b;
	b=dac(a,dac_resolution);
	
	float result=analog_voltage - b;
}

