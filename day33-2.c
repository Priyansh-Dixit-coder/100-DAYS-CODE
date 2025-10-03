
// Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, num, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assuming max size 100
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    // find correct position from right side
    for (i = n - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i]; // shift elements
    }
    arr[i + 1] = num; // insert element
    n++; // increase size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}