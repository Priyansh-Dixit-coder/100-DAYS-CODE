// Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp, emp_read;
    FILE *fp;

    // Taking input from user
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Writing to binary file
    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    // Reading from binary file
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!");
        return 1;
    }

    fread(&emp_read, sizeof(emp_read), 1, fp);
    fclose(fp);

    // Displaying read data
    printf("\n--- Employee Data Read From File ---\n");
    printf("ID: %d\n", emp_read.id);
    printf("Name: %s\n", emp_read.name);
    printf("Salary: %.2f\n", emp_read.salary);

    return 0;
}
