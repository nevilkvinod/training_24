//Write a program to toggle the nth bit of a given integer.
#include<stdio.h>
void main()
{
    int x,n,t;
    printf("enter the integer\n");
    scanf("%d",&x);
    printf("enter the value of n\n");
    scanf("%d",&n);
     t=x ^ (1<<(n-1));
<<<<<<< HEAD
     //printf("%d",t);
=======
     printf("%d",t);
>>>>>>> 00d9d78 (adding toogle)
     
}
