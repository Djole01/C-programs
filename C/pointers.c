#include <stdio.h>

int main(){

	int num = 8;
	int *ptr = &num;
	
	printf("Regular variable contains: %d\n", num );
	printf("Pointer variable contains: 0x%p\n", ptr );
	printf("Pointer points to value: %d\n\n", *ptr );

	*ptr = 12; // assign new value to regular value via the pointer variable.
	
	printf("Regular variable contains: %d\n", num );
	printf("Pointer variable contains: 0x%p\n", ptr );
	printf("Pointer points to value: %d\n\n", *ptr );
	
	return 0;
}

