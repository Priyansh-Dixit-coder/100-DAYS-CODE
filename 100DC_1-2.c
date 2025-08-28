 // Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d" , &a);
    printf("Enter second number : ");
    scanf("%d" , &b);
    printf("sum: %d\n" , a+b );
    printf("Diff: %d\n" , a-b );
    printf("Product: %d\n" , a*b );
    printf("Quotient: %d\n" , a/b );
    return 0;
}