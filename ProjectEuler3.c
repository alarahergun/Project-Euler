#include <stdlib.h>
#include <stdio.h>

/* project euler problem 3 :

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?  */

int main() {

unsigned long long int n = 600851475143;
long int div=2, ans = 0, maxFact;
   
while(n!=0) {
      if(n % div !=0)
         div = div + 1;
      else {
         maxFact = n;
         n = n / div;
         if(n == 1) {
            printf("%d is the largest prime factor !",maxFact);
            ans = 1;
            break;
         }
      }
   }
   return 0;
}

