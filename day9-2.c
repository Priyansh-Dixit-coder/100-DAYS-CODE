//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.

#include <stdio.h>

int main(){
        int p;
    printf("ENTER YOUR PERCENTAGE :");
    scanf("%d" , &p);
    if(p>=90){
        printf("GRADE A");
    }
    else if(p<=90 && p>=80){
        printf("GRADE B");
    }
    else if(p<=80 && p>=70){
        printf("GRADE C");
    }
    else if(p<=70 && p>=60){
        printf("GRADE D");
    }
    else{
        printf("GRADE F");
    }
    return 0;
}