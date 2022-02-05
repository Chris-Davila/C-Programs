/**********************
 * Name: Chris Davila
 * Course: CS 271 M01
 * Date: March 02, 2020
 * Purpose: The program will print out the random values
 *    stored in array. The array is then sorted and printed
 *    out onto the screen.
 *
 **********************/

#include <stdio.h>
#include "lab5functions.h"

int main() {
    
    int row = 0;
    
    float floats[100];

    printf("Generating 100 random floating point numbers...\n\n");
    
    fillFloat( floats, 100, 10, 1000 );

    printf("The list of numbers are:\n");
    
    for ( int i = 0; i < 20; i++, row++ ) { 
        
        for ( int j = 0, column = 1; column <= 5; j += 20, column++ ) {
        
            printf("%-10.1f", floats[j+row]);
        
        } // end for(int j = 0)
        
        if ( row == 9 ) 
            
            row = -1;
        
        printf("\n");
        
    } // end for(int i = 0)

    printf("\nThe numbers are now being sorted...\n\n");

    selectionSort( floats, 100 );

    printf("The list of sorted numbers are:\n");

    for ( int i = 0; i < 20; i++, row++ ) {

      for ( int j = 0, column = 1; column <= 5; j += 20, column++ ) {

			printf("%-10.1f", floats[j+row]);
	
      } // end for(int j = 0) 

      if( row == 9 )

			row = -1;

      printf("\n");

    } // end for(int i = 0) 
    
} // end main()
