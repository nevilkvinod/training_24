/*
 * min and max.c
 *
 * Created: 03-08-2024 15:05:37
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>

void rev(int *ptr,int size,int *min,int *max){

	*min=ptr[0];
	*max=ptr[0];

	for(int i=1;i<size;i++){

		if(ptr[i] < *min){
			*min=ptr[i];
		}
		if(ptr[i]> *max){
			*max=ptr[i];
		}

		
	}


}


int main(void)
{
    /* Replace with your application code */
    
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int s=sizeof(arr)/sizeof(arr[0]);
    int max;
    int min;


    rev(arr,s, &min, &max);
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    return 0;
}

