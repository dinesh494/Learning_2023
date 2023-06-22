/*File Copy: Write a C program to copy a file using file operations*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Check if the user has provided two arguments
  if (argc != 3) {
    printf("Usage: %s C:\Users\dines\Desktop\Study\Activities\Learning_2023\Module1\Day7\text.txt C:\Users\dines\Desktop\Study\Activities\Learning_2023\Module1\Day7\text.txt\n", argv[0]);
    return 1;
  }

  // Open the source file in read mode
  FILE *source = fopen(argv[1], "r");
  if (source == NULL) {
    printf("Could not open source file: %s\n", argv[1]);
    return 1;
  }

  // Open the target file in write mode
  FILE *target = fopen(argv[2], "w");
  if (target == NULL) {
    printf("Could not open target file: %s\n", argv[2]);
    return 1;
  }

  // Read a character from the source file
  char ch;
  while ((ch = fgetc(source)) != EOF) {
    // Write the character to the target file
    fputc(ch, target);
  }

  // Close the source and target files
  fclose(source);
  fclose(target);

  // Print a success message
  printf("File copied successfully.\n");

  return 0;
}
