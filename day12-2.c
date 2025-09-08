// Q24: Write a program to calculate an electricity bill based on units consumed.

#include<stdio.h>

int main(){
  int u;
  printf("ENTER THE UNITS CONSUMED :");
  scanf("%d" , &u);
  if(u<=50){
    printf("BILL : %d" , u*5);
  }
  else if(u>50 && u<=150){
    printf("BILL : %f" , u*6.334);
  }
  else{
    printf("BILL : %f" , u*8.8);
  }
  return 0;
}