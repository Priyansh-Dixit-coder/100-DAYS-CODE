// Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;      // structure variable
    struct Student *ptr;   // pointer to structure

    ptr = &s;  // assigning address of structure variable

    // Modifying structure using pointer and -> operator
    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);

    // Displaying modified data
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
