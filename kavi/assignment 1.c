#include <stdio.h>
int main()
{ 
    printf("Enter the number of elements to be stored"); 
    int n;
    scanf("%d",&n);
    int a[n]; 
    int i=0;
    int temp;
    for(int k=0;k<n;k++)
    { 
        printf("Enter the %dth element",k);
        scanf("%d",&a[k]);
    } 
    int *ptr;
    ptr=a;  
    int *edr; 
    edr=a[n-1];
    int x; 
    x=sizeof(a)/sizeof(a[0]);  
    while(i<x) 
    {
        temp=*(ptr+i); 
        *(ptr+i)=*(edr-(n-x)); 
        *(edr-(n-x))=temp; 
        i++; 
        x--;
    }
    for(int j=0;j<n;j++)
    { 
        printf("The %dth element is",&a[j]);
    } 
    return 0;   
} 
