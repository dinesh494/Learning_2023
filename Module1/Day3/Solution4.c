/*Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5*/

#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;
    int largestDigit = 0;

    for (int i = 0; i < n; i++) {
        int temp = numbers[i];

        while (temp > 0) {
            int digit = temp % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            temp /= 10;
        }
    }

    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int numbers[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}
