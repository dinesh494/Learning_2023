
/*  Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90*/


#include <stdio.h>

int main() {
  int a[] = {10, 20, 30, 40, 50};
  int n = sizeof(a) / sizeof(a[0]);
  int sum = 0;

  for (int i = 0; i < n; i += 2) {
    sum += a[i];
  }

  printf("The sum of alternate elements is %d\n", sum);

  return 0;
}
