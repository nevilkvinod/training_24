/*
 * ArrayReverse.c
 *
 * Created: 03-08-2024 12:20:36
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>


#include<stdio.h>

void rev(int *ptr,int size){
	for(int i=size-1;i>=0;i--){
		printf(" %d",ptr[i]);	
	}
	


}


int main(void){

	
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	int s=sizeof(arr)/sizeof(arr[0]);
      rev(arr,s);

	return 0;

}
