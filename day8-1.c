//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(){
    char a;
    printf("ENTER THE INPUT :\n");
    scanf("%c" , &a);
    if('A'<=a && a<='Z'){
        printf("UPPERCASE ALPHABET\n");
    }
    else if ('a'<=a && a<='z'){
        printf("lowercase alphabet");}
      else  if('0'<=a && a<='9')
        {
        printf("DIGIT");
    }
    else{
        printf("SPECIAL CHARACTER");
    }
    return 0;
}