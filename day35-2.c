// Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], rotated[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k (number of rotations): ");
    scanf("%d", &k);

    // To handle cases where k > n
    k = k % n;

    // Rotate array to the right by k
    for(i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}