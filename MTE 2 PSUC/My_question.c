#include<stdio.h>
 
int main(){
    char str[80]="hello";
    int i;
    for (i = 0; str[i] != '\0'; i++);
    for (int j = i-1; j>=0; j--)
    {
        printf("%c",str[j]);
    }
    return 0;
}