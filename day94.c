//Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts a structure and prints it
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student st;

    // Input student details
    printf("Enter Name: ");
    scanf("%s", st.name);

    printf("Enter Roll No: ");
    scanf("%d", &st.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &st.marks);

    // Function call
    display(st);

    return 0;
}
