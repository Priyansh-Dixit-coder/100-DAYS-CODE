//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main(){
    char word;
    printf("ENTER THE CHARACTER : \n");
    scanf("%c" , &word);
    if(word == 'a'|| word == 'e'||word == 'i'||word == 'o'||word == 'u'){
        printf("VOWEL" , word);
    }
    else{
        printf("CONSONANT" , word);
    }
    return 0;
}