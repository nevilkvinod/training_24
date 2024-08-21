/*
 * createconflict.c
 *
 * Created: 21-08-2024 11:45:18
 * Author : Siyan Ananth A
 */ 

#include <avr/io.h>

void add(int a,int b){
	int c=a+b;

}

void sub(int a,int b){
	int c=a-b;
}

void div(int a,int b){
	int c=a/b;
}

void mul(int a,int b){
	int c=a*b;
}

void main()
{
	int a=10,b=20;
    add(a,b);
	sub(a,b);
	div(a,b);
	mul(a,b);
	printf("%d",12);
	printf("HOI");
}

