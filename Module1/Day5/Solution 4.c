/*write a program to Store Data for n students in Structures Dynamically.*/

#include <stdio.h>
#include <stdlib.h>

struct student {
  char name[50];
  int roll;
  float marks;
};

void main() {
  int n;
  struct student *s;

  printf("Enter the number of students: ");
  scanf("%d", &n);

  s = (struct student *)malloc(n * sizeof(struct student));

  for (int i = 0; i < n; i++) {
    printf("Enter the name of student %d: ", i + 1);
    fgets(s[i].name, sizeof(s[i].name), stdin);
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &s[i].roll);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &s[i].marks);
  }

  for (int i = 0; i < n; i++) {
    printf("Name of student %d: %s\n", i + 1, s[i].name);
    printf("Roll number of student %d: %d\n", i + 1, s[i].roll);
    printf("Marks of student %d: %.1f\n", i + 1, s[i].marks);
  }

  free(s);
}
