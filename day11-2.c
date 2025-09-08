// Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>

int main(){
  float cp , sp , p , l;
  printf("ENTER THE SELLING PRICE :\n");
  scanf("%f" , &sp);
  printf("ENTER THE COST PRICE :\n");
  scanf("%f" , &cp);
  p = (((sp-cp)/cp)*100);
  l = (((cp-sp)/cp)*100);
  if(sp>cp)
  {printf("PROFIT : %f" , p);
  }
  else if(sp<cp){
    printf("LOSS %f" , l);
  }
  else{
    printf("NO PROFIT NO LOSS");
  }
  return 0;
}