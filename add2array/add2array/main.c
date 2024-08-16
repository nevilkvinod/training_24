/*
 * add2array.c
 *
 * Created: 05-08-2024 10:03:29
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>


#include <stdio.h>

void fun(int *ptr1, int *ptr2, int n1, int *ptr3) {
	for(int i = 0; i < n1; i++) {
		ptr3[i] = ptr1[i] + ptr2[i];
	}
}

int main(void) {
	int n1 = 5;
	
	int arr[] = {1, 2, 3, 4, 5};
	int brr[] = {6, 7, 8, 9, 10};
	int crr[n1];

	fun(arr, brr, n1, crr);

	printf("Resultant array: ");
	for(int i = 0; i < n1; i++) {
		printf("%d ", crr[i]);
	}
	printf("\n");

	return 0;
}


