/*Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };
    Note: User must be able define the no. of inputs/size of the array during runtime.
    */

#include <stdio.h>
#include <string.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

int parse_string(char *string, struct Student *students, int n) {
  int i;
  for (i = 0; i < n; i++) {
    char *token;
    token = strtok(string, " ");
    students[i].rollno = atoi(token);
    token = strtok(NULL, " ");
    strcpy(students[i].name, token);
    token = strtok(NULL, " ");
    students[i].marks = atof(token);
  }
  return 0;
}

int main() {
  char string[] = "1001 Aron 100.00 1002 Ben 90.00";
  struct Student students[2];
  parse_string(string, students, 2);
  for (int i = 0; i < 2; i++) {
    printf("Rollno: %d, Name: %s, Marks: %.2f\n", students[i].rollno,
           students[i].name, students[i].marks);
  }
  return 0;
}
