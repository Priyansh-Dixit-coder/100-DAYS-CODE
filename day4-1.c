//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main(){
     int a,b,i;
    printf("ENTER THE VALUE OF A\n");
    scanf("%d" , &a);
    printf("ENTER THE VALUE OF B\n");
    scanf("%d" , &b);
   printf("BEFORE SWAPPING : a = %d,b =%d\n",a,b);
    i=a;
    a=b;
    b=i;
   printf("\n AFTER SWAPPING : a = %d,b =%d",a,b);
    return 0;
}