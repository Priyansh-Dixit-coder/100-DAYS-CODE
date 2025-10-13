//Q90:Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str); 

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; 
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("Toggled string: %s\n", str);

    return 0;
}