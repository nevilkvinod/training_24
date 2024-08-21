/*
 * createconflict.c
 *
 * Created: 21-08-2024 11:45:18
 * Author : Siyan Ananth A
 */ 

#include <avr/io.h>

void addition(){
	int a=30,b=20,c;
	c=a+b;
	//c=a-b;
}

void sub(){
	int a=10;
	int b=20;
	int c=a-b;
}

void main()
{
    addition();
	sub();
}

