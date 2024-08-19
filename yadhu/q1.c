#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[]={98,23,89,101,43,1,76};
    int min=a[0];
    int max=a[0];
    for(int i=0;i<7;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("THE MAXIMUM NUMBER IS: %d\n",max);
    printf("THE MINIMUM NUMBER IS: %d\n",min);
    return 0;

}