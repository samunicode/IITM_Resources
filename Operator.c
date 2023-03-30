#include<stdio.h>
 int main()
{
    int a, b, c;
    a=1;b=2;c=8;
    printf("The value of c is %d\n", c);
    c/=a+b-1;
    printf("The value of c is %d\n", c);
    int e, f;
    e=3;f=7;
    printf("The values of e, f are %d, %d respectively\n",  e, f);
    f=e++;
    printf("The value of e and f is %d and %d\n", e, f);
    e=3;f=7;
    f=e++ +8;
    printf("The value of e and f is %d and %d\n", e, f);
    e=3;f=7;
    f=++e;
    printf("The value of e and f is %d and %d\n", e, f);
    e=3;f=7;
    f=++e+14;
    printf("The value of e and f is %d and %d\n", e, f);
    e=3;f=7;
    f=e;
    printf("The value of e and f is %d and %d\n", e, f);
}