// Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Convert first character to uppercase
    if (str[i] != '\0')
        str[i] = toupper(str[i]);

    i++;

    // Convert next characters
    for (; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ') 
            str[i] = toupper(str[i]);
        else
            str[i] = str[i]; // do nothing
    }

    printf("%s", str);

    return 0;
}
