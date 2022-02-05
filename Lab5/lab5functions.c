/*************************************************************
 * Name: Chris Davila
 * Course: CS 271 M01
 * Date: March 02, 2020
 * Purpose: This program fills array with random float values.
 *    The sort function goes through the array and sorts the  
 *    floats contained within the array in ascending order.
 *
 *************************************************************/

#include <stdlib.h>
#include <time.h>
#include "lab5functions.h"


void swap( float *nPtr, float *n1Ptr ) {

    float temp;

    temp = *n1Ptr;
    
    *n1Ptr = *nPtr;

    *nPtr = temp;
    
} // end swap()


void fillFloat( float *aPtr, int length, float min, float max ) {
    
    srand(time(NULL));
    
    // here I need to fill pointer (array) with floats
    // so I will use the a+i to increment the address location
    for (int i = 0; i < length; i++) 
        
        *(aPtr + i) = (rand() % (int)max + (int)min) / 10.0;
    
} // end fillFloat()

int selectionSort( float *aPtr, int length ) {

  int i, min;
  
  for( i = 0; i < length - 1; i++ ) {

    min = i;

    for ( int j = i; j < length; j++ ) {

      if ( *(aPtr + j) < *(aPtr + min) )

	min = j;

    } // end for(int j)

      if ( min != i )

        swap( aPtr + min, aPtr + i );

  } // end for(i)

} // end selectionSort()

