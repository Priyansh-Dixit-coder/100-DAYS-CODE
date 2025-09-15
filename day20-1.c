
// Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(){
    int n , i  , product = 1;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    do{
        i = n%10;
        if( i%2 !=0 ){
            product *= i; 
        }
        n /= 10;
    }while(n>0);
    printf("THE PRODUCT IS %d" , product);
    return 0;
}