// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

//*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


void reverse(char* str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1001];
    
   
    fgets(sentence, sizeof(sentence), stdin);

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    int i = 0;
    while (sentence[i] != '\0') {
      
        if (isspace(sentence[i])) {
            i++;
            continue;
        }

        int start = i;
        while (sentence[i] != '\0' && !isspace(sentence[i])) {
            i++;
        }
        int end = i - 1;

        reverse(sentence, start, end);
    }

   
    printf("%s\n", sentence);

    return 0;
}