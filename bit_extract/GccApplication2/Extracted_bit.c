/*
 * GccApplication2.c
 *
 * Created: 31-07-2024 14:28:30
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>
#include <stdio.h>

int main(void)
{
	int a=77; //Number
	int p=1; //Position
	int n=3; //No of bits to be extracted
	int ex=0;
	
	ex = extract_bits(a,p,n);
	
	printf("Extracted Bits %d",ex);

}

int extract_bits(int a, int p, int n) {
	int shifted = a >> p;
	int mask = (1 << n) - 1;
	int extracted_bits = shifted & mask;
	return extracted_bits;
}

