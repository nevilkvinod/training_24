/*
 * CFile1.c
 *
 * Created: 31-07-2024 16:52:44
 *  Author: YADHU KRISHNA T
 */
long power(int a,int b)
{
     long p=1;
	 
	while(b!=0)
	{
		p=p*a;
		b--;
	}
	return p;
}