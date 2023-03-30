#include<stdio.h>
int main(){
    float a, b, c, d, e, f;
    printf("Total distance travelled is\n ");
    scanf("%f", &a);
    printf("fuel spent in litres is\n ");
    scanf("%f", &b);
    printf("The average consumption is %f km/litre\n ", a/b);
    return 0;
}