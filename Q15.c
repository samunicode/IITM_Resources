#include<stdio.h><math.h>
int main(){
     // Q14
     float a, b, c, d, e, f;
     printf("The x1 co-ordinate is\n ");
     scanf("%f", &a);

     printf("The y1 co-ordinate is\n ");
     scanf("%f", &b);

     printf("The x2 co-ordinate is\n ");
     scanf("%f", &c);

     printf("The y2 co-ordinate is\n ");
     scanf("%f", &d);

     e = (pow(c-a, 2) + pow(d-b, 2));
     f = pow(e, 1.0/2);
     printf("The distance between the points is %f", f);
     return 0;
}