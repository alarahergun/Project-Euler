#include <stdlib.h>
#include <stdio.h>

/* project euler problem 3 :

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?  */

int main()

{
 unsigned long long int number = 600851475143; 
 int i = 3; 
 int max = 0;


 while (1)
 {
  while (number % i != 0) 
  {
	number /= i; 
    max = i; 
  }
  
  if (number == 1)
   break;


  i = i+2; 
 }


 printf("Highest prime factor of 600851475143 is %d\n", max);
 return 0;
}

