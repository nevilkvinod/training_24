// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
enum shapes{ 
  circle=1,
  square=2,
  triangle=3  
};
int calculator(int x,int areavalue)
{
    float area;
    int height=10;
    switch (areavalue) 
    {
        case circle: 
        area=3.14*x*x;
        printf("The area of circle is %f",area);
        break; 
        
        case square: 
        area=x*x;
        printf("The area of square is %f",area);
        break;
        
        case triangle: 
        area=0.5*x*height;
        printf("The area of triangle is %f",area);
        break;
        
        default: 
        printf("Enter a valid value"); 
        break;
    }
    
} 
int main()
{
printf("Enter the x value  "); 
int x;
scanf("%d",&x);
printf("Enter the choose value  "); 
int choose; 
scanf("%d",&choose);  
enum shapes areavalue; 
areavalue=choose; 
calculator(x,areavalue);
}