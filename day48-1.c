// Q95: Check if one string is a rotation of another.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int isRotation(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

   
    if (len1 != len2)
        return 0;

    char* temp = (char*)malloc((2 * len1 + 1) * sizeof(char)); // +1 for null terminator
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

   
    int result = strstr(temp, s2) != NULL;

    free(temp);
    return result;
}

int main() {
    char s1[101], s2[101];

  
    scanf("%s", s1);
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}