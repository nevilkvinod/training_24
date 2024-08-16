/*Write a function that takes an array and its size as inputs. Function must return a void. Function must also calculate min and max values in the array.*/

#include <stdio.h>

void maxmin(int a[], int a_size)
{
    int *pa = a;
    int max=*pa;
    int min=*pa;
    int *l = a + a_size;
	int	*position = a;
	for (position = a; position < l; position++)
    {
        if(*position>max)
        max=*position;
        else if(*position<min)
        min=*position;
	}
	printf("max = %d.",max);
	printf("\n");
    printf("min = %d.",min);
}

		
int main()
{
    int a[100];
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    maxmin(a,n);

}