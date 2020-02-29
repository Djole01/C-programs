/*
 ============================================================================
 Name        : Assignment1.c
 Author      : Hung Xuan Nguyen
	       Dorde Obradovic
 Description : creating array with random numbers
 ============================================================================
 */

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int *initializeArray(int arrayLength){
	int *array = malloc(arrayLength * sizeof(int));
	srand(time(NULL));
	for (int i = 0; i<arrayLength; i++)
	{
		*(array + i) = rand() % 1000000;
	}
	return array;
}

