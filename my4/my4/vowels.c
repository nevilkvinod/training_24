/*
 * vowels.c
 *
 * Created: 31-07-2024 15:14:37
 *  Author: ADITHYA ANIL
 */ 
extern int vowel_count;
int vowels(char arr[])
{
	int i=0;
	while(arr[i]!='\0'){
		
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
		++vowel_count;
		i++;

	}
	
}