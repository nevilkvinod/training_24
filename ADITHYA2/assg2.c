/*Take an array of integers and one number as input. Perform linear search for the number in the array. Output -1 if the number is not present in the array. Else output the index of the number in the array.*/
#include <stdio.h>
int main()
{
    int n,m[100],p;
    printf("Enter the number of array elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for (int i=0;i<n;i++)
    scanf("%d",&m[i]);
    
    printf("Enter the number to be searched\n");
    scanf("%d",&p);
    int flag=0;
    for(int i=0;i<n;i++){
        if(m[i]==p){
            flag=1;
            if (flag==1)
            printf("%d",i);
            break;
        }
      
    }
    if (flag==0)
    printf("-1");
    
    return 0;
}
