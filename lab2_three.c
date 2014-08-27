/*
 * -- Name:                 Pat Programmer
 * -- Assignment Number:    2, Sample Program THREE
 * -- Version:              1
 * -- Description:          Problem 8 on page 104 of the textbook.
 * -- Date:                 September 10, 2014
 * -- Class:                CIS 1057 Fall 2014 Section 003
 * -- Instructors:          Ray Lauff / Leah Rosenbloom
 * -- File Name:            lab2_three.c
 * -- Functions:            none.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define C_PROGRAMMER_NAME "Pat Programmer"

#define NUMBER_OF_DAILY_FLUSHES                16
#define WATER_USED_PER_FLUSH_IN_LITERS         15
#define LOW_FLUSH_MODEL_WATER_USED_IN_LITERS    2
#define TOILET_INSTALLATION_COST_IN_DOLLARS   150.00
#define PEOPLE_SERVICED_BY_ONE_TOILET           3



int maine( void )
{
    int city_population;
    int calculated_toilets_in_city;
    int calculated_single_toilet_water_consumption,     
        calculated_all_toilet_water_consumption,
        calculated_single_toilet_low_water_consumption, 
        calculated_all_low_water_consumption;


    
    printf( "This program was written by %s.\n" );


    
    // prompt for the city population, needed to calculate water usage.
    printf( 'Enter the population of Metro City: ' );
    scanf( "%lf", &city_population );
    


    // calculate estimate for current toilets.
    calculated_toilets_in_city = city_population / PEOPLE_SERVICED_BY_ONE_TOILET;

    calculated_single_toilet_water_consumption = 
			NUMBER_OF_DAILY_FLUSHES * WATER_USED_PER_FLUSH_IN_LITERS;

    calculated_all_toilet_water_consumption =
    			calculated_toilets_in_city * calculated_single_toilet_water_consumption;


    // output the current water usage
    printf( "\n\nThere are %d toilets in the city, each averaging %d liters "
			"of water used daily.\n",
           		calculated_toilets_in_city, calculated_single_toilet_water_consumption );

    printf( "The %d citizens of Metro City presently use %d liters of water per day.\n\n",
				calculated_all_toilet_water_consumption, city_population );
    

    

    // calculate estimate for the low flow toilets.
    calculated_single_toilet_low_water_consumption = 
			NUMBER_OF_DAILY_FLUSHES * LOW_FLUSH_MODEL_WATER_USED_IN_LITERS;

    calculated_all_low_water_consumption = 
			calculated_toilets_in_city * calculated_single_toilet_low_water_consumption;


    
    // output the future water usage
    printf( "The water used could be reduced to only %d liters of water "
            "per day with the low flush models.\n", 
				calculated_all_low_water_consumption );


    printf( "The savings in water would be %d liters per day.\n",
           calculated_all_toilet_water_consumption - calculated_all_low_water_consumption);


    printf( "It would cost $%0.2lf to replace all %d toilets in the city.\n", 
                calculated_toilets_in_city * TOILET_INSTALLATION_COST_IN_DOLLARS,
			    calculated_toilets_in_city );

    
    return EXIT_SUCCESS;
}
