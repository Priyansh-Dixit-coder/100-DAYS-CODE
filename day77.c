/*Q127: Write a program that reads text from input.txt, 
converts all lowercase letters to uppercase, and writes the result to output.txt.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    // Open input file in read mode
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output file in write mode
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not create output.txt!\n");
        fclose(in);
        return 1;
    }

    // Read each character, convert to uppercase, write to output file
    while ((ch = fgetc(in)) != EOF) {
        ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("File converted successfully. Check output.txt\n");

    return 0;
}
