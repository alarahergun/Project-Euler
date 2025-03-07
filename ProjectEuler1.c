#include <stdio.h>
#include <stdlib.h>

/* project euler problem 1:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000. */

int main()

{
	int i;
	int total = 0;
	
	for(i=1; i<1000; i++)
	{
		if (i%3 == 0)
		{
			total = total + i;
			continue;
		}
		
		else if (i%5 == 0)
		{
			total = total + i;
		}
	}
	
	printf("The sum of all multiples of 3 or 5 below 1000 is %d.", total);
	
	
	
	return 0;
}
