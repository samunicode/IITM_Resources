#include<stdio.h>
 
int main(){
    int num, temperature;
    printf("Please tell which converion you would like to perform:\n");
    printf("(1) Celcius to Farenheit\n");
    printf("(2) Farenheit to celcius\n");
    printf("Please give an input: ");
    scanf("%d", &num);
    printf("Please tell the temperature: ");
    scanf("%d", &temperature);
    if (num==1)
    temperature=((9*temperature/5)+32);
    else
    temperature=((5/9)*(temperature-32));
    printf("Temperature after conversion is %d", temperature);

    return 0;
}