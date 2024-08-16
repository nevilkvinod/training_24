/*
 * gcd.c
 *
 * Created: 03-08-2024 11:48:15
 *  Author: Siyan Ananth A
 */ 

int gcd(int a,int b){
	int c = a>b ? a : b;
	int product,temp=0;
	for(int i=0;i<c;i++){
		if(a%i==0 && b%i==0){
			product=i;
		}
	}
	
	return product;
}