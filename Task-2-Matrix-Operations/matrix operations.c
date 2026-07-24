#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols);
void displayMatrix(int matrix[10][10], int rows, int cols);
void addMatrix(int A[10][10], int B[10][10], int result[10][10], int rows, int cols);
void multiplyMatrix(int A[10][10], int B[10][10], int result[10][10], int rows, int cols);
void transposeMatrix(int matrix[10][10], int transpose[10][10], int rows, int cols);

int main()
{
    int A[10][10], B[10][10], sum[10][10], product[10][10], transpose[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter elements of Matrix A:\n");
    inputMatrix(A, rows, cols);

    printf("\nEnter elements of Matrix B:\n");
    inputMatrix(B, rows, cols);

    addMatrix(A, B, sum, rows, cols);

    multiplyMatrix(A, B, product, rows, cols);

    transposeMatrix(A, transpose, rows, cols);

    printf("\nMatrix A:\n");
    displayMatrix(A, rows, cols);

    printf("\nMatrix B:\n");
    displayMatrix(B, rows, cols);

    printf("\nAddition of Matrices:\n");
    displayMatrix(sum, rows, cols);

    printf("\nMultiplication of Matrices:\n");
    displayMatrix(product, rows, cols);

    printf("\nTranspose of Matrix A:\n");
    displayMatrix(transpose, cols, rows);

    return 0;
}

void inputMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int A[10][10], int B[10][10], int result[10][10], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrix(int A[10][10], int B[10][10], int result[10][10], int rows, int cols)
{
    int i, j, k;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[i][j] = 0;
            for(k = 0; k < cols; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[10][10], int transpose[10][10], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}
