/*
 * modefind.c
 *
 * Created: 03-08-2024 10:33:53
 * Author : Siyan Ananth A
 */ 

#include <avr/io.h>
int mode;
int mode_find(int *,int);

int main(void)
{
    /* Replace with your application code */
    int arr[11]={1,1,2,2,3,4,3,3,5,3,6};
	int *ptr=arr;
	int length = sizeof(arr)/sizeof(arr[0]);
	mode=mode_find(ptr,length);
}

