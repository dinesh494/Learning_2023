/*Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary. */

#include <stdio.h>

void get_details(int *roll_no, char *name, int *phy_marks, int *math_marks, int *chem_marks) {

  //input user
  printf("Enter roll number: ");
  scanf("%d", roll_no);

  printf("Enter full name of the student: ");
  scanf("%s", name);

  printf("Enter marks of Physics, Math and Chemistry: ");
  scanf("%d%d%d", phy_marks, math_marks, chem_marks);
}

float calculate_percentage(int total_marks) {

  // calculate percentage
  float percentage = (float)total_marks / 300 * 100;

  return percentage;
}

void print_summary(int roll_no, char *name, int total_marks, float percentage) {

  // print summary
  printf("\n");
  printf("Roll No: %d\n", roll_no);
  printf("Name: %s\n", name);
  printf("Total Marks: %d\n", total_marks);
  printf("Percentage: %.2f%%\n", percentage);
}

int main() {

  int roll_no, phy_marks, math_marks, chem_marks, total_marks;
  float percentage;
  char name[100];

  
  get_details(&roll_no, name, &phy_marks, &math_marks, &chem_marks);

  // calculate total marks
  total_marks = phy_marks + math_marks + chem_marks;

  // calculate percentage
  percentage = calculate_percentage(total_marks);

  // print summary
  print_summary(roll_no, name, total_marks, percentage);

  return 0;
}
