#include<stdio.h>
 
int main(){
     int a, b, c, d, e, f, g;
     printf("The amount to be broken is\n");
     scanf("%d", &a);
     printf("notes of ₹100 are %d\n", a/100);
     b = a%100;
     printf("notes of ₹50 are %d\n", b/50);
     c = b%50;
     printf("notes of ₹20 are %d\n", c/20);
     d = c%20;
     printf("notes of ₹10 are %d\n", d/10);
     e = d%10;
     printf("notes of ₹5 are %d\n", e/5);
     f = e%5;
     printf("notes of ₹2 are %d\n", f/2);
     g= f%2;
     printf("notes of ₹1 are %d\n", g);
     return 0;
}