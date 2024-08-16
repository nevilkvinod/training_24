/*
 * CFile1.c
 *
 * Created: 31-07-2024 09:22:11
 *  Author: YADHU KRISHNA T
 */ 
int search(int* arr,int n,int k)
{
	int flag =0;
	for(int i=0;i<n;i++)
	{
		if(*(arr+i)==k)
		{
		flag=1;
		return i;
		break;
		}}
	if(flag==0)
	return -1;
}