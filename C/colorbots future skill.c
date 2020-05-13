/*
 Color Bot

Printers all over the world have been taken over by malicious bots and are running wild, colouring a grid based battlefield as they want, and it is up to you to defeat them!

In order to achieve victory you have to code your own bot and make it outsmart the competition. 
Luckily the bots compete on an equal playing field and can each perform only one action every "move". 
This action can be used to scan the battlefield for either colors or bots to get a good overview or it 
can be used to get points by either moving quickly, colouring squares in your vicinity, or slowly drawing 
a line that has the possibility to expand into a large color square. Be careful though. 
If some other bot walks over your line before you manage to expand it the gains could be lost! 
Further, if your immediate area overlap with that of another bot neither of you will colour the overlapping squares!

The only action that can be taken each round without limit is to get your own bots current state. You should also be aware that while in development the bot always starts from the same position, however when it is deployed (and fights to gain recognition on the leaderboard) it will start from a random point of origin.

The bot that manage to color the most squares over the time of the conflict will be crowned the winner!
*/

#ifndef Solution_h
#define Solution_h
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "API.h"

volatile char previousCordinateX[2] = {'a', 'b'};
volatile char previousCordinateY[2] = {'a', 'b'};
volatile int flagX,lineFlag, flagY, flagX2, flagY2;

void Solution() {
// initialize flags to 0.
flagX = 0;
lineFlag = 0;
flagY = 0;
flagX2 = 0;
flagY2 = 0;
}

void oneMove() {
  // bot will go right, until he hits a wall
  if(!flagX){
    char s[100];
    strcpy(s , API_getMyInfo());
    char currentCordinateX[2] = {s[18] , s[19] };
    if ((previousCordinateX[0] == currentCordinateX[0])&&(previousCordinateX[1] == currentCordinateX[1])){ // comparing co-ordinates to check if stuck in place.
      printf("HIT A WALL!");
      flagX = 1;
      flagY = 0; // bot starts going down.
      previousCordinateY[0] = previousCordinateY[0] - 1;  // so it does not get stuck again when going up for the second time.
      previousCordinateY[1] = previousCordinateY[1] - 1;
    }
    else{
      previousCordinateX[0] = currentCordinateX[0]; // updates coordinates
      previousCordinateX[1] = currentCordinateX[1];  
      if (lineFlag != 2){ 
        lineFlag++;
        API_draw("R");
      }
      else{
        API_expand("D"); // expands the line at the count of 3
        previousCordinateX[0] = previousCordinateX[0] - 1; // so it does not get stuck while expanding
        previousCordinateX[1] = previousCordinateX[1] - 1;
        lineFlag = 0; 
      }
    }
  }
  else if(!flagY) {
    // bot wil go down until he hits a wall.
    char s[100];
    strcpy(s , API_getMyInfo());
    char currentCordinateY[2] = {s[26] , s[27] };
    if ((previousCordinateY[0] == currentCordinateY[0])&&(previousCordinateY[1] == currentCordinateY[1])){
      printf("HIT A WALL!");
      flagY = 1;
      flagX2 =0; // bot will start going left.
      previousCordinateX[0] = previousCordinateX[0] - 1;
      previousCordinateX[1] = previousCordinateX[1] - 1;
    }
    else{
      previousCordinateY[0] = currentCordinateY[0];
      previousCordinateY[1] = currentCordinateY[1];  
      if (lineFlag != 2){
        lineFlag++;
        API_draw("D");
      }
      else{
        API_expand("L");
        previousCordinateY[0] = previousCordinateY[0] - 1;
        previousCordinateY[1] = previousCordinateY[1] - 1;
        lineFlag = 0;
      }
    }
  }
  else if(!flagX2){
    //bot going left until he hits a wall.
    char s[100];
    strcpy(s , API_getMyInfo());
    char currentCordinateX[2] = {s[18] , s[19] };
    if ((previousCordinateX[0] == currentCordinateX[0])&&(previousCordinateX[1] == currentCordinateX[1])){
      printf("HIT A WALL!");
      flagX2 = 1;
      flagY2 = 0; //bot going up 
      previousCordinateX[0] = previousCordinateX[0] - 1;
      previousCordinateX[1] = previousCordinateX[1] - 1;
    }
    else{
      previousCordinateX[0] = currentCordinateX[0];
      previousCordinateX[1] = currentCordinateX[1];  
      if (lineFlag != 2){
        lineFlag++;
        API_draw("L");
      }
      else{
        API_expand("U");
        previousCordinateX[0] = previousCordinateX[0] - 1;
        previousCordinateX[1] = previousCordinateX[1] - 1;
        lineFlag = 0;
      }
    }
  }
  else if(!flagY2) {
   // bot goes up until he hits a wall. 
    char s[100];
    strcpy(s , API_getMyInfo());
    char currentCordinateY[2] = {s[26] , s[27] };
    if ((previousCordinateY[0] == currentCordinateY[0])&&(previousCordinateY[1] == currentCordinateY[1])){
      printf("HIT A WALL!");
      flagY2 = 1;
      flagX = 0; // bot goes right again 
      previousCordinateY[0] = previousCordinateY[0] - 1;
      previousCordinateY[1] = previousCordinateY[1] - 1;
    }
    else{
      previousCordinateY[0] = currentCordinateY[0];
      previousCordinateY[1] = currentCordinateY[1];  
      if (lineFlag != 2){
        lineFlag++;
        API_draw("U");
      }
      else{
        API_expand("R");
        previousCordinateY[0] = previousCordinateY[0] - 1;
        previousCordinateY[1] = previousCordinateY[1] - 1;
        lineFlag = 0;
      }
    }
  }
}

#endif