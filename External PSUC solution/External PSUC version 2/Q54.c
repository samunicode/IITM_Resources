#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    scanf("%d",&num);
    for (int i = 0; i < (2*num-1); i++)
    {
        for (int j = 0; j < (abs(num-1-i)); j++)
        printf("  ");
        if (i<num)
        {
            for (int j=0; j<=i; j++)
                printf("%d ", (j+1));
            for (int j=i; j>=1; j--)
                printf("%d ", j);
            printf("\n");
        }
        else
        {
            for (int j=0; j<=(num-(i-num+2)); j++)
                printf("%d ", (j+1));
            for (int j=(num-(i-num+2)); j>=1; j--)
                printf("%d ", j);
            printf("\n");
        }
        
    }
    
    return 0;
}