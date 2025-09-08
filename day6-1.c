//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main(){
      int i;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &i);
    if(i%2==0){
        printf("THE NUMBER IS EVEN");
    } 
    else{
        printf("THE NUMBER IS ODD");
    }
    return 0;
}