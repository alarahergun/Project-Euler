#include <stdio.h>
#include <stdlib.h>

/* project euler problem 6:

The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. */

int power(int n, int pow)

{
	int i, ans;
	ans = 1;
	for (i = 0; i < pow; i++)
	{
        ans = ans * n;
 	}
    return ans;
}


int main()

{
	int sum = 0;
	int sum_2 = 0;
	int i;
	
	for(i=1; i<=100; i++)
	{
		sum = sum + power(i,2);
	}
	
	for(i=1; i<=100; i++)
	{
		sum_2 = sum_2 + i;
	}
	
	sum_2 = power(sum_2, 2);
	
	printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %d.", sum_2 - sum);
	return 0;
}
