/*
 * sort.c
 *
 * Created: 31-07-2024 10:58:10
 *  Author: Siyan Ananth A
 */ 
int sort(int *arr){
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}