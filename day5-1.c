//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main(){
      int p,r,t;
    printf("ENTER THE PRINCIPAL AMOUNT :");
    scanf("%d" , &p);
    printf("ENTER THE RATE OF INTEREST :");
    scanf("%d" , &r);
    printf("ENTER THE TIME (in years) :");
    scanf("%d" , &t);
    printf("THE SIMPLE INTEREST = %f" , (p*r*t)/100.0);
    float i , factor ,c ,a;
    factor = 1.0;
for(i =0;i<t;i++){
    factor*=(1.0+r/100.0);
}
a = p*factor;
   c = a - p;
    printf("THE COMPOUND INTEREST = %f" , c);
    return 0;
}