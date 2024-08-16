#include <stdio.h>
#include <string.h>
int main(){
    char string1[50];
    printf("\nEnter the string : ");
    fgets(string1,50,stdin);
    int i=0;
    int len=0;
    while (*(string1+i)!='\0'){
        len++;
        ++i;
    }
    if(i>0&&(*(string1+i-1)=='\n')){
        --len;
    }

    printf("The length of the string is :  %d ",len);
    return 0;
}