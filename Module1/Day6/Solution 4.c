/*Write a function to sort the array of structures in descending order based on marks */

#include <stdio.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void sort_students_by_marks(struct Student *students, int n) {
  int i, j;
  struct Student temp;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (students[i].marks < students[j].marks) {
        temp = students[i];
        students[i] = students[j];
        students[j] = temp;
      }
    }
  }
}

int main() {
  struct Student students[2];
  students[0].rollno = 1001;
  strcpy(students[0].name, "Aron");
  students[0].marks = 100.00;
  students[1].rollno = 1002;
  strcpy(students[1].name, "Ben");
  students[1].marks = 90.00;

  sort_students_by_marks(students, 2);

  printf("Sorted students in descending order based on marks:\n");
  for (int i = 0; i < 2; i++) {
    printf("Rollno: %d, Name: %s, Marks: %.2f\n", students[i].rollno,
           students[i].name, students[i].marks);
  }
  return 0;
}
