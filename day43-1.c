
//Q85: Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;

    printf("Enter a string: ");
    gets(str);  // or use fgets for safety

    len = strlen(str);

    // reverse
    j = 0;
    for(i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';  // null terminate

    printf("Reversed string: %s\n", rev);

    return 0;
}