#include <stdio.h>
#include <stdlib.h>

/**
DT249 - Computer Technology 2
Conor O'Donovan
*/

int main()
{
    int matrixA[3][3] = {{2,4,6},
                         {1,3,5},
                         {7,9,11}};

    int matrixB[3][3] = {{10,8,6},
                         {1,1,1},
                         {7,0,9}};

    int matrixC[3][3] = {{0,0,0},
                         {0,0,0},
                         {0,0,0}};

    int row;
    int col;

    printf("\n");
    printf(" Matrix C:");
    printf("\n");

    for (row=0;row<3;row++)
    {
        for (col=0;col<3;col++)
        {
            matrixC[row][col] = matrixA[row][col] + matrixB[row][col];

            if (matrixC[row][col] < 10)
            {
                printf(" %d  ", matrixC[row][col]);
            }
            else
            {
                printf(" %d ", matrixC[row][col]);
            }
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}
