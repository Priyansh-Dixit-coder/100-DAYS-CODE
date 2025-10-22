/*Q113: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/

#include <stdio.h>

// Function to sort array using simple bubble sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    if(k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }

    bubbleSort(arr, n); // sort the array
    printf("%d\n", arr[k-1]); // kth smallest element (0-based index)
    
    return 0;
}
