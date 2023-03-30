#include<stdio.h>
 
int main(){
    char str[100], to_change, into_change;
    printf("Please give a string: ");
    gets(str);
    printf("Give the character to change: ");
    scanf(" %c", &to_change);
    printf("Give the character to change into: ");
    scanf(" %c", &into_change);
    for (int i = 0; str[i]!='\0'; i++)
        if (str[i]== to_change)
            str[i]=into_change;    
    puts(str);
    return 0;
}