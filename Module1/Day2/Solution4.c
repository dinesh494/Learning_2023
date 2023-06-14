/*Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits*/

#include <stdio.h>

int countSetBits(unsigned int x) {
  // Initialize the count variable
  int count = 0;

  // Loop through all the bits in the number
  while (x > 0) {
    // If the current bit is set, increment the count
    if (x & 1) {
      count++;
    }

    // Shift the number to the right by 1 bit
    x >>= 1;
  }

  // Return the count
  return count;
}

int main() {
  // Initialize the array
  unsigned int a[] = {0x1, 0xF4, 0x10001};

  // Initialize the total count variable
  int totalCount = 0;

  // Loop through all the elements in the array
  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    // Count the number of set bits in the current element
    int count = countSetBits(a[i]);

    // Add the count to the total count
    totalCount += count;
  }

  // Print the total count
  printf("The total number of set bits is %d\n", totalCount);

  return 0;
}
