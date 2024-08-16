/*
 * CFile1.c
 *
 * Created: 31-07-2024 10:20:32
 *  Author: YADHU KRISHNA T
 */ 
int power(int,int);
int func(int a,int p,int n)
{
	int b[32];
	int j=0;
	int dec=0;
	while(a>0)
	{
		b[j]=a%2;
		a=a/2;
		j++;
	}
	
	for(int i=0;i<n;i++)
	{
		dec=dec+(b[i]*(power(2,i)));
	}
	return dec;
	 
	
}