// Q38: Write a program to find the sum of digits of a number.

#include<stdio.h>

int main(){
    int i , n , d = 0 ;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    do{
        i = n%10;
        d = d*1 + i; 
        n/= 10;
    }while(n>0);
    printf("THE SUM IS : %d" , d);
    return 0;
}