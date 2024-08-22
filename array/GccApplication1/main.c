/*
 * GccApplication1.c
 *
 * Created: 31-07-2024 15:24:08
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>
#include <stdio.h>

int array_list(int arr[], int n, int q) {
	int f = -1;
	
	for(int i = 0; i < q; i++){
		if(arr[i] == n){
			f = i;
			break;
		}
	}
	
	return f;
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 11, 13};
	int q = sizeof(arr)/sizeof(arr[0]);
	int n = 4;
	
	int ex = array_list(arr, n, q);
	
	if (ex != -1) {
		printf("index: %d\n",ex);
		} else {
		printf(" %d ", ex);
	}
printf(" Khan ");
	return 0;
}

