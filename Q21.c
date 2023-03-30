#include<stdio.h>
 
int main(){
     int a;
     printf("Give a Number\n");
     scanf("%d", &a);
     if(0<=a && a<=20){
          printf("Range [0, 20]\n");
     }
     else if (21<=a && a<=40)
     {
          printf("Range [21, 40]\n");
     }
     else if (41<=a && a<=60)
     {
          printf("Range [41, 60]\n");
     }
     else if (61<=a && a<=80)
     {
          printf("Range [61, 80]\n");
     }
     else{
          printf("VALUE OUT OF RANGE\n");
     }
     
     return 0;
}