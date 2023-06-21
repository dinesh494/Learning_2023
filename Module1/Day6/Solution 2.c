/*Write a function to initialize all members in the above array of structures*/

#include <stdio.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void initialize_students(struct Student *students, int n) {
  int i;
  for (i = 0; i < n; i++) {
    students[i].rollno = 0;
    strcpy(students[i].name, "");
    students[i].marks = 0.0;
  }
}

int main() {
  struct Student students[2];
  initialize_students(students, 2);
  for (int i = 0; i < 2; i++) {
    printf("Rollno: %d, Name: %s, Marks: %.2f\n", students[i].rollno,
           students[i].name, students[i].marks);
  }
  return 0;
}
