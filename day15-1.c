// Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>

int main(){
    int factorial =1 , n , i;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    printf("THE FACTORIAL IS : %d", factorial);
    return 0;
}