#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Check if the user has provided two arguments
  if (argc != 3) {
    printf("Usage: %s C:\Users\dines\Desktop\Study\Activities\Learning_2023\Module1\Day7\text.txt C:\Users\dines\Desktop\Study\Activities\Learning_2023\Module1\Day7\text.txt\n", argv[0]);
    return 1;
  }

  // Check the case handling option
  char *option = argv[1];
  if (strcmp(option, "-u") == 0) {
    // Upper case
    handle_case(argv[2], UPPER);
  } else if (strcmp(option, "-l") == 0) {
    // Lower case
    handle_case(argv[2], LOWER);
  } else if (strcmp(option, "-s") == 0) {
    // Sentence case
    handle_case(argv[2], SENTENCE);
  } else {
    // Normal copy
    handle_case(argv[2], NORMAL);
  }

  return 0;
}

void handle_case(char *file_name, int case_type) {
  // Open the source file in read mode
  FILE *source = fopen(file_name, "r");
  if (source == NULL) {
    printf("Could not open source file: %s\n", file_name);
    return;
  }

  // Open the target file in write mode
  FILE *target = fopen("target.txt", "w");
  if (target == NULL) {
    printf("Could not open target file: target.txt\n");
    return;
  }

  // Read a character from the source file
  char ch;
  while ((ch = fgetc(source)) != EOF) {
    // Convert the character to the desired case
    switch (case_type) {
      case UPPER:
        ch = toupper(ch);
        break;
      case LOWER:
        ch = tolower(ch);
        break;
      case SENTENCE:
        if (ch == ' ') {
          ch = toupper(ch);
        }
        break;
      case NORMAL:
        break;
    }

    // Write the character to the target file
    fputc(ch, target);
  }

  // Close the source and target files
  fclose(source);
  fclose(target);
}

enum case_type {
  NORMAL,
  UPPER,
  LOWER,
  SENTENCE,
};
