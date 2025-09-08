// Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

int main(){
  int i , product = 1, n;
  printf("ENTER THE NUMBER :");
  scanf("%d" , &n);
  for(i=1;i<=n;i++)
  if(i%2==0){
    product *= i;
  }
  printf("THE PRODUCT IS :%d" ,product );
  return 0;
}