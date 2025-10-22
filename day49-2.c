// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[201];
    char words[20][50]; 
    int wordCount = 0;

    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    char *token = strtok(name, " ");
    while (token != NULL) {
        strcpy(words[wordCount++], token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < wordCount - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    printf("%s\n", words[wordCount - 1]);

    return 0;
}