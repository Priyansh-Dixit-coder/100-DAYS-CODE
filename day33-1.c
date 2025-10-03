// Q65: Search in a sorted array using binary search.
#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2; // find middle index

        if (arr[mid] == key) {
            return mid; // key found at index mid
        }
        else if (arr[mid] < key) {
            low = mid + 1; // search in right half
        }
        else {
            high = mid - 1; // search in left half
        }
    }
    return -1; // key not found
}

int main() {
    int n, key, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at position %d\n", key, result + 1);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}