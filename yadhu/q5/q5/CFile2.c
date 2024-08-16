/*
 * CFile2.c
 *
 * Created: 31-07-2024 16:19:56
 *  Author: YADHU KRISHNA T
 */ 
int power(int a,int b)
{
	if(b!=0)
	return (a*power(a,b-1));
	else
	return 1;
}