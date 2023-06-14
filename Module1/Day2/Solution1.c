/* Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110*/

#include <stdio.h>

void printExponent(double x) {
  // Get the pointer to the exponent part of the double variable
  unsigned char *exponentPointer = (unsigned char *)&x;

  // Get the exponent value
  unsigned char exponent = exponentPointer[1];

  // Convert the exponent value to hexadecimal
  char hexExponent[2];
  sprintf(hexExponent, "%02X", exponent);

  // Convert the exponent value to binary
  char binaryExponent[9];
  for (int i = 7; i >= 0; i--) {
    binaryExponent[i] = (exponent >> i) & 1;
  }

  // Print the exponent value in hexadecimal and binary format
  printf("Exponent in hexadecimal: 0x%s\n", hexExponent);
  printf("Exponent in binary: %s\n", binaryExponent);
}

int main() {
  // Initialize the double variable
  double x = 0.7;

  // Print the exponent part of the double variable
  printExponent(x);

  return 0;
}
