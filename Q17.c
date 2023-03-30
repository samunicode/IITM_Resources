#include<stdio.h>
 
int main(){
    int a, h, s, m, e, f, g;
     printf("the number of seconds is\n");
     scanf("%d", &a);
     h = a/3600;
     m = (a%3600)/60;
     s = (a%3600)%60;
     printf("The Hours:Minutes:Seconds is %d:%d:%d\n", h, m, s);
     return 0;
}