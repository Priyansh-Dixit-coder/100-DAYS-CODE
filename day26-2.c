// Q52: Write a program to print the following pattern: 
 //*

 //*
 //*
 //*

 //*
 //*
 //*
 //*
 //*

 //*
 //*
 //*

 //*
 #include <stdio.h>

int main() {
    int i, j;
    int n[] = {1, 2, 3, 5, 3, 2, 1};  // pattern star counts
    int size = 7;  // total rows

    for (i = 0; i < size; i++) {
        for (j = 0; j < n[i]; j++) {
            printf("*\n");
        }
        printf("\n");  // blank line between blocks
    }

    return 0;
}