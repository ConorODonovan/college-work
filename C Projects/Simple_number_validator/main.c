/**
DT249 - Computer Technology 2 - Lab 2
Conor O'Donovan
A program that prompts the user to enter a value between 1 and 100 and then validates
that the value entered is between 1 and 20
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nPlease enter a value between 1 and 100\n");

    int num = 0;

    while (num < 1 || num > 100)
    {
        scanf("%d", &num);
    }

    if (num > 0 && num <= 20)
    {
        printf("\nThis number is between 1 and 20!\n");
    }
    else
    {
        printf("\nThis number is not between 1 and 20!\n");
    }

    return 0;
}
