//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main(){
        int i;
    printf("ENTER THE NUMBER :");
    scanf("%d" , &i);
    if(i>=0){
if(i==0){
    printf("THE NUMBER IS ZERO");
}else{
    printf("THE NUMBER IS POSITIVE");
}
}
else{
    printf("THE NUMBER IS NEGATIVE");
}
    return 0;
}