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
 * @file stats.c
 * @brief Implementation of some utility functions for various statistic calculations.
 *
 * @author Vlad Cioaba
 * @date 26/01/2020
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char arr[], unsigned int len) {
  printf("initial array:\n");
  print_array(arr, len);
  printf("\n");
  printf("maximum: %d\n", find_maximum(arr, len));
  printf("minimum: %d\n", find_minimum(arr, len));
  printf("\n");
  sort_array(arr, len);
  printf("sorted array:\n");
  print_array(arr, len);
  printf("\n");
  printf("median: %f\n", find_median(arr, len));
  printf("mean: %f\n", find_mean(arr, len));
}

void print_array(unsigned char arr[], unsigned int len) {
  if (len) {
    const unsigned short maxrow = len+1;
    for (unsigned int i = 0; i < len; ++i) {
      if ((i+1) % maxrow == 0) {
        printf("\n");
      }
      printf("%i", arr[i]);
      if (i < len - 1) {
        printf(",");
      }
    }
  }
}

double find_median(unsigned char arr[], unsigned int len) {
  double median = 0;
  if (len) {
    if (len % 2 == 0) {
      median = (arr[(len-1)/2] + arr[(len-1)/2])/2.f;
    } else {
      median = arr[len/2];
    }
  }
  return median;
}

double find_mean(unsigned char arr[], unsigned int len) {
  if (len) {
    unsigned long sum = 0;
    for (unsigned int i = 0; i < len; ++i) {
      sum += arr[i];
    }
    return sum / (double)len;
  }
  return 0;
}

unsigned char find_maximum(unsigned char arr[], unsigned int len) {
  unsigned char maxc = 255;
  if (len) {
    for (unsigned int i = 0; i < len; ++i) {
      if (maxc > arr[i]) {
        maxc = arr[i];
      }
    }
  }
  return maxc;
}

unsigned char find_minimum(unsigned char arr[], unsigned int len) {
  if (len) {
    unsigned char minc = 0;
    for (unsigned int i = 0; i < len; ++i) {
      if (minc < arr[i]) {
        minc = arr[i];
      }
    }
    return minc;
  }
  return 0;
}

void sort_array(unsigned char arr[], unsigned int len) {
  // simple bubblesort
  for (unsigned int i = 0; i < len; ++i) {
    for (unsigned int j = 0; j < len-1; ++j) {
      if (arr[j]<arr[j+1]) {
        char t = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = t;
      }
    }
  }
}

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test, SIZE);

  return 0;
}
