/*
 * CFile1.c
 *
 * Created: 30-07-2024 16:18:54
 *  Author: YADHU KRISHNA T
 */ 
int shift(int a,int b)
{
	
	int c;
	c=a | (b<<8);
	return c;
}