#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/* Program which reads a count from the command line and generates a random array of that many integers.
 * Sorts the random array according to the sorting function requested by user
 *
 * Usage:
 *         ./sorttest count sorting_function
 * Example:
 *         ./sorttest 100 2
 *
 */

/** Main program
 * @param argc Number of words on the command line
 * @param argv[] Array of character strings, the words from the command line.
 * @return 0 if success, 1 if error (wrong number of arguments)
 */

int main (int argc, const char* argv[]) {

  //srand(time(0));

  int *nums; // space to store numbers entered from the command line.

  int count; // Integer read from the command line goes here.
  count = atoi(argv[1]);
  int sortingFun;// Integer representing which sorting function to use (1, 2, 3) is stored here
  sortingFun = atoi(argv[2]);
  int i;

  // Allocate an array big enough to hold the numbers
  nums = (int*) calloc(count, sizeof(int));
  if (nums == NULL) {
    fprintf(stderr, "Unable to allocate enough memory to hold the numbers.\n");
  }

  /* Read all the numbers from the command line and put them into the array */
  for (i = 0; i < count; i++) {
	int randNum = (rand()%100) + 1;
    nums[i] = randNum;
  }

  // Now print, sort, and print the array, and time how long the sorting took.
  timesort(nums, count, sortingFun);

  return 0; // Indicate success!
}
