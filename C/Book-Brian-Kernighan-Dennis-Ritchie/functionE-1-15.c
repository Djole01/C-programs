#include <stdio.h>

void celsToFahrConv(double cels);

int main()
{
	celsToFahrConv(0);
	celsToFahrConv(5);
	celsToFahrConv(10);
	celsToFahrConv(15);
	celsToFahrConv(-20);
	celsToFahrConv(20);
	celsToFahrConv(1);
			
	return 0;
}
/* convert Celsius to Fahrenheit and print*/
void celsToFahrConv(double cels) 
{
	double fahr;
	fahr = (cels * 1.8) + 32.0;
	printf("%6.1f C = %3.1f F\n", cels, fahr);
}

