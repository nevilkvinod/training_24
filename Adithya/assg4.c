/*Take an array of sorted integers and a number as input. Perform binary search for the number in the array. If the number is below all numbers in the array output -1. If the number is larger than all members of the array output largest integer. Else output the nearest member index*/

#include <stdio.h>

int main()
{
int m[100],n,p,i,mid;
printf("Enter number of elements in array\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&m[i]);
printf("Enter number to be searched\n");
scanf("%d",&p);
int beg=0;
int end=n-1;
if(p<m[beg] && p<m[end])
printf("-1");
else{
    if(p>m[beg] && p>m[end])
    {
        int max=m[beg];
        for(i=0;i<n;i++){
            if (m[i]>max)
            max=m[i];
        }
        printf("%d",max);

    }
    else{
        for(i=0;i<n;i++){
        mid=(beg+end)/2;
        if(m[mid]==p)
        break;
        else{
            if(m[mid]>p)
            end=mid-1;
            else
            beg=mid+1;
        }
        }
        printf("%d",mid+1);
    }
  
}
}