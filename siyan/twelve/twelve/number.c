/*
 * number.c
 *
 * Created: 31-07-2024 09:58:04
 *  Author: Siyan Ananth A
 */ 

long int power(int,int);

int number(int b,int c,int *arr){
	int count=0;
	for(int i=b;i>=0;i--){
		c--;
		if(arr[i]==1){
			long int a=power(2,c);
			count+=a;
		}
		
		if(c<=0){
			break;
		}
	}
	
	return count;
}