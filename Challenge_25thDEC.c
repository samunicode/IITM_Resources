//For 2*3 matrix
#include<stdio.h>
 
int main(){
     int a11, a12, a13;
     int a21, a22, a23;
     scanf("%d %d %d\n %d %d %d\n", &a11,&a12, &a13, &a21, &a22, &a23);
     printf("The given matrix is:");
     printf("%d %d %d\n", a11, a12, a13);
     printf("%d %d %d\n", a21, a22, a23);
     printf("The transpose of matrix is:");
     printf("%d %d", a11, a21);
     printf("%d %d", a21, a22);
     printf("%d %d", a13, a23);
     return 0;
}