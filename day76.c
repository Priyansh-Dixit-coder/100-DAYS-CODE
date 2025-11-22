/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/
#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");  // Try opening in read mode

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        char ch;
        printf("File opened successfully.\n");
        printf("File content:\n");

        // Read and display file content character by character
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}
