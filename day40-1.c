// Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");
    // Traverse diagonals starting from first row
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < m && j >= 0) {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse diagonals starting from last column
    for (int row = 1; row < m; row++) {
        int i = row, j = n - 1;
        while (i < m && j >= 0) {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}