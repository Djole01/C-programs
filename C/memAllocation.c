#include <stdlib.h> // malloc, calloc, realloc, free
#include <string.h> //strcpy
#include <stdio.h> //printf

void fail(void) { 
	printf ("memory could not be allocated"); 
	exit(EXIT_FAILURE);
}

int main(void) {
	// allocate 13 bytes on the heap to hold 13 chars
	char *name = malloc(13 * sizeof(char));
	if (name == NULL) fail();
	printf("name string: %s\n", name); // null
	strcpy(name, "engineer man ");
	printf("name string: %s\n", name); // engineer man
	
	// allocate 4 or 8 bytes on the heap to hold 2 ints, initialized to 0
	int *numbers = calloc(2, sizeof(int));
	if (numbers == NULL) fail();
	printf("number1:%d number2:%d\n",numbers[0], numbers[1]); // 0,0
	numbers[0] = 1;
	numbers[1] = 2;
	printf("number1:%d number2:%d\n",numbers[0], numbers[1]); // 1,2
	
	// reallocate name to 25 bytes
	name = realloc(name, 25 * sizeof(char));
	if (name == NULL) fail();
	strcat(name, "is the best");
	printf("name string: %s\n", name);
	
	// release memory back to the operating system when done 
	free(name);
	free(numbers);
	
	return EXIT_SUCCESS;
}

