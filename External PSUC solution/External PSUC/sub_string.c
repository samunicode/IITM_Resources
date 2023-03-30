// by Yayin
#include<stdio.h>
#include<stdbool.h>
 
int main(){
    bool occur=false;
    int sublen, count=0, last_occurence=0;
    char str[100], substr[100];
    printf("Please give the string:\n");
    gets(str);
    printf("Please give the sub-string:\n");
    gets(substr);
    for (int i = 0; substr[i]!='\0' ; i++)
        if (substr[i+1]=='\0')
            sublen=(i+1);
    
    for (int i = 0; str[i+sublen+1]!='\0' ; i++)
    {
        count=0;
        for (int j = 0; substr[j]!='\0' ; j++)
        {
            if (str[i+j]==substr[j])
                count++;
            else break;
        }
        if (count==sublen)
            last_occurence=(i+sublen-1);
    }
    printf("The last index of the substring occuring for the last time in the main string is %d (the first character occurs at index 0 and not 1)", last_occurence);

    return 0;
}