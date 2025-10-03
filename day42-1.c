//Q83: Count vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets in modern code for safety

    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // convert to lowercase for easy checking
        if(isalpha(ch)) { // check only letters
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}