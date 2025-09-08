//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main(){
     int a , b , c;
    printf("ENTER THE FIRST NUMBER :\n ");
    scanf("%d" , &a);
    printf("ENTER THE SECOND NUMBER :\n ");
    scanf("%d" , &b);
    printf("ENTER THE THIRD NUMBER : \n");
    scanf("%d" , &c);
    if(a>b && a >c){
        printf("LARGEST IS  %d" , a);
    }
    if(b>a && b>c){
        printf("LARGEST IS  %d\n" , b);
    }
    if(c>a && c>b){
        printf("LARGEST IS  %d\n" , c);
    }
    return 0;
}