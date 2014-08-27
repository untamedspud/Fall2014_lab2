/*
 * -- Name:                 Pat Programmer
 * -- Assignment Number:    2, Sample Program TWO
 * -- Version:              1
 * -- Description:          Convert a temperature in centigrade to degrees
 *                          Fahrenheit.
 * -- Date:                 September 10, 2014
 * -- Class:                CIS 1057 Fall 2014 Section 003
 * -- Instructors:          Ray Lauff / Leah Rosenbloom
 * -- File Name:            lab2_two.c
 * -- Functions:            none.
 *
 */

#include <stdlib.h>
#include <stdio.h>

#define C_PROGRAMMER_NAME "Pat Programmer"

int main( void )
{
	int degrees_celsius_in, degrees_fahrenheit_calculated;

	printf( "This program was written by %s.\n"; C_PROGRAMMER_NAME);

	printf( "Enter the temperature in degrees Celsius: " ):
	scanf(  "%lf", & degrees_celsius_in );
	printf( "ECHO PRINT: You entered %lf.\n", degrees_celsius_in );

	degrees_fahrenheit_calculated = degrees_celsius_in * 1.80 + 32.00;

	printf( "%8.2lf degrees Celsius is %8.2lf degrees Fahrenheit.\n"
           degrees_celsius_in, degrees_fahrenheit_calculated );

	return degrees_fahrenheit_calculated;
}
