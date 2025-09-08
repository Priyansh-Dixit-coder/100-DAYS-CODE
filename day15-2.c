// Q30: Write a program to reverse a given number.

#include<stdio.h>
int main(){
    int i, n , r = 0;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    while(n>0){
        i = n%10;
        r = r*10 + i;
        n /= 10;
    }
    printf("%d" , r);
    return 0;
}