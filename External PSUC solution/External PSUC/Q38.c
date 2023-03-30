#include<stdio.h>
#include<stdlib.h> 
void numUpdate(int *x, int *y);

int main(){
    int x, y;
    printf("Please give the numbers: ");
    scanf("%d %d", &x, &y);
    printf("x=%d y=%d\n", x, y);
    numUpdate(&x, &y);
    printf("After function ran\nx=%d y=%d\n here x is now their sum and y the absolute difference", x, y);
    return 0;
}

void numUpdate(int *x, int *y){
    int temp= *x;
    *x= *y+*x;
    *y= abs(temp-*y);
}