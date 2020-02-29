/*
 ============================================================================
 Name        : Assignment1.c
 Author      : Hung Xuan Nguyen
	       Dorde Obradovic
 Description : reading integer command line argument.
 ============================================================================
 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"Array.h"
#include"Prime.h"

int getArrayLength(int argc, char **argv);
int main(int argc, char **argv){
	int arrayLength = getArrayLength(argc,argv);
	if(arrayLength!=-1)
	{
		int *array = NULL;
		array = initializeArray(arrayLength);
		for (int i = 0; i<arrayLength; i++)
		{
			largestPrimeFactor(*(array+i));
		}
		free(array);
	}
return 0;

}

int getArrayLength(int argc, char **argv)
{
	int arrayLength;
	if (argc > 2)
	{
		printf("Error: Too many arguments!\n");
		return -1;
	}
	else if (argc == 1)
	{
		printf("Error: No argument!\n");
		return -1;
	}
	else 
	{
		arrayLength = atoi(argv[1]);
		int error = 0;
		for (int i = 0; argv[1][i] != '\0'; i++)
		{
			if (argv[1][i] > '9' || argv[1][i] < '0')
			{
			error = 1;
			break;
			}// not a number, error
		}
		if (error == 0)
		{
			printf("You have entered %d, as the length of the array.\n",arrayLength);
			return arrayLength;	
		}
		else 
		{
			printf("Error, numbers only!\n");
		}
	}
	return -1;
}

