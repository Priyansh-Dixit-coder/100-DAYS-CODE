// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>

int main(){
    int i , n ;
    float d = 3.0 , sum = 0.0;
    printf("ENTER THE TERM : ");
    scanf("%d" , &n);
    for(i=1;i<=n;i++){
        sum += (float)((2.0*i)/d);
         d = d + 4.0 ;
    }
    printf("THE SUM UPTO %d TERMS IS %.2f" , n , sum);
    return 0;
}