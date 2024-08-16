/*
 * fifteen.c
 *
 * Created: 31-07-2024 10:56:05
 * Author : Siyan Ananth A
 */ 

#include <avr/io.h>
int sort(int);
int max_min=1;

int main(void)
{
    int arr[5]={1,2,97,4,5};
	sort(arr);
	int b = max_min ? arr[4] : arr[0];
}

