/*
 * GccApplication2.c
 *
 * Created: 31-07-2024 14:28:30
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>
#include <stdio.h>

int extract_bits(int a, int p, int n) {
	
	int shifted=0;
	int mask=0;
	int extracted_bits=0;
	
	shifted = a >> p;    
	mask = (1 << n) - 1;         
	extracted_bits = shifted & mask;
	return extracted_bits;
}

int main(void)
{
	int a = 77;
	int p = 2; 
	int n = 3;
	
	int ex = extract_bits(a, p, n);
	
	printf("Extracted Bits: %d\n", ex);

	return 0;
}

