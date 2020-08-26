/*
 ======================================================================================
 Name        : calendarCheckBox.c
 Author      : Djordje
 Version     : 1
 Copyright   : no copyright
 Description : Calendar program with the added functionality of crossing out/ marking days.
 ======================================================================================
 */

//populate the array,
// user runs program -> calendar is printed/loaded -> user can cross the current day.
// save and load calendar from txt file
// option to reset

#include <stdio.h>
#include <stdlib.h>

int get_first_weekDay(int year){
    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}

void populate_array(){

}

int main(){
	// Linux terminal color scheme
	printf("\033[37m\033[44m"); // White foreground / Red background
	int year,day=0,dayInMonth,weekDay=0,startingDay,month;
	// set current year, so I don't have to change it with every use.
	year = 2020;
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int monthsAndDays[12][31]; // multi-dimensional array of all the days, for indexing later.
	int monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if((year%4==0&&year%100!=0)||year%400==0){
	        monthDays[1]=29;
	    }
	startingDay=get_first_weekDay(year);
	for(month=0;month<12;month++){

	}

	printf("\033[0m");          // Reset color in terminal
}
