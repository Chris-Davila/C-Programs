/**********************************************************************
 * Programmer: Chris Davila
 * Course: CS 271 M01
 * Date: February 17, 2020
 * Purpose: The first function will find the common factors of any
 *     two numbers. Second function will display the current time, 
 *     based on the number of seconds passed into the function. The 
 *     third will roll two die based on the number passed into the 
 *     function. The frequency of the number that shows up on the dice
 *     will be counted and displayed onto the screen. 
 *
 ***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "lab3functions.h"

void factors(int num1, int num2) {
    
    printf("The common factors are: \n");
    
    // find the common factors shared by both parameters (num1, num2) 
    // and print them onto the screen
    for ( int i = 1; i <= num1 && i <= num2; i++ ) 
        
        if (num1 % i == 0 && num2 % i == 0) 
            printf("%d\n", i);
     
} // end factors()

void timeDisplay(int in_seconds) {

    int secsSq = 3600;
    int secsReg = 60;
    
    // 60^2 = 3600, thus divide by 3600
    int hours = in_seconds / secsSq;

    in_seconds %= secsSq;
    
    int mins = in_seconds / secsReg;
    
    int secs = in_seconds %= secsReg;
    
    printf("The time is %02d:%02d:%02d\n", hours, mins, secs);
    
} // end timeDisplay()

void rollingDice(int n) {
    
    int diceTotal = 0;
    int counts[13];

    for(int i = 0; i < 13; i++)
      counts[i] = 0;
    
    srand(time(0));
    
    // want to roll the dice
    for(int i = 1; i <= n; i++) {
     
        diceTotal = (rand() % 6 + 1) + (rand() % 6 + 1);
        
        // need to check if the diceTotal equals 2, 3, ..., 12
        // and add count to corresponding element storing count
        // (counts[2], counts[3], ..., counts[12]).
        
        counts[diceTotal % 13] += 1;
        
    } // end for loop
    
    printf("Dice Total         Frequency\n"
           "-----------        -----------\n");
    
    for(int i = 2; i <= 12; i++) 
        
        printf("%6d                %3d\n", i, counts[i]);
    
} // end rollingDice()
