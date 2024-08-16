/*
 * binary.c
 *
 * Created: 31-07-2024 09:51:12
 *  Author: Siyan Ananth A
 */ 

int binary(int a,int *arr){
	int i=0;
	while(a>0){
		arr[i]=a%2;
		a=a/2;
		i++;
	}
}