/*************************************************************/
/** Author: Ahmed Mostafa Ahmed Mostafa                     **/
/** Version: V01                                            **/
/** Date: 12 February 2022                                  **/
/*************************************************************/

/****************************************************
* Describtion about the stats.h file.
* This file contains the standard types of data types
* like unsigned int and unsigned character
* and also the prototypes of functions.
* 1) print_statistics
* 2) print_array
* 3) find_median
* 4) find_mean
* 5) find_maximum
* 6) find_minimum
* 7) sort_array
******************************************************/

/* Preprocessor File Guard */

#ifndef STATS_H_
#define STATS_H_

/*Standard types*/

typedef unsigned char   u8;
typedef signed char     s8;

typedef unsigned short int u16;
typedef signed short int s16;

typedef unsigned long int u32;
typedef signed long int s32;

typedef float f32;
typedef double f64;


/***********************************************************************/
/****************************************************************** 
* Function that print Statistics: mean, median, minimum and maximum 
* This Function takes two inputs: Array itself which is pointer to usigned char
* and it is 8 bits.
* and its length which is unsigned short int and it is 16 bits.
* 
*it returns nothing as it is void.
********************************************************************/
void print_statistics(u8* copy_u8Array, u16 copy_u16ArrayLength);



/*******************************************************************
* Function that Print array 
* This Function takes two inputs: Array itself which is pointer to usigned char
* and it is 8 bits.
* and its length which is unsigned short int and it is 16 bits.
* 
*it returns nothing as it is void.
*******************************************************************/
void print_array(u8* copy_u8Array, u16 copy_u16ArrayLength);



/****************************************************************** 
* Function that return median of array 
* This Function takes two inputs: Array itself which is pointer to usigned char
* and it is 8 bits.
* and its length which is unsigned short int and it is 16 bits.
* 
*it returns float no and it is 32 bits.
******************************************************************/
f32 find_median(u8* copy_u8Array, u16 copy_u16ArrayLength);



/******************************************************************
*Function that return mean
* This Function takes two inputs: Array itself which is pointer to usigned char
* and it is 8 bits.
* and its length which is unsigned short int and it is 16 bits.
* 
*it returns float no and it is 32 bits.
******************************************************************/
f32 find_mean(u8* copy_u8Array, u16 copy_u16ArrayLength);



/******************************************************************
* Function that return maximum of array
* This Function takes two inputs: Array itself which is pointer to usigned char
* and it is 8 bits.
* and its length which is unsigned short int and it is 16 bits.
* 
*it returns unsigned char and it is 8 bits.
******************************************************************/
u8 find_maximum(u8* copy_u8Array, u16 copy_u16ArrayLength);



/*****************************************************************
* Function that return minimum of array
* This Function takes two inputs: Array itself which is pointer to usigned char
* and it is 8 bits.
* and its length which is unsigned short int and it is 16 bits.
* 
*it returns unsigned char and it is 8 bits.
*****************************************************************/
u8 find_minimum(u8* copy_u8Array, u16 copy_u16ArrayLength);



/*****************************************************************
* Function that sort array from large to small
* This Function takes two inputs: Array itself which is pointer to usigned char
* and it is 8 bits.
* and its length which is unsigned short int and it is 16 bits.
* 
*it returns nothing as it is void.
*****************************************************************/
void sort_array(u8* copy_u8Array, u16 copy_u16ArrayLength);


/*********************************************************************/
#endif
