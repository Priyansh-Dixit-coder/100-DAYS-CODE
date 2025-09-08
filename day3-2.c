// Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main(){
       int a,b,i;
    printf("ENTER THE VALUE OF a:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF b:");
    scanf("%d",&b);
    printf("\n BEFORE SWAPPING : a = %d,b =%d\n",a,b);
    i=a;
    a=b;
    b=i;
    printf("AFTER SWAPPING : a=%d,b=%d",a,b);
    return 0;
}