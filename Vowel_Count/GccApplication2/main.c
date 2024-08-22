/*
 * GccApplication2.c
 *
 * Created: 31-07-2024 12:38:30
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>
#include <stdio.h>
#include "vowel_cnt.h "


void count_vowels(char str[], int n) {
	vowel_count = 0;

	for (int i = 0; i < n; i++) {
		switch (str[i]) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			vowel_count++;
			break;
			default:
			// No action needed for non-vowel characters
			break;
		}
	}
}

int main(void) {
	// Example array of 8 characters
	char str[] = {'H', 'e', 'l', 'l', 'o', 'U', 's', 'u'};
	int n = sizeof(str) / sizeof(str[0]);  // Calculate the number of elements in the array
	

	// Count the vowels in the predefined array
	count_vowels(str, n);

	// Print the result
	//printf("Number of vowels present in the character array: %d\n", vowel_count);

	return 0;
}


