// Q48: Write a program to print the following pattern: 
//1 
//12 
//123 
//1234 
//12345
#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {         // Outer loop for rows
        for (j = 1; j <= i; j++) {     // Inner loop for numbers
            printf("%d", j);
        }
        printf("\n");  // Move to next line
    }

    return 0;
}