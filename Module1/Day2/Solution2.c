/* Write a program to swap any type of data passed to an function.*/

#include <stdio.h>

void swap(void *a, void *b) {
  // Cast the pointers to the appropriate type
  int *pa = (int *)a;
  int *pb = (int *)b;

  // Swap the values pointed to by the pointers
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}

int main() {
  // Declare two variables of different types
  int x = 10;
  double y = 20.0;

  // Pass the addresses of the variables to the swap function
  swap(&x, &y);

  // Print the values of the variables after swapping
  printf("x = %d\n", x);
  printf("y = %lf\n", y);

  return 0;
}
