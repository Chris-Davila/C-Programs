/******************************************************************************
 * Programmer: Chris Davila
 * Course: CS 271 M01
 * Date: February 24, 2020
 * Purpose: This program makes use of the functions defined in arrayfunctions.c
 *    The functions are tested for validity by having them called from within
 *    this program. The expected output is returned and printed onto the screen
 *
 ******************************************************************************/
#include <stdio.h>
#include "arrayfunctions.h"

int main() {
    
    int nums[20];
    char chars[51];
    char c;
    float floats[10];
    char *wordArray[20] = { "one", "two", "three", "four", "five", "six",
                            "seven", "eight", "nine", "ten", "eleven",
			    "twelve", "thirteen", "fourteen", "fifteen",
			    "sixteen", "seventeen", "eighteen",
			    "nineteen", "twenty" };
    
    printf("Problem 1:");
    
    fillInteger( nums, 20, -20, 20 );
    
    for( int i = 0; i < 20; i++ ) {
        
        if ( i % 10 == 0 )
            printf("\n");
        
        printf("%d ", nums[i]);
    
    } // end for()
    
    printf("\n");

    findConsecutive( nums, 20 );

    printf("Problem 2:\n");

    fillCharacter( chars, 51, 'A', 'F' );

    for( int i = 0; chars[i] != '\0'; i++ )

      printf("%c ", chars[i]);

    printf("\n");

    findTriples( chars, 51 );

    printf("Problem 3:\n");

    printf("Please enter a lowercase letter: ");

    c = getchar();

    if ( c >= 'A' && c <= 'Z' )

      c = c + 32;

    while ( c < 'a' || c > 'z' ) {

      printf("Please enter a lowercase letter: ");
      c = getchar();

    } // end while()

    findWords( wordArray, 20, c );

    printf("Problem 4:\n");

    fillFloat( floats, 10, 10, 500 );

    for ( int i = 0; i < 10; i++ )
      printf( "%.1f  ", floats[i] );

    printf("\n");

    printf("The mean is: %.2f\n", floatMean( floats, 10 ));

    printf("The minimum value is: %.2f\n", floatMin( floats, 10 ));

    printf("The maximum value is: %.2f\n", floatMax( floats, 10 ));
    
} // end main()
