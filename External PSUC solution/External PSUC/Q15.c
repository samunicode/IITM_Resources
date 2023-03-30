#include<stdio.h>
 
int main(){
    int column1, row1, column2, row2;
    printf("Give the row and column of first matrix: ");
    scanf("%d %d",&row1, &column1);
    int matrix1[row1][column1];
    printf("please give the 1st matrix: ");
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < column1; j++)
            scanf("%d", &matrix1[i][j]);
        
    printf("Give the row and column of first matrix: ");
    scanf("%d %d",&row2, &column2);
    int matrix2[row2][column2];
    printf("please give the 1st matrix: ");
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < column2; j++)
            scanf("%d", &matrix2[i][j]);
    
    if (column1==row2)
        printf("The matrix can be multiplied");
    else
        printf("The matrix cannot be multiplied");
    
    return 0;
}