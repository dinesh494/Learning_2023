/*Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986*/

#include <stdio.h>

int deleteDigit(int n) {
    int maxNumber = 0;

    for (int i = 0; i < 4; i++) {
        int temp = n / (int) pow(10, i + 1) * (int) pow(10, i) + n % (int) pow(10, i);
        if (temp > maxNumber) {
            maxNumber = temp;
        }
    }

    return maxNumber;
}

int main() {
    int n;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    int largestNumber = deleteDigit(n);

    printf("The largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}
