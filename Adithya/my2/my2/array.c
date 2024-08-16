/*
 * array.c
 *
 * Created: 31-07-2024 12:06:13
 *  Author: ADITHYA ANIL
 */ 
extern int max_min;
int maxmin(int m[])
{
	if (max_min== 1)
	{
		int i;
		int max=m[0];
		for(i=0;i<10;i++){
			if (m[i]>max)
			max=m[i];
		}
		return max;
	}
	else
	{
		int i;
		int min=m[0];
		for(i=0;i<10;i++){
			if (m[i]<min)
			min=m[i];
		}
		return min;
	}
}