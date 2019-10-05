#include <stdio.h>
#include <stdlib.h>

/**
DT249 - Computer Technology 2 - Lab 2
Conor O'Donovan
*/

// Function prototypes
int sum_integers(int *list_integers);
int largest_integer(int list_integers);
int smallest_integer(int list_integers);

int main()
{
    int user_integers[10]; // Initialise array
    int i;

    printf("Please enter 10 integers:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &user_integers[i]); // Add user-chosen integers to array
    }

    // Show the sum of the integers
    int sum_of_integers = sum_integers(&user_integers[0]);
    printf("\nSum of integers: %d\n", sum_of_integers);

    return 0;
}

int sum_integers(int *list_integers)
/**
Calculate sum of integers
parameter 1: the address of the first entry in the array
*/

{
    int i;
    int total = 0;

    for (i = 0; i < 10; i++)
    {
        total += *(list_integers + i);
    }

    return total;
}

int largest_integer(int list_integers);
{

}

/*
int smallest_integer(int list_integers);
{

}
*/
