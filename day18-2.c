//Q36: Write a program to find the HCF (GCD) of two numbers.


#include <stdio.h>

int main(){
     int i, n , m , min , hcf;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d" , &n);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d" , &m);
    min = (n<m)?n:m;
    for(i = min ; i>=1 ; i--){
        if(n%i == 0 && m%i == 0){
            hcf = i;
            break;
        }
    }
    printf("THE HCF IS :%d" , hcf);
    return 0;
}