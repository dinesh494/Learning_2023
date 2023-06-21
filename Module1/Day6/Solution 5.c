/*Write a function to perform a search operation on the array of structures based on name of the student*/

#include <stdio.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

int search_student_by_name(struct Student *students, int n, char *name) {
  int i;
  for (i = 0; i < n; i++) {
    if (strcmp(students[i].name, name) == 0) {
      return i;
    }
  }
  return -1;
}

int main() {
  struct Student students[2];
  students[0].rollno = 1001;
  strcpy(students[0].name, "Aron");
  students[0].marks = 100.00;
  students[1].rollno = 1002;
  strcpy(students[1].name, "Ben");
  students[1].marks = 90.00;

  int index = search_student_by_name(students, 2, "Aron");
  if (index == -1) {
    printf("Student not found.\n");
  } else {
    printf("Student found at index: %d\n", index);
    printf("Rollno: %d, Name: %s, Marks: %.2f\n", students[index].rollno,
           students[index].name, students[index].marks);
  }
  return 0;
}
