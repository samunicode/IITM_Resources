#include<stdio.h>
int main(){
    int k = 0,x = 1;
    while(k < 25){
        if(k % 5 == 0) {
            x += k;
            printf("%d" ,x) ; }
    else
    break;
    ++k ;}
printf(" x=%d" ,x+k) ; }