
/*Write a function that takes an array of characters as input and returns nothing. However, function must update an external variable vowel_count to reflect the total number of vowels in the string.*/ 
#include<string.h>
extern int vowel_count=0;
void vowel(char* str)
{
	int l;
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(str[i] == 'a' | str[i]=='e' | str[i]=='i' | str[i]=='o' | str[i]=='u' | str[i]=='A' | str[i]=='E' | str[i]=='I' | str[i]=='O' | str[i]=='U' )
		vowel_count++;
	}
}