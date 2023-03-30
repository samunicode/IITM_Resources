// Question 8 (first ques. in which some brain is being used)
#include<stdio.h>
int main(){
    int a = 365;
    int total_days =1329;
    int year = total_days/a;
    printf("number of years passed in 1329 days is %d\n ", year);
    int b = (total_days-a*year)/7;
    printf("The extra weeks are %d\n ", b);
    int c = total_days - year*a - 7*b;
    printf("number of extra days are %d", c);
    return 0;
}