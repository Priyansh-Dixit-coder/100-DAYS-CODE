// Q114: Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    
    int n = strlen(s);
    int maxLen = 0, start = 0;
    int lastIndex[256];
    
    // Initialize all indices as -1
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;
    
    for (int end = 0; end < n; end++) {
        // If character already seen, move start to next of last occurrence
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;
        
        lastIndex[(unsigned char)s[end]] = end; // Update last seen index
        
        int currentLen = end - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }
    
    printf("%d\n", maxLen);
    return 0;
}
