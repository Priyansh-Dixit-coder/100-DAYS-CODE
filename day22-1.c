// Q43: Write aprogram to check if a number is a strong number.
#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // store original number

   
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}