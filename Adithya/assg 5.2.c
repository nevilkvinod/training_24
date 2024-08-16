/*Write a function that takes an array and size of the array as input and reverse the array.*/

#include <stdio.h>


void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void reverse(int a[], int a_size)
{

	int *pa1 = a;
	int	*pa2 = a + a_size - 1;
	while (pa1 < pa2) {
		swap(pa1, pa2);
		pa1++;
		pa2--;
	}
}

void print(int* a, int a_size)
{
	
	int *l = a + a_size;
	int	*position = a;
	for (position = a; position < l; position++)
		printf("%d ", *position);
}


int main()
{

	int a[] = {  4, 7, -5, 3 };
	print(a, 4);
	printf("\n");
	reverse(a, 4);
	print(a, 4);
	return 0;
}


