/*
 * my2.c
 *
 * Created: 31-07-2024 12:05:04
 * Author : ADITHYA ANIL
 */ 

#include <avr/io.h>
int maxmin(int m[]);
int max_min = 1;
int main(void)
{  
  
   
   int val;
   int p[]={10,20,5,4,-10,47,8,36,-6,11};
  
   val = maxmin(p);
   
   return 0;
}

