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
	int numberOfPlanes = 0;
	printf("How many planes do you want to add? ");
	scanf("%d",&numberOfPlanes);
	while (numberOfPlanes>SIZE)
	{
		printf("Wrong value! How many planes do you want to add? ");
		scanf("%d",&numberOfPlanes);
	}
	for (int i=0; i<numberOfPlanes; i++)
	{
		printf("\nPlane name: ");
		getchar();
		fgets(planeArray[i].name, 30, stdin);
		printf("Number of seats: ");
		scanf("%d",&(planeArray[i].seats));
		while (planeArray[i].seats<=0)
		{
			printf("Wrong value! Number of seats: ");
		scanf("%d",&(planeArray[i].seats));
		}
		printf("Wing span: ");
		scanf("%lf",&(planeArray[i].wingSpan));
		while (planeArray[i].wingSpan<=0)
		{
			printf("Wrong value! Wing span: ");
		scanf("%lf",&(planeArray[i].wingSpan));
		}
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



