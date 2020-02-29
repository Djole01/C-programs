/*
 ============================================================================
 Name        : Plane.h
 Author      : Hung Xuan Nguyen
	       Dorde Obradovic
 Description : the struct plane defined
 ============================================================================
 */

#ifndef PLANE_H
#define PLANE_H
#define SIZE 5

struct plane {
	char name[30];
	int seats;
	double wingSpan;
};


struct plane planeArray[SIZE];
void initialize();
void askInfo();
void printPlanes();

#endif
