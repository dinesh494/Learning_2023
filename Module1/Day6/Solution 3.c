/* Write a function to display all members in the above array of structures */

#include <stdio.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void display_students(struct Student *students, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Rollno: %d, Name: %s, Marks: %.2f\n", students[i].rollno,
           students[i].name, students[i].marks);
  }
}

int main() {
  struct Student students[2];
  initialize_students(students, 2);
  display_students(students, 2);
  return 0;
}
