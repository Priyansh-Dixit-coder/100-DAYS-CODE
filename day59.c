/* Q109: Write a program to take an integer array arr and an integer k as inputs.
 Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    int maxSum = 0, windowSum = 0;

    // Find sum of first 'k' elements
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
