// Q63: Merge two arrays.
#include <stdio.h>

int main() {
    int n1, n2, n3, i, j;

    // Input size of first array
    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array size
    n3 = n1 + n2;
    int merged[n3];

    // Copy elements of arr1
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of arr2
    for (j = 0; j < n2; j++) {
        merged[i] = arr2[j];
        i++;
    }

    // Display merged array
    printf("Merged array is:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}