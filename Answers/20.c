//Read 2 matrices from user and write program to add, subtract, multiply those two matrices.

#include <stdio.h>

// function to get matrix elements entered by the user
void getMatrixElements(int matrix[][10], int row, int column) 
{
    int i,j;
    printf("\nEnter elements: \n");

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// function to multiply two matrices
void multiplyMatrices(int first[][10],int second[][10],int result[][10],int r1, int c1, int r2, int c2) 
{
    int i,j,k;
    // Multiplying first and second matrices and storing it in result
    for (i = 0; i < r1; ++i) 
    {
        for (j = 0; j < c2; ++j)
        {
            for (k = 0; k < c1; ++k)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void addMatrices(int first[][10],int second[][10],int result[][10],int r1, int c1, int r2, int c2)
{
    int i,j;
   // Add first and second matrices and storing it in result
   for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j) 
        {
            result[i][j] = first[i][j] + second[i][j];
        }
}

void subMatrices(int first[][10],int second[][10],int result[][10],int r1, int c1, int r2, int c2)
{
    int i,j;
   // sub first and second matrices and storing it in result
   for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j) 
        {
            result[i][j] = first[i][j] - second[i][j];
        }
}

// function to display the matrix
void display(int result[][10], int row, int column) 
{
    int i,j;
    printf("\nOutput Matrix:\n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j)
        {
            printf("%d  ", result[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

int main() 
{
    int x;
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Taking input until
    // 1st matrix columns is not equal to 2nd matrix row
    while (c1 != r2) 
    {
        printf("Error! Enter rows and columns again.\n");
        printf("Enter rows and columns for the first matrix: ");
        scanf("%d%d", &r1, &c1);
        printf("Enter rows and columns for the second matrix: ");
        scanf("%d%d", &r2, &c2);
    }

    // get elements of the first matrix
    getMatrixElements(first, r1, c1);

    // get elements of the second matrix
    getMatrixElements(second, r2, c2);

    printf("what you want to do with matrix : ");
    printf("\n1.Multiply\n2.Add\n3.Sub\n : ");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        multiplyMatrices(first, second, result, r1, c1, r2, c2);
        break;
    case 2:
        addMatrices(first, second, result, r1, c1, r2, c2);
        break;
    case 3:
        subMatrices(first, second, result, r1, c1, r2, c2);
        break;
    
    default:
        printf("Invalid Input");
        break;
    }

    // display the result
    display(result, r1, c2);
    return 0;
}