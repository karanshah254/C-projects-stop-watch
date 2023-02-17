/*


    Matrix A : 1 2 3
               4 5 6
               7 8 9

    Matrix B : 1 2 3
               4 5 6
               7 8 9

    Matric C : Matrix A * Matrix B
               1 2 3       1 2 3
               4 5 6   *   4 5 6
               7 8 9       7 8 9


*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    int k;
    int sum = 0;
    int a[3][3], b[3][3], c[3][3];

    printf("\nEnter Numbers for First Matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix A is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    fflush(stdin);
    printf("\nEnter numbers for second matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n Matrix B is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }

    // IMP Code Starting From Now

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += (a[i][k] * b[k][j]); // For Multiply & Add first row & first column and so on .
            }
            c[i][j] = sum;
            sum = 0; // For Addition of Multiplied Term
        }
    }

    printf("\nAfter Multiplication Matrix C is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
}