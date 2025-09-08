// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>

int main(){
  int a,b;
  char o;
  printf("ENTER THE FIRST NUMBERS AND OPERATOR : ");
  scanf("%d %d %c",&a,&b,&o);
  
  switch(o){
    case '+':
    printf("%d" , a+b);
    break;
    case '-':
    printf("%d" , a-b);
    break;
    case '*':
    printf("%d" , a*b);
    break;
    case '/':
   printf("%d" , a/b);
    break;
    case '%':
    printf("%d" , a%b);
    break;
  }
  return 0;
}