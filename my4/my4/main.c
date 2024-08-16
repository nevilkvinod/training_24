/*
 * my4.c
 *
 * Created: 31-07-2024 15:14:16
 * Author : ADITHYA ANIL
 */ 

#include <avr/io.h>
int vowels(char);
int vowel_count;

int main(void)
{
	char rr[]={'a','d','i','t','h','y','a','\0'};
    int c =vowels(rr);
	return 0;
}

