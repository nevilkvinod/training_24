/*
 * mode_find.c
 *
 * Created: 03-08-2024 10:37:00
 *  Author: Siyan Ananth A
 */ 
extern mode;

int mode_find(int *arr,int length){
	int count=0,temp=count;
	for(int i=0;i<length;i++){
		for(int j=i;j<length-1;j++){
			if(arr[i]==arr[j+1]){
				count+=1;	
			}
		}
		
		if(count>temp){
			mode=arr[i];
			temp=count;
			count=0;
		}
	}
	return mode;
}
	