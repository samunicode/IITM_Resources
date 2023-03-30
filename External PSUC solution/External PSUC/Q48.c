#include<stdio.h>
#include<stdbool.h>

int main(){
    int row, column, count=0;
    printf("Please input the rows and columns of the matrix: ");
    scanf("%d %d", &row, &column);
    int matrix[row][column];
    printf("Please input the elements of the matrix: ");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++) scanf("%d", &matrix[i][j]);
    
    bool saddle_point = false;
    for (int i = 0; i <row; i++)
        if(saddle_point) break;
        else
        for(int j = 0; j < column; j++)
        {
            count=0;
            for (int k = 0; k < row; k++)
                for (int l = 0; l < column; l++)
                    if ((i==k)||(j==l))
                        if(matrix[i][j]<matrix[k][l]) count++;
            if (count==(row+column-2))
            {
                saddle_point=true;
                break;
            }
        }
        if(saddle_point) printf("There exists a saddle");
        else printf("There does not exists a saddle");
    return 0;
}