// Q37: Write a program to find the LCM of two numbers.

#include<stdio.h>

int main(){
    int i , n , m ,max , lcm;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d" , &n);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d" , &m);
    max =(n>m)?n:m;
    while(1){
    if (max%m ==0 && max%n == 0){
        lcm = max;
        break;
    }
    max ++;
}
printf("LCM OF %d and %d is : %d" , n , m , lcm);
        return 0;
}