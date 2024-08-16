/*
 * twelve.c
 *
 * Created: 31-07-2024 09:44:37
 * Author : Siyan Ananth A
 */ 

#include <avr/io.h>

binary(int , int);
number(int ,int,int);

int main(void)
{
    int a=170,b=3,c=4;
	int arr[32];
	
	binary(a,arr);
	
	int num = number(b,c,arr);

}

