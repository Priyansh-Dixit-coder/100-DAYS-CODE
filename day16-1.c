// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main(){
int n , i=0;
printf("ENTER THE NUMBER YOU WANT BINARY REPRESENTATION OF : ");
scanf("%d" , &n);
long  binary = 0;
long  place = 1;
while(n>0){
    int rem = n%2;
    binary += rem*place;
    place *= 10;
    n /= 2;
}
printf("%d" , binary);
    return 0;
}