#include<stdio.h>
int main(){
    int a, b, product;
    printf("PRODUCT OF 2 INTEGERS\n");
    printf("1st integer\n");
    scanf("%d", &a);
    printf("2nd integer\n");
    scanf("%d", &b);
    product = a*b;
    printf("PRODUCT OF A AND B IS %d", product);
    return 0;
}