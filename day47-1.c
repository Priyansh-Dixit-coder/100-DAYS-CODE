
// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CHAR_RANGE 256 
int areAnagrams(char str1[], char str2[]) {

    if (strlen(str1) != strlen(str2))
        return 0;

    int count[CHAR_RANGE] = {0}; 

    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}