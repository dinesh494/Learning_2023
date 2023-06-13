/*Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.*/

#include <stdio.h>

float calculate(float num1, char op, float num2) {

  // perform operation
  float result;
  switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator.\n");
      return 0;
  }

  return result;
}

int main() {

  // declare variables
  float num1, num2, result;
  char op;

  // get input from user
  printf("Enter number1: ");
  scanf("%f", &num1);

  printf("Enter operator: ");
  scanf(" %c", &op);

  printf("Enter number2: ");
  scanf("%f", &num2);

  // perform operation
  result = calculate(num1, op, num2);

  // print result
  printf("Result: %.2f\n", result);

  return 0;
}
