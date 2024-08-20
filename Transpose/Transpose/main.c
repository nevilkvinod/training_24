/*
 * Transpose.c
 *
 * Created: 05-08-2024 11:45:35
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>
#include <stdio.h>

void fun(int **ptr1, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d ", ptr1[j][i]);
		}
		
	}
}

int main(void) {
	int arr[3][3] = {{1, 2, 3},
	                 {4, 5, 6},
	                 {7, 8, 9}};
	int *ptrs[3];


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		ptrs[i] = arr[i];
	}

	fun(ptrs, 3, 3);

	return 0;
}

