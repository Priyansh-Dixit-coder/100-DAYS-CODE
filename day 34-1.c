//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, element;

    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert and position
    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = element;
        n++;

        // Print updated array
        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}