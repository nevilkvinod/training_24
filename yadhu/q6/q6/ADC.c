/*
 * CFile1.c
 *
 * Created: 31-07-2024 16:36:00
 *  Author: YADHU KRISHNA T
 */ 
long power(int,int);

int adc(float analog,int resol)
{
		extern int vref;
	int digital;
	long conv=(power(2,resol))-1;
	digital=(analog*conv)/vref;
	return digital;
}