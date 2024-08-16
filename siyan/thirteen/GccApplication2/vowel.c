/*
 * vowel.c
 *
 * Created: 31-07-2024 10:30:20
 *  Author: Siyan Ananth A
 */ 

int vowel(char *arr){
	int count=0;
	for(int i=0;i<5;i++){
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
			count+=1;
		}
	}
	return count;
}