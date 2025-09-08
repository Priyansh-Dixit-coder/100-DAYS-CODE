// Q23: Write a program to calculate a library fine based on late days.

#include<stdio.h>

int main(){
    int l;
    printf("ENTER THE LATE NUMBER OF DAYS : ");
    scanf("%d" , &l);
    if(l<=4){
      printf("THE FINE IS : rupees %d" , (2*l));
    }
    else if(l>4 && l<=8){
    printf("THE FINE IS : rupees %d" , (4*l));
  }
    else if(l>8 && l<31){
    printf("THE FINE IS : rupees %d" , (6*l));
  }
    else{
      printf("MEMBERSHIP CANCELLED");
    }
  return 0;
}