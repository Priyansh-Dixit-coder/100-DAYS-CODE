// Q34: Write a program to check if a number is prime.

#include<stdio.h>

int main(){
    int i , n , d , prime = 0;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    for(i=2;i<n;i++){
        d = n%i;
    }
    if( d == 0 )
        printf("%d is not a prime number" , n);
        else
        printf("%d is a prime number" , n);
    return 0;
}