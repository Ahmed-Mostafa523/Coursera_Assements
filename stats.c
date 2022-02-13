/*************************************************************/
/** Author: Ahmed Mostafa Ahmed Mostafa                     **/
/** Version: V01                                            **/
/** Date: 12 February 2022                                  **/
/*************************************************************/

/****************************************************
* Describtion about the stats.c file.
* This file contains the implementation of functions.
* 1) print_statistics
* 2) print_array
* 3) find_median
* 4) find_mean
* 5) find_maximum
* 6) find_minimum
* 7) sort_array
* and also the main function which has the sequence of code.
******************************************************/

#include <stdio.h>
#include "stats.h"

int main(void){
	u8 testing_values[10] = {2,5,8,9,14,23,54,65,87,14};
	print_array(testing_values, 10);
	print_statistics(testing_values, 10);
	sort_array(testing_values, 10);
	print_array(testing_values, 10);
	return 0;
}

/** Implementation of the Functions **/
/***********************************************************************/
/* Function that print Statistics: mean, median, minimum and maximum */
void print_statistics(u8* copy_u8ArrayValue, u16 copy_u16ArrLength){

}
/* Function that Print array */
void print_array(u8* copy_u8Array, u16 copy_u16ArrayLength){

}
/* Function that return median of array */

f32 find_median(u8* copy_u8Array, u16 copy_u16ArrayLength){

}
/* Function that return mean */

f32 find_mean(u8* copy_u8Array, u16 copy_u16ArrayLength){

}
/* Function that return maximum of array */

u8 find_maximum(u8* copy_u8Array, u16 copy_u16ArrayLength){

}
/* Function that return minimum of array */

u8 find_minimum(u8* copy_u8Array, u16 copy_u16ArrayLength){

}
/* Function that sort array from large to small */

void sort_array(u8* copy_u8Array, u16 copy_u16ArrayLength){

}
/*********************************************************************/
