// Q145: Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find the topper and return a structure
struct Student findTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // Return the topper structure
}

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input data
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Call function to get topper structure
    struct Student topper = findTopper(s, n);

    // Output
    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}
