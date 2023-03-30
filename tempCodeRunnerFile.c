#include<stdio.h>
 
int main(){
     int a;
     printf("Give a Number\n");
     scanf("%d", &a);
     if(0<=a<=20){
          printf("Range [0, 20]\n");
     }
     if (21<=a<=40)
     {
          printf("Range [21, 40]\n");
     }
     if (41<=a<=60)
     {
          printf("Range [41, 60]\n");
     }
     if (61<=a<=80)
     {
          printf("Range [61, 80]\n");
     }
     else{
          printf("VALUES OUT OF RANGE\n");
     }
     
     return 0;
}