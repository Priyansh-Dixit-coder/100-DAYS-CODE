//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){
     int a , b , c;
    printf("ENTER THE SIDE a :\n" );
    scanf("%d" , &a);
printf("ENTER THE SIDE b :\n" );
    scanf("%d" , &b);
    printf("ENTER THE SIDE c :\n" );
    scanf("%d" , &c);
    if(a==b && b==c){
        printf("IT IS AN EQUILATERAL TRIANGLE\n");
    }
    else if( a == b || b == c || c == a ){
        printf("IT IS AN ISOSCELES TRIANGLE\n");
    }else{
        printf("IT IS A SCALENE TRIANGLE\n");
    }
    return 0;
}