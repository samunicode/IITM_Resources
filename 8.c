#include<stdio.h><math.h>
 
 int main()
     {
     // Q 13
     int a, b, c;
     printf("Finding the biggest integer\n ");
     printf("The first integer is\n ");
     scanf("%d", &a);
     printf("The 2nd integer is\n ");
     scanf("%d", &b);
     printf("The 3rd integer is\n ");
     scanf("%d", &c);
     
     if(a>b, a>c){
          printf("The greatest integer is %d\n ", a);
     }
     if (b>a, b>c) {
          printf("The greatest integer is %d\n ", b);
     }
     if(c>b, b>a){
          printf("The greatest integer is %d\n ", c);          
     }
     return 0;
}