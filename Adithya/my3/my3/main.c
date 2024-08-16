/*
 * my3.c
 *
 * Created: 31-07-2024 14:42:24
 * Author : ADITHYA ANIL
 */ 

#include <avr/io.h>
int search(int ,int );
int main(void)
{  
	int p[]={5,6,4,7,8,54,1,12,36,11};
	int b=1;
    int a=search(p,b);
	return a;
}

