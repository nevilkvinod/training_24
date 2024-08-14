/*
 * GccApplication1.c
 *
 * Created: 01-08-2024 11:43:44
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>
#include <stdio.h>
#include "config.h"


int find_max_min(int arr[], int n) {
	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}


	return max_min ? max : min;
}

int main(void){

	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);

	int result = find_max_min(arr, n);

	printf("%d\n", result);

}
