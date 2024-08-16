/*
 * DAC.c
 *
 * Created: 31-07-2024 17:06:05
 *  Author: YADHU KRISHNA T
 */ 
long power(int,int);
float dac(int digival,int resol)
{
	extern int vref;
	long conv=(power(2,resol)-1);
	float analog=((float)digival * vref)/conv;
	return analog;
}
