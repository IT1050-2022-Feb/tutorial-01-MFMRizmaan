/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}


int minimum(int x , int y)
{
  int min = 0 ;
  if(x >= y)
  {
    min = y ;
  }
  else
  {
    min = x ;
  }

  return min ;
}

int maximum(int v , int w)
{
  int max = 0 ;
  if(v >= w)
  {
    max = v ;
  }
  else
  {
    max = w ;
  }

  return max ;
}

int multiply(int a , int b)
{
  int mul = 0 ;
  
  mul = a * b ;

  return mul ;
}


