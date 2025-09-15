// Q42: Write a program to check if a number is a perfect number.
#include<stdio.h>
int main(){
    int i , n , s = 0;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    for(i=1;i<n;i++){
        if(n%i == 0){
            s += i;
        }
    }
    if(n == s){
        printf("PERFECT NUMBER");
    }
    else{
        printf("NOT A PERFECT NUMBER");
    }
    return 0;
}