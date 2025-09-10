// Q33: Write a program to check if a number is an Armstrong number.

#include<stdio.h>
#include<math.h>
int main(){
    int num , n = 0 , o , r,armstrong;
    double result = 0.0;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &num);
    o = num;
    while(o!=0){
        o /= 10;
        ++n;
    }
    o = num;
    while(o !=0){
        r = o%10;
        result += pow(r,n);
        o /= 10;
    }
    if((int)result == num)
        printf("%d is an Armstrong number.\n" , num);
        else
        printf("%d is not an Armstrong number.\n" , num);
    return 0;
}