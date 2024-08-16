/*
 * mentorassg1.c
 *
 * Created: 05-08-2024 09:27:03
 * Author : ADITHYA ANIL
 */ 

#include <avr/io.h>
extern int mode;
findMode(int , int );
int main(void)
{
    int a[]={4,3,2,4,5,4,1,2};
	findMode(a , 8 );
	return 0;
		
}

