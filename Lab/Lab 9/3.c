#include <stdio.h>
int main()
{
    int C[10][10], A[10][10], B[10][10], i, j, l, row, col;
    printf("Enter the number of rows (1-5): ");
    scanf("%d", &row);
    printf("Enter the number of columns (1-5): ");
    scanf("%d", &col);
    printf("\n Matrix A\n");
    printf("\n Enter element you want to insert in the matrix A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\t");
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n Matrix A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d", A[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n\n Matrix B");
    printf("\n Enter element you want to insert in the matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("\t");
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n Matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d", B[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n A*B=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            C[i][j] = 0;
            for (l = 0; l < col; l++)
            {
                C[i][j] = C[i][j] + A[i][l] * B[l][j];
            }
            printf("%d", C[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
