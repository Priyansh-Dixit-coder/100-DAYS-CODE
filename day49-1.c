// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[101];
    
    fgets(name, sizeof(name), stdin);

    if (isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
    }

    for (int i = 1; name[i] != '\0'; i++) {
       
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}