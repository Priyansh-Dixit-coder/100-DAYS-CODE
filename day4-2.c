//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main(){
    int n;
    printf("ENTER A NUMBER n : ");
    scanf("%d" , &n);
    int S = (n/2)*(1+n);
    printf("THE SUM OF NUMBERS TILL n =%d" , S);
    return 0;
}