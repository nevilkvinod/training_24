/*
 * GccApplication2.c
 *
 * Created: 03-08-2024 11:45:17
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>


void fun(int *ptr1,int *ptr2){
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	int a = 2;
	int b = 4;
	
	int* ptr1 = &a;
	int* ptr2 = &b;
	
	fun(ptr1, ptr2);
	
	return 0;
}


