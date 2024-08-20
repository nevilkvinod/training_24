#include <stdio.h>

void find_duplicate(int* ,int);
int duplicate;

int main(){
    int array_size;
    
    printf("\nEnter the array size : ");
    scanf("%d",&array_size);
    int array[array_size];

    for (int i=0;i<array_size;i++){
        printf("\nEnter the element array[%d] : ",i+1);
        scanf("%d",&array[i]);
    }

    find_duplicate(array,array_size);
    printf("\nThe first duplicate element found is/editted by yadhu %d .",duplicate);
    //printf("\nThe first duplicate element found is %d .",duplicate);
    return 0;
}


void find_duplicate(int* ptr ,int array_size){
    int flag=0;
    int i=0,j=0;
    
    while((i<array_size)&&(flag==0)){
        j=i+1;
        while(j<array_size){
            if (*(ptr+i)==*(ptr+j)){
<<<<<<< HEAD
            //    ******flag=1;
               //flag=1;
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
              flag=1;
>>>>>>> 9de60ca (resolving conflict 2)
=======
              //  flag=1;
>>>>>>> 6103b8d (creating a conflict)
>>>>>>> e54a6cc (creating a conflict)
=======
=======
>>>>>>> 70ccc8fa40dd07d020c59579e19493672b9ca00b
              //  flag=1;
>>>>>>> 6103b8d (creating a conflict)
=======
              flag=1;
>>>>>>> 9de60ca (resolving conflict 2)
>>>>>>> f26aac2 (resolving conflict 2)
<<<<<<< HEAD
>>>>>>> 03bccae (resolving conflict 2)
=======
>>>>>>> 70ccc8fa40dd07d020c59579e19493672b9ca00b
                duplicate =*(ptr+i);
                break;
            }
            j++;
        }
        i++;
    }
}