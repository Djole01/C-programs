#include <stdio.h> 
/* This is a fine program */ 

int main(void){ 
  int age; 
  char gender;
  printf("Are you male or female (m/f)?");
  gender = getchar();
  printf("Enter your age:"); 
  scanf("%d", &age); 

  if ((age < 56) && (gender == 'm'))
  	{ 
  		printf("You are a man in your best years!");
  	}
	else if ((age > 55)&&(gender == 'm'))
	{	
		printf("You are a wise man!");
	}
	else if ((age < 56)&&(gender == 'f'))
	{
		printf("You are a beauty!");
	}
	else if ((age > 55)&& (gender == 'f'))
	{
		printf("You look young for your age!");
	}
	else 
	{
		printf("An error occured in the program!");
	}
}