#include <stdio.h>

/* print Celsius-Fahrenheit table
	for celsius = -10, -5, 0 , 5 ..., 50; floating-point verion */
int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -10; 		/* lower limit of temperature table */
	upper = 50; 	/* upper limit */
	step = 5;		/* step size */
	
	celsius = lower;
	printf(" F  -   C\n");
	
	while (celsius <= upper) {
		fahr = (celsius * 1.8) + 32.0;	
		printf("%3.0f %6.1f\n", fahr, celsius);
		celsius = celsius + step;
		}
}
