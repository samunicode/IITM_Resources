#include<stdio.h>
 
int main(){
    int *a;
    char *b;
    float *c;
    double *d;
    printf("The size of an integer pointer is %d\n", sizeof(a));
    printf("The size of an character pointer is %d\n", sizeof(b));
    printf("The size of an float pointer is %d\n", sizeof(c));
    printf("The size of an double pointer is %d\n", sizeof(d));
    return 0;
}