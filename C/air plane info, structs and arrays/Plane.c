/*
 ============================================================================
 Name        : Plane.c
 Author      : Hung Xuan Nguyen
	       Dorde Obradovic
 Description : 
 ============================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "Plane.h"

int numberOfPlanes = 0;
int j;

void initialize()
{
	for (int i=0; i<SIZE; i++)
	{
		strcpy(planeArray[i].name, "NULL\n");
		planeArray[i].seats = -1;
		planeArray[i].wingSpan = -1;
	}
}

void askInfo()
{
    askNumberOfPlanes();
  
	
	for (j=0; j<numberOfPlanes; j++)
	{
		printf("\nPlane name: ");
		getchar();
		fgets(planeArray[j].name, 30, stdin);

        askNumberOfSeats();
        askWingSpan();
	}
}

void printPlanes()
{
	for (int i=0; i<SIZE; i++)
	{
		printf("\nName:\t\t%s",planeArray[i].name);
		printf("Seats:\t\t%d",planeArray[i].seats);
		printf("\nWing span:\t%0.1f",planeArray[i].wingSpan);
	}
	printf("\n");
}

void askNumberOfPlanes()
{
	printf("How many planes do you want to add? ");
	scanf("%d",&numberOfPlanes);
    if(numberOfPlanes>SIZE)
	{
        printf("Wrong Input! ");
        askNumberOfPlanes();

	}
}

void askNumberOfSeats()
{
    printf("Number of seats: ");
	scanf("%d",&(planeArray[j].seats));
	if (planeArray[j].seats<=0)
	    {
		    printf("Wrong value! ");
		    askNumberOfSeats();
		}
}

void askWingSpan()
{
    printf("Wing span: ");
	scanf("%lf",&(planeArray[j].wingSpan));
	if (planeArray[j].wingSpan<=0)
	{
		printf("Wrong value! ");
	    askWingSpan();
	}   
}



