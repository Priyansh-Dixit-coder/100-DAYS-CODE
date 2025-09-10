// Q32: Write a program to check if a number is a palindrome.

#include<stdio.h>

int main(){
    int i , n , r = 0 , o;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    o = n;
    do{
        i = n%10;
        r = r*10 + i;
        n /= 10;
    }while(n>0);
    if(o == r){
        printf("PALINDROME");}
        else{
            printf("NOT A PALINDROME");
    }
    return 0;
}