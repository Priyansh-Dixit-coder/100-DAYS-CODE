//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main(){
     int totalseconds;
    printf("ENTER THE TIME IN MINUTES :");
    scanf("%d" , &totalseconds);
    printf("THE TIME IS : %d : %d: %d\n" , totalseconds/3600,(totalseconds%3600)/60 , totalseconds%60);
    return 0;
}