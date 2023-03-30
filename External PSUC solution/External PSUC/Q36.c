#include<stdio.h>
 
int main(){
    int principal, time, rate;
    printf("Please give the principal amount and duration: ");
    scanf("%d %d", &principal, &time);
    if (principal<=10000)
    rate=10;
    if (principal<=10000)
    rate=10;
    if (principal<=50000)
    rate=15;
    else
    rate=20;

    switch(rate) {
        case 10: printf("simple interest is %d", (principal*time*rate)); break;
        case 15: printf("simple interest is %d", (principal*time*rate)); break;
        case 20: printf("simple interest is %d", (principal*time*rate)); break;
    }
    return 0;
}