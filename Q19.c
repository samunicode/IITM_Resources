#include<stdio.h>
 
int main(){
    int p, q, r, s;

     printf("Give the number p\n");
     scanf("%d", &p);
    // 1st if starts
     if( p % 2 == 0 ){
     
     printf("Give the number q\n");
     scanf("%d", &q);

     printf("Give the number r\n");
     scanf("%d", &r);
     
     printf("Give the number s\n");
     scanf("%d", &s);
    // 2nd if starts  
     if(q>0, r>0, s>0){
    //  3rd if starts
     if ((q>r) && (s>p)){
    // 4th if starts
        if ((r+s)>(p+q)){
        printf("CORRECT VALUES\n");
    }//4th if ends 
    else{
        printf("INCORRECT VALUES,\n  SUM OF R AND S MUST BE GREATER THAN SUM OF P AND Q\n");
        }
        }//3rd if ends
     else{
        
         printf("q MUST be GREATER than r!!!!!!\n");
         printf("s MUST be GREATER than p!!!!!!\n");
         printf("TRY AGAIN\n");
     }   
     }//2nd if ends
     else{
         printf("q, r and s must be positive!!!!\n");
         printf("TRY AGAIN\n");
     }
     }//1st if ends
     else{
         printf("p must be even!!!!\n");
         printf("Try Again\n");
     }
     return 0;
}