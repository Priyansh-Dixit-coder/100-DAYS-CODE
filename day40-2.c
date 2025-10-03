//Q80:Multiply two matrices.
#include <stdio.h>

int main() {
    int m, n, p, q;
    
    // Input dimensions of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    
    // Input dimensions of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);
    
    // Check if multiplication possible
    if (n != p) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    
    int A[m][n], B[p][q], C[m][q];
    
    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    // Initialize result matrix with 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }
    
    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Print result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}