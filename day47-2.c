// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);  

    int maxLen = 0, currentLen = 0;
    int startIndex = 0, maxStartIndex = 0;

    for (int i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
            if (currentLen == 0) startIndex = i; 
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIndex = startIndex;
            }
            currentLen = 0;

            if (sentence[i] == '\0') break; 
        }
    }

    for (int i = maxStartIndex; i < maxStartIndex + maxLen; i++) {
        printf("%c", sentence[i]);
    }
    printf("\n");

    return 0;
}