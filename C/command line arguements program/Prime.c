/*
 ============================================================================
 Name        : Assignment1.c
 Author      : Hung Xuan Nguyen
	       Dorde Obradovic
 Description : find the highest prime factor
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000000

void largestPrimeFactor(int number)
{	
	int *prime = malloc((number+1) * sizeof(int));
	for (int i = 0; i <= number; i++)
	{
		*(prime + i) = 1;
	}
	for (int i = 2; i <= number/2; i++)
	{
		if (*(prime + i) == 1)
		{
			for (int j = i*2; j <= number; j += i)
			{
				*(prime + j) = 0;
			}
		}
	}
	int largestPrimeFactor = -1;
	for (int i = number-1; i>1; i--)
	{
		if (*(prime+i)==1)
		{
			if(number%i == 0)
			{
				largestPrimeFactor = i;
				break;
			}
		}
	}
	if (largestPrimeFactor == -1) largestPrimeFactor = number;
	if (largestPrimeFactor == 0 ||largestPrimeFactor == 1) 
	{
		printf("%d doesn't have a prime factor\n",number);
	}
	else
	{
		printf("Largest prime factor of %d is %d\n", number, largestPrimeFactor);
	}
	free(prime);
}
