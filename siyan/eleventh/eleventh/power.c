/*
 * power.c
 *
 * Created: 31-07-2024 09:16:41
 *  Author: Siyan Ananth A
 */ 

long int power(int a, int b){
	long int ans=a;
	while(b>1){
		ans*=a;
		b--;
	}
	
	return ans;
}