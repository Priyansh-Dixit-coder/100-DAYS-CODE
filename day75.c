/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter file name: ");
    scanf("%s", filename);

    // Open in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Flush leftover newline from input buffer
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
