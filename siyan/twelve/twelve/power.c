/*
 * power.c
 *
 * Created: 31-07-2024 10:01:54
 *  Author: Siyan Ananth A
 */ 

long int power(int a,int b){
	long int ans=1;
	while(b>0){
		ans*=a;
		b--;
	}
	return ans;
}