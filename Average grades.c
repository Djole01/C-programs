#include <stdio.h>

int main(void)
{
	int i = 0;
	int number = 1;
	float num[100],sum=0.0,average;
	printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");
	while( number > 0 )
	{
	
	printf("Enter score (4-10):");	
	scanf("%d",&number);
	if(number < 0)
		break;
		
	num[i]=number;
	sum += num[i];
	i++;
		
	} 
	
	average = sum / i;
	printf("You entered %d scores.\nAverage score: %.2f\n", i, average);

	
	
	
	
	
	
	
	
	
	
return 0;	
}