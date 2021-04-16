/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <This code perfoms statistical analysis on a dataset >
 *
 * <The code analyze an array of unsigned char data items and report analytics on
 * the maximum, minimum, mean, and median of the data set. In addition, the code
 * reorder this data set from large to small. All results are
 * rounded down to the nearest integer. After analysis and sorting is done,
 * the code prints that data to the screen>
 *
 * @author <Stephane NGNEPIEPAYE WEMBE>
 * @date <16/04/2021>
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char* arrayData, unsigned int arraySize){


}


void print_array(unsigned char* arrayData, unsigned int arraySize){

}


unsigned char find_median(unsigned char* arrayData, unsigned int arraySize){

}


unsigned char find_mean(unsigned char* arrayData, unsigned int arraySize){

}


unsigned char find_maximum(unsigned char* arrayData, unsigned int arraySize){

}


unsigned char find_minimum(unsigned char* arrayData, unsigned int arraySize){

}


void sort_array(unsigned char* arrayData, unsigned int arraySize){


}


