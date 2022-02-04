/**********************************************************************
 * Programmer: Chris Davila
 * Course: CS 271 M01
 * Date: Feburary 24, 2020
 * Purpose: This program contains all the functions that will be used
 *     in the lab4.c program. All of the functions utilize arrays to 
 *     accomplish a task. The manipulation of arrays are also utilized.
 *
 **********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "arrayfunctions.h"

void fillInteger( int a[], int length, int min, int max ) {
    
    srand(time(NULL));
    // here you want to use an index that goes up to and includes the max
    for( int i = 0; i < length; i++ )
      a[i] = rand() % (max*2) + min;
    
} // end fillInteger()

void fillCharacter( char c[], int length, char start, char end ) {
    
    if ( start >= 'A' && start <= 'Z' )
      start = start + 32;
    
    if ( end >= 'A' && end <= 'Z' )
      end = end + 32;
    
    srand(time(NULL));
    
    for ( int i = 0; i < length; i++ ) {

      if ( i == length - 1 ) {
	c[i] = (char)0;
      }else {
      // here i fill the array with random characters. In C, the char values are
      // interchangable with integer values, meaning they can represent integers 
	c[i] = rand() % ((end + 1) - 'a') + start;
      } // end else

    } // end for
    
} // end fillCharacter()

void findConsecutive( int array[], int length ) {

   // need to find the elements that are consecutive, search array
   for ( int i = 0; i < length; i++ )

     // check if the next element is the equal to the array[i] + 1
     if ( array[i + 1] == ++array[i] )

       printf("Elements [%d] and [%d] are consecutive.\n", i, i+1);

} // end findConsecutive()

void findTriples( char c[], int length ) {

  // search array for any 3 sequential elements that form an alphabetic sequence
  for ( int i = 0; i < length - 1; i++ ) {
    // here we find the 3 characters in alphabetic sequence
    if ( c[i + 1] != '\0' && c[i + 2] != '\0' ) 

      if ( (c[i + 1] == ++c[i]) && (c[i + 2] == ++c[i + 1]) ) 

         printf("%c%c%c\n", c[i], c[i + 1], c[i + 2]);

  } // end for()

} // end findTriples()

void findWords( char *c[], int length, char letter ) {

  char *s;
  
  // must go through each string in the array and search for the letter "letter"
  for ( int i = 0; i < length; i++ ) {

    s = strchr( c[i], letter );
    
    if ( s != NULL ) {

       while(*c[i] != '\0')
	  printf("%c", *c[i]++);

       printf("\n");

    }

  } // end for()

} // end findWords()

void fillFloat( float a[], int length, float min, float max ) {

  srand(time(NULL));
  
  // need to just get random integer, then divide by 10 to recieve float
  // with one digit to the right of the decimal
  for ( int i = 0; i < length; i++ )

    a[i] = (rand() % (int)max + (int)min) / 10.0;
  
} // end fillFloat()

float floatMean( float array[], int length ) {

  float total = 0.0f;
  float average = 0.0f;
  
  // add the values in the array and divide by length
  for ( int i = 0; i < length; i++ )

    total += array[i];

  average = total / (float)length;

  return average;

} // end floatMean()

float floatMin( float array[], int length ) {

  float min = array[0];

  // want to go throught the loop and find the value that's less
  // then the value that is in min, replace with lesser value
  for ( int i = 1; i < length; i++ )

    if ( array[i] < min )

      min = array[i];

  return min;
  
} // end findMin()

float floatMax( float array[], int length ) {

  float max = array[0];

  for ( int i = 1; i < length; i++ )

    if ( array[i] > max )

      max = array[i];

  return max;
  
} // end findMax()
