/*Q118: Write a program to take an input array of size n. 
The array should contain all the integers between 0 to n except for one. Print that missing number*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // The expected total for numbers 0 to n
    int expected_sum = n * (n + 1) / 2;

    // Find actual sum of array elements
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    // Missing number is difference
    int missing = expected_sum - actual_sum;

    printf("Missing number: %d\n", missing);
    return 0;
}
