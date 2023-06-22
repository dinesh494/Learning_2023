#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct log_entry {
  int entry_no;
  char sensor_no[10];
  float temperature;
  int humidity;
  int light;
  char timestamp[20];
};

int main() {
  // Open the csv file in read mode
  FILE *file = fopen("data.csv", "r");
  if (file == NULL) {
    printf("Could not open file: data.csv\n");
    return 1;
  }

  // Create an array of log entries
  struct log_entry entries[100];
  int num_entries = 0;

  // Read each line in the file
  char line[100];
  while (fgets(line, sizeof(line), file)) {
    // Split the line into its constituent parts
    char *token = strtok(line, ",");
    int i = 0;
    while (token != NULL) {
      switch (i) {
        case 0:
          entries[num_entries].entry_no = atoi(token);
          break;
        case 1:
          strcpy(entries[num_entries].sensor_no, token);
          break;
        case 2:
          entries[num_entries].temperature = atof(token);
          break;
        case 3:
          entries[num_entries].humidity = atoi(token);
          break;
        case 4:
          entries[num_entries].light = atoi(token);
          break;
        case 5:
          strcpy(entries[num_entries].timestamp, token);
          break;
      }
      i++;
      token = strtok(NULL, ",");
    }
    num_entries++;
  }

  // Display the contents of the array of structures
  for (int i = 0; i < num_entries; i++) {
    printf("Entry No: %d\n", entries[i].entry_no);
    printf("Sensor No: %s\n", entries[i].sensor_no);
    printf("Temperature: %.2f\n", entries[i].temperature);
    printf("Humidity: %d\n", entries[i].humidity);
    printf("Light: %d\n", entries[i].light);
    printf("Timestamp: %s\n", entries[i].timestamp);
  }

  // Close the file
  fclose(file);

  return 0;
}
