#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrixA[3][3] = {{3,4,5},{7,6,5,},{9,8,7}};
    int matrixB[3][3] = {{1,2,3},{8,6,4,},{3,6,9}};
    int matrixC[3][3] = {{0,0,0},{0,0,0,},{0,0,0}};

    int i, j, k, sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum = sum + matrixA[i][k] * matrixB[k][j];
            }

            matrixC[i][j] = sum;
            sum = 0;
        }
    }

    printf("Matrix A x Matrix B = Matrix C:\n%d %d %d\n%d %d %d\n%d %d %d",matrixC[0][0],matrixC[0][1],matrixC[0][2],matrixC[1][0],matrixC[1][1],matrixC[1][2],matrixC[2][0],matrixC[2][1],matrixC[2][2]);

    return 0;
}
