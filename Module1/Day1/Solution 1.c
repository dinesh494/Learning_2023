/* Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator*/

#include<stdio.h>

int main(){
   
  int a, b, max;

  // take input from the user
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  // find the biggest number using if else
  if (a > b) {
    max = a;
  } else {
    max = b;
  }

  // find the biggest number using ternary operator
  max = (a > b) ? a : b;

  // print the biggest number
  printf("The biggest number is %d\n", max);

  return 0;
}
