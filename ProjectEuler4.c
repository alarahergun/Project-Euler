#include <stdio.h>
#include <stdlib.h>

/* project euler problem 4:

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers. */

int CheckPalindrome(int pal)
{
	int basamak = 1, i, int num[6];
	int temp = pal;
	
	while(temp >= 10)
	{
		temp = temp/10;
		basamak++;
	}
	
	for(i = basamak, j = 0; i > 1; i--, j++)
	{
		num[j] = pal / (10 * (basamak-1));
		pal = pal - (num[j] * 10 * (basamak - 1));	 
	}
	
	num[j+1] = pal;

	//array'e basamak basamak yerleþtirdik, þimdi kontrol edicez ters yüz yöntemiyle
	
	for(i=0; i = basamak/2; i++)
	{
		if(num[i] != num[basamak-i-1)
		{
			return 0;
		}
	}
		
	return 1;
}



int main()
{
	int i, j, pal, pal_max;
	int num[6];
	
	for(i=100; i<1000; i++)
	{
		for(j=100; j<1000; j++)
		{
			pal = i * j;
			
			if(CheckPalindrome() == 1)
			{
				pal_max = pal;
			}
		}
	}
	
	printf("Biggest Palindrome Number : %d", pal_max);
	return 0; 
}
