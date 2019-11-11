/*
 ============================================================================
 Name        : FizzBuzzProject1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : FizzBuzz in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;
	for (i=1;i<31;i++){

		if ((i % 3 == 0)&&(i % 5 == 0)){
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0){
			printf("Buzz ");
		}
		else if (i % 3 == 0){
			printf("Fizz ");
		}
		else {
			printf("%d ",i);
		}
	}
	return 0;
}
