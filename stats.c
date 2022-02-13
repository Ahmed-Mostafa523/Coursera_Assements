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
	u8 Local_u8Min = find_minimum(copy_u8ArrayValue, copy_u16ArrLength);
	u8 Local_u8Max = find_maximum(copy_u8ArrayValue, copy_u16ArrLength);
	f32 Local_f32Mean = find_mean(copy_u8ArrayValue, copy_u16ArrLength);
	f32 Local_u8Median = find_median(copy_u8ArrayValue, copy_u16ArrLength);
	printf("\n*******************************************************\n");
	printf("The statistics of Data set: \n");
	printf("The Minimum value in Data set is %d.\n", Local_u8Min);
	printf("The Maximum value in Data set is %d.\n", Local_u8Max);
	printf("The Mean value in Data set is %f.\n", Local_f32Mean);
	printf("The Median value in Data set is %f.\n", Local_u8Median);
	printf("*******************************************************\n");
}
/* Function that Print array */
void print_array(u8* copy_u8Array, u16 copy_u16ArrayLength){
	for(int i=0; i<copy_u16ArrayLength; i++){
		printf("Value %d of array is ", i);
		printf("%d.", copy_u8Array[i]);
		printf("\n");
		printf("*******************************************************\n");
	}
}
/* Function that return median of array */

f32 find_median(u8* copy_u8Array, u16 copy_u16ArrayLength){
	f32 Local_f32Value;
	if(copy_u16ArrayLength%2==0){
		copy_u16ArrayLength-=1;
		f32 copy_u16ArrayLength1 =((f32)copy_u16ArrayLength/2.0)+0.5;
		f32 copy_u16ArrayLength2=((f32)copy_u16ArrayLength/2.0)-0.5;
		Local_f32Value= (f32)(copy_u8Array[(int)(copy_u16ArrayLength1)]+ copy_u8Array[(int)(copy_u16ArrayLength2)])/2.0;
	}
	else if(copy_u16ArrayLength%2!=0){
		Local_f32Value = copy_u8Array[(copy_u16ArrayLength-1)/2];

	}
	return Local_f32Value;
}
/* Function that return mean */

f32 find_mean(u8* copy_u8Array, u16 copy_u16ArrayLength){
	u16 Local_u16Sum=0;
	for(int i=0; i<copy_u16ArrayLength; i++){
		Local_u16Sum+= copy_u8Array[i];
	}
	return (f32)(Local_u16Sum)/copy_u16ArrayLength;
}
/* Function that return maximum of array */

u8 find_maximum(u8* copy_u8Array, u16 copy_u16ArrayLength){
	u8 Local_u8Max;
	for(int i=0; i<copy_u16ArrayLength; i++){
		if(copy_u8Array[i]>Local_u8Max){
			Local_u8Max = copy_u8Array[i];
		}
	}
	return Local_u8Max;
}
/* Function that return minimum of array */

u8 find_minimum(u8* copy_u8Array, u16 copy_u16ArrayLength){
	u8 Local_u8Min =copy_u8Array[0];
	for(int i =0; i<copy_u16ArrayLength; i++){
		if(copy_u8Array[i]< Local_u8Min){
			Local_u8Min = copy_u8Array[i];
		}

	}
	return Local_u8Min;
}
/* Function that sort array from large to small */

void sort_array(u8* copy_u8Array, u16 copy_u16ArrayLength){
	u8 Local_u8Temp;
	printf("\nThe sorted Data set: \n");
	printf("*****************************************\n");
	for(int i=0; i<copy_u16ArrayLength; i++){
		for(int j=0; j<copy_u16ArrayLength-1; j++){
			if(copy_u8Array[j]<copy_u8Array[j+1]){
				Local_u8Temp = copy_u8Array[j];
				copy_u8Array[j] = copy_u8Array[j+1];
				copy_u8Array[j+1] = Local_u8Temp;
			}

		}

	}

}
/*********************************************************************/
