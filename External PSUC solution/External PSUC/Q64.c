#include<stdio.h>
 
int main(){
    char str[100];

    printf("Please give a string to encode: ");
    gets(str);
    printf("Original form: %s\n", str);

    printf("encoded form: ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i]>=97)&&(str[i]<=122))
        {
            str[i]=(122-str[i]+97);
        }
        printf("%c", str[i]);
    }
    return 0;
}