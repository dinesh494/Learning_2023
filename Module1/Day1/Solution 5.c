/*Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type); */

#include <stdio.h>

int bit_operations(int num, int oper_type) {

  // check operation type
  if (oper_type == 1) {
    // set 1st bit
    num = num | (1 << 0);
  } else if (oper_type == 2) {
    // clear 31st bit
    num = num & ~(1 << 31);
  } else if (oper_type == 3) {
    // toggle 16th bit
    num = num ^ (1 << 16);
  } else {
    printf("Invalid operation type.\n");
    return 0;
  }

  return num;
}

int main() {

  // declare variables
  int num, oper_type, result;

  // get input from user
  printf("Enter number: ");
  scanf("%d", &num);

  printf("Enter operation type: ");
  scanf("%d", &oper_type);

  // perform operation
  result = bit_operations(num, oper_type);

  // print result
  printf("Result: %d\n", result);

  return 0;
}
