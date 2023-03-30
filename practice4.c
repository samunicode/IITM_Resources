#include<stdio.h>
int main(){
    char str1[20]; 
    int a, b, sum;
    printf("The sum of 2 integers\n ");
    printf("The 1st integer is\n ");
    scanf("%d", &a);  
    printf("The 2nd integer is\n ") ;
    scanf("%d", &b );
    sum = a + b;
    printf("The sum of the integers is %d\n ", sum); 
    return 0;
}