/*
 * search.c
 *
 * Created: 31-07-2024 14:46:14
 *  Author: ADITHYA ANIL
 */ 
int search(int m[10],int n)
{
	int i;int c;
	for(i=0;i<10;i++)
	{
		if(m[i]==n)
		{
			c=i;
			break;
		}
		else
		c=-1;
	}
	return c;
}