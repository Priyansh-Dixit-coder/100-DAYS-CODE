// Q51: Write a program to print the following pattern: 
//5 
//45 
//345 
//2345 
//12345
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {              
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}