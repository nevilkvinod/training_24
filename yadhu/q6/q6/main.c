/*
 * q6.c
 *
 * Created: 31-07-2024 16:33:23
 * Author : YADHU KRISHNA T
 */ 

#include <avr/io.h>
long power(int,int);
extern int vref=5;
int adc(float,int);
float dac(int,int);
int main(void)
{
	float a[10]={0.6,0.8,1.2,1.5,1.8,1.9,2.7,3.1,3.22,3.3};
	int digitalval;
	 float analogval;
	 float error;
	for(int i=0;i<10;i++)
	{
    digitalval= adc(a[i],14);
	analogval= dac(digitalval,14);
	error= analogval-a[i];
	}
	return 0;
}

