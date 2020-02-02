/******************************************************************************
 * Copyright (C) 2020 by Vlad Cioaba
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Vlad Cioaba is not liable for any misuse of this material. 
 *
 *
 *****************************************************************************/

/**
 * @file stats.h
 * @brief Utility functions for various statistics calculations.
 *
 * @author Vlad Cioaba
 * @date 26/01/2020
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array.
 *
 * The statistics printed include minimum, maximum, mean, and median.
 *
 * @param unsigned char[] 	the array
 * @param unsigned int 		length of the array
 *
 */

void print_statistics(unsigned char arr[], unsigned int len);

/**
 * @brief Function to print arrays on stdout.
 *
 * Given an array of data and a length, prints the array to the screen.
 *
 * @param unsigned char[] 	the array
 * @param unsigned int 		length of the array
 *
 */

void print_array(unsigned char arr[], unsigned int len);

/**
 * @brief Function to return median value of an array. 
 *
 * Given an array of data and a length, returns the median value.
 *
 * @param unsigned char[] 	the array
 * @param unsigned int 		length of the array
 *
 * @return unsigned char 	median value
 */

unsigned char find_median(unsigned char arr[], unsigned int len);

/**
 * @brief Function to return mean value of an array. 
 *
 * Given an array of data and a length, returns the mean value.
 *
 * @param unsigned char[] 	the array
 * @param unsigned int 		length of the array
 *
 * @return unsigned char 	mean value
 */

unsigned char find_mean(unsigned char arr[], unsigned int len);

/**
 * @brief Function to return maximum value of an array. 
 *
 * Given an array of data and a length, returns the maximum value.
 *
 * @param unsigned char[] 	the array
 * @param unsigned int 		length of the array
 *
 * @return unsigned char 	maximum value
 */

unsigned char find_maximum(unsigned char arr[], unsigned int len);

/**
 * @brief Function to return minimum value of an array.
 *
 * Given an array of data and a length, returns the minimum value.
 *
 * @param unsigned char[] 	the array
 * @param unsigned int 		length of the array
 *
 * @return unsigned char 	minimum value
 */

unsigned char find_minimum(unsigned char arr[], unsigned int len);

/**
 * @brief Function to sort an array in descending order. 
 *
 * Given an array of data and a length, sorts the array from largest to smallest.
 * The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.
 *
 * @param unsigned char[] 	the array
 * @param unsigned int 		length of the array
 *
 */

void sort_array(unsigned char arr[], unsigned int len);

#endif /* __STATS_H__ */
