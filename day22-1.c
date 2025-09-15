// Q41: Write a program to swap the first and last digit of a number.

#include<stdio.h>

int main(){
   int n , i ,t, r , l , p = 1, f , mp , swapped_num;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    t = n;
    l = n%10; 
    while(t>=10){
        t /= 10;
        p *= 10;
    }
    f = t;
    mp = ((n%p)/10);
    swapped_num = l*p + mp*10 + f;
    printf("THE SWAPPED NUMBER IS : %d" , swapped_num);
    return 0;
}