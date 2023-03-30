#include<stdio.h>
int main(){
    char a[10];
    float b, c, d, e;
    printf("Your employee ID \n ");
    scanf("%f", &a);

    printf("Total hours worked in the month are \n ");
    scanf("%f", &b);

    printf("The amount you recieved per hour is \n ");
    scanf("%f", &c);

    printf(" Employee ID : %f \n ", a);
    printf("salary for the month : %f \n ", b*c);
    return 0;
}