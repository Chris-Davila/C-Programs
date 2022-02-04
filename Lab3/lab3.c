/******************************************************************
 * Programmer: Chris Davila
 * Course: CS 271 M01
 * Date: February 17, 2020
 * Purpose: This is the driver program that will pass values
 *    into the functions contained in the lab3functions.c program.
 *    The function calls are listed as follows:
 *
 *******************************************************************/
#include "lab3functions.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    factors( 12, 20 );
    factors( 15, 25 );
    
    timeDisplay( 25503 );
    timeDisplay( 30878 );
    
    rollingDice( 1000 );
    rollingDice( 100 );
    
} // end main
