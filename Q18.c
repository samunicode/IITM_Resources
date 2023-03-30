#include<stdio.h>
 
int main(){
    int total_days, year, month, days;
     printf("The number of days is\n");
     scanf("%d", &total_days);
     year = total_days/365;
     month = (total_days%365)/30;
     days = (total_days%365)%30;
     printf("The number of years is %d\n", year);
     printf("The number of months is %d\n", month);
     printf("The number of days is %d\n", days);
     return 0;
}