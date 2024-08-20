#include <stdio.h> 
int reverse(int *x,int *ptr,int *edr);
int main()
{ 
    printf("Enter the number of elements to be stored"); 
    int n;
    scanf("%d",&n);
    int a[n]; 
    for(int k=0;k<n;k++)
    { 
        printf("Enter the %dth element",k);
        scanf("%d",&a[k]);
    } 
    int s; 
    s=sizeof(a)/sizeof(a[0]);  
    reverse(&s,a,&a[n-1]); 
    for(int j=0;j<n;j++)
    { 
        printf("%d",a[j]);
    }  
    return 0;
} 
int reverse(int *x,int *ptr,int *edr)
{  
    int f=*x;
    int temp;
    int i=0; 
    while(i<((*x)/2)+1)
    {
        temp=*(ptr+i); 
        *(ptr+i)=*(edr-(f-(*x)));
        *(edr-(f-(*x)))=temp;
        i++; 
        *(x--);
    }
}
