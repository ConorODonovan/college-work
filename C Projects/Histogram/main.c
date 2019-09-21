#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numArray[10]; // Initialises an empty int array of length 10
    int userInput; // Stores user input
    int i; // For first loop
    int j = 0; // For second loop
    int k; // For third loop

    printf("\nPlease enter 10 numbers\n");

    for (i=0; i<10; i++)
    {
        scanf("%d", &userInput);

        numArray[i] = userInput; // Populates array with inputted numbers
    }

    printf("\nValue          Histogram\n");

    while (j < sizeof(numArray)/sizeof(numArray[0])) // Gets length of array by dividing the total array size in bytes by the byte size of one entry
    {
        printf("%d              ", numArray[j]);

        for (k=0; k<numArray[j]; k++)
        {
            printf("*");
        }

        printf("\n");

        j++;
    }
}
