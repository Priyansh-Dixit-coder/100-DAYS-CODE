// Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int digit, i, maxDigit = 0, maxCount = 0;

    // Array to store frequency of each digit
    int freq[10] = {0};

    // Input number
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Count digit frequencies
    while (num > 0) {
        digit = num % 10;   // extract last digit
        freq[digit]++;      // increase its count
        num /= 10;          // remove last digit
    }

    // Find digit with maximum frequency
    for (i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most times: %d\n", maxDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}