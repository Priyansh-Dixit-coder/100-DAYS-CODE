// Q148: Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    // Input for Student 1
    printf("Enter Student1 Name: ");
    scanf("%s", s1.name);

    printf("Enter Student1 Roll: ");
    scanf("%d", &s1.roll);

    printf("Enter Student1 Marks: ");
    scanf("%d", &s1.marks);

    // Input for Student 2
    printf("\nEnter Student2 Name: ");
    scanf("%s", s2.name);

    printf("Enter Student2 Roll: ");
    scanf("%d", &s2.roll);

    printf("Enter Student2 Marks: ");
    scanf("%d", &s2.marks);

    // Checking if identical
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        printf("\nSame");
    } else {
        printf("\nNot Same");
    }

    return 0;
}
