#include <stdio.h>
#include <stdlib.h>

/* project euler problem 9: 

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc. */

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
	int a, b, c;
	for(a=1; a<500, a<b; a++)
	{
		for(b=a; b<500; b++) //a<b'yi reformüle ettik
		{
			for(c=b; c<1000; c++) //b<c'yi reformüle ettik
			{
				if(a+b+c == 1000)
				{
					if(pow(a,2) + pow(b,2) == pow(c,2))
					{
						printf("The triplet you are searching for: \n");
						printf("(a,b,c) = (%d,%d,%d)", a,b,c);
						printf("\nabc= %d", a*b*c);
					}
				}
			}
		}
	}
	
	return 0;
}
