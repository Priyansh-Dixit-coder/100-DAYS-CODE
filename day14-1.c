// Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>

int main(){
    int i , n , sum , count;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
for(i=1,count=0 ; count<n ; i+=2,count++){
sum += i;
}
printf("THE SUM IS : %d" , sum);
    return 0;
}