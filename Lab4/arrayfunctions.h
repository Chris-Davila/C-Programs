/*******************************************************************
 * Programmer: Chris Davila
 * Course: CS 271 M01
 * Date: February 24, 2020
 * Purpose: This program contains the headers for the functions that
 *    are written within the arrayfunctions.c file
 *
 *******************************************************************/

#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

void fillInteger( int[], int, int, int );

void fillCharacter( char[], int, char, char );

void findConsecutive( int[], int );

void findTriples( char[], int );

void findWords( char *[], int, char );

void fillFloat( float[], int, float, float );

float floatMean( float[], int );

float floatMin( float[], int );

float floatMax( float[], int );

#endif
