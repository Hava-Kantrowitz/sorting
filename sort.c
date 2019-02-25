#include <stdio.h>
#include <sys/time.h>
#include "sort.h"

/** Prints an array of integers, one per line.
 * @param nums Array to print
 * @param count Number of elements to print
 */

void print_int_array(int nums[], int count) {
  int i; // Loop counter
  for (i = 0; i < count; i++) {
    printf("%d\n", nums[i]); // Print each array element in turn
  }
}

/** Sorts an array of integers into descending order.
 * Uses the bubble sort algorithm.
 *
 * @param nums Array to print
 * @param count Number of elements to print
 */

void sort_descending(int nums[], int count) {
  printf("First sorting mechanism.\n");
  int round; // How many times left to go through the outer loop.
  int i; // Loop counter for the inner loop
  int inorder; // Used as a boolean (logical). 1 = array is in correct order.
  int temp; // Temporary variable used while swapping array elements

  inorder = 0; // Assume not sorted at the beginning

  // Repeat outer loop, one time less than the size of the array.
  // Terminate early if array is in correct order.
  for(round = count - 1; (round > 0) && (!inorder); round--) {
    inorder = 1; // Assume in correct order, until found otherwise.
    // Repeat inner loop, testing array elements 0 through round
    for (i = 0; i < round; i++) {
      // Compare two adjacent elements of the array
      if (nums[i] < nums[i+1]) {
	// Not in correct relative order, so swap.
	inorder = 0; // At least one pair had to be swapped
	temp = nums[i]; // Swap!
	nums[i] = nums[i+1];
	nums[i+1] = temp;
      }
    }
  }
}

/** Sorts an array of integers into descending order.
 * Uses the bubble sort algorithm.
 * Uses pointer arithmetic to access array elements
 *
 * @param nums Array to print
 * @param count Number of elements to print
 */

void sort_pointer(int nums[], int count) {
  printf("Second sorting mechanism.\n");
  int round; // How many times left to go through the outer loop.
  int i; // Loop counter for the inner loop
  int inorder; // Used as a boolean (logical). 1 = array is in correct order.
  int temp; // Temporary variable used while swapping array elements

  inorder = 0; // Assume not sorted at the beginning

  // Repeat outer loop, one time less than the size of the array.
  // Terminate early if array is in correct order.
  for(round = count - 1; (round > 0) && (!inorder); round--) {
    inorder = 1; // Assume in correct order, until found otherwise.
    // Repeat inner loop, testing array elements 0 through round
    for (i = 0; i < round; i++) {
      // Compare two adjacent elements of the array
      if (*(nums+i) < *(nums+i+1)) {
	// Not in correct relative order, so swap.
	inorder = 0; // At least one pair had to be swapped
	temp = *(nums+i); // Swap!
	*(nums+i) = *(nums+i+1);
	*(nums+i+1) = temp;
      }
    }
  }
}

/** Sorts an array of integers into descending order.
 * Uses the bubble sort algorithm.
 * Uses incrementing pointers to access elements of array
 *
 * @param nums Array to print
 * @param count Number of elements to print
 */

void sort_incrementing(int nums[], int count) {
	printf("Third sorting mechanism.\n");
	int round; // How many times left to go through the outer loop.
	int i; // Loop counter for the inner loop
	int inorder; // Used as a boolean (logical). 1 = array is in correct order.
	int temp; // Temporary variable used while swapping array elements

	inorder = 0; // Assume
	int* pointer = nums;

	// Repeat outer loop, one time less than the size of the array.
	// Terminate early if array is in correct order.
	for(round = count - 1; (round > 0) && (!inorder); round--) {
	  inorder = 1; // Assume in correct order, until found otherwise.
	  // Repeat inner loop, testing array elements 0 through round
	  for (i = 0; i < round; i++) {
	    // Compare two adjacent elements of the array
	    if (*(nums+i) < *(nums+i+1)) {
	    	//pointer--;
	    	// Not in correct relative order, so swap.
	    	inorder = 0; // At least one pair had to be swapped
	    	temp = *(nums+i); // Swap!
	    	*(nums+i) = *(nums+i+1);
	    	*(nums+i+1) = temp;
	      }
	    //pointer++;
	    }
	  }
	}

/** Prints the contents of a timeval struct.
 * @param t Struct to print.
 */
void print_timeval(struct timeval t) {
  printf("Seconds: %ld, Microseconds: %ld\n", t.tv_sec, t.tv_usec);
}

/** Calculates difference between two timestamps. 
 * Note that this takes structs as parameters and returns a struct;
 * it does not use pointers.
 * @param time1 A time stamp
 * @param time2 another timestamp (assumed same as or later than time 1)
 * @return A timeval struct representing time2 - time1
 */
struct timeval timediff(struct timeval time1, struct timeval time2) {
  struct timeval diff;

  if(time2.tv_usec > time1.tv_usec){
	  suseconds_t negDiff = time1.tv_usec - time2.tv_usec;
	  time_t secDiff = time1.tv_sec - time2.tv_sec;
	  diff.tv_sec = secDiff - 1;
	  if (diff.tv_sec < 0){
		  diff.tv_sec = 0;
	  }
	  diff.tv_usec = 1000000 + negDiff;
  }

  else{
	  diff.tv_sec = time1.tv_sec-time2.tv_sec;
	  diff.tv_usec = time1.tv_usec-time2.tv_usec;
  }

  return diff;
}
