/*
 * q3.c
 *
 * Created: 31-07-2024 09:13:19
 * Author : YADHU KRISHNA T
 */ 

#include <avr/io.h>

int search(int,int,int);
int main(void)
{
	int m;
	int n=5;
	int a[5]={2,5,3,1,7};
	m=search(a,n,3);
	return 0;
   
}

