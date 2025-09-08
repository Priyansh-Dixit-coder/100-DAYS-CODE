//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main(){
      int a , b , c , dis , r1 , r2;
    printf("ENTER 'a' : ");
    scanf("%d" , &a);
    printf("ENTER 'b' : ");
    scanf("%d" , &b);
    printf("ENTER 'c' : ");
    scanf("%d" , &c);
    dis = b*b - 4*a*c;
    if(dis>0){
        r1 = (-b + sqrt(dis)/(2*a));
        r2 = (-b - sqrt(dis)/(2*a));
        printf("ROOTS ARE REAL AND DIFFERENT : %d , %d" , r1 , r2);
    }
    else if (dis ==0 ){
        r1 = -b/(2*a);
        printf("ROOTS ARE REAL AND SAME : %d" , r1);
    }
    else{
        printf("ROOTS ARE COMPLEX : ");
    }
    return 0;
}