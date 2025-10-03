//Q81:Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input method
    
    // Count until null character
    while (str[count] != '\0') {
        count++;
    }
    
    // If newline is counted (because of fgets), adjust length
    if (str[count - 1] == '\n') {
        count--; 
    }

    printf("Number of characters in the string: %d\n", count);
    
    return 0;
}