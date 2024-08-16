/*
 * found.c
 *
 * Created: 31-07-2024 10:51:14
 *  Author: Siyan Ananth A
 */ 

int found(int a,int *arr){
	int find;
	for(int i=0;i<5;i++){
		
		if(arr[i]==a){
			find=i;
			break;
		}
		
		else{
			find=-1;
		}
	}
	
	return find;
}