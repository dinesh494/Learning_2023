/*Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F" */

#include <stdio.h>

int main() {

  int marks;

  // take input from the user
  printf("Enter the marks: ");
  scanf("%d", &marks);

  // check the marks and print the grade
  if (marks >= 90 && marks <= 100) {
    printf("Grade A\n");
  } else if (marks >= 75 && marks <= 89) {
    printf("Grade B\n");
  } else if (marks >= 60 && marks <= 74) {
    printf("Grade C\n");
  } else if (marks >= 50 && marks <= 59) {
    printf("Grade D\n");
  } else {
    printf("Grade F\n");
  }

  return 0;
}
