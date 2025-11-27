// Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // Allocating memory dynamically
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Taking input
    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    // Displaying details
    printf("\nName: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
