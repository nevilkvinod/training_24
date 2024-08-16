/*
 * GccApplication2.c
 *
 * Created: 31-07-2024 09:23:54
 * Author : PARVEZ KHAN
 */ 

#include <avr/io.h>
#include <stdio.h>
#include <string.h>




int main(void)
{
        
        void eight_to_16_bit(char str1[], char str2[]) {
	        strcat(str1, str2);
        }

			char str1[100] = "10011000";
			char str2[] = "10000011";

			eight_to_16_bit(str1, str2);

			printf("Concatenated String: %s\n", str1);

			return 0;


}

