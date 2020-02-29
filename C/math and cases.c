#include <stdio.h>

int main(void)
{

int function;
int firstNumber;
int secondNumber;
printf("1: subtraction\n");
printf("2: addition\n");
printf("3: multiplication\n");
printf("Select function: ");
scanf("%d",&function);
printf("Enter the first number:");
scanf("%d",&firstNumber);
printf("Enter the second number:");
scanf("%d",&secondNumber);
switch(function) 
      { 
	   case 1:
	{
		printf("%d-%d=%d",firstNumber,secondNumber,firstNumber-secondNumber);
		break;
	}
	   case 2:
	{
		printf("%d+%d=%d",firstNumber,secondNumber,firstNumber+secondNumber);
		break;
	}
	   case 3:
	{
		printf("%d*%d=%d",firstNumber,secondNumber,firstNumber*secondNumber);
		break;
	}
	default: 
	{
		printf("Outside of range");
	}
}
