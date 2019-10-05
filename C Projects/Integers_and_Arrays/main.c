#include <stdio.h>
#include <stdlib.h>

/**
DT249 - Computer Technology 2 - Lab 2
Conor O'Donovan
*/

// Function prototypes
int sum_integers(int *list_integers);
int largest_integer(int *list_integers);
int smallest_integer(int *list_integers);
int is_symmetrical(int *list_integers);

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

    // Show the largest integer in the array
    int largest_num = largest_integer(&user_integers[0]);
    printf("\nLargest integer: %d\n", largest_num);

    // Show the smallest integer in the array
    int smallest_num = smallest_integer(&user_integers[0]);
    printf("\nSmallest integer: %d\n", smallest_num);

    // Show if array is symmetrical
    if (is_symmetrical(&user_integers[0]) == 1)
    {
        printf("\nY\n");
    }
    else
    {
        printf("\nN\n");
    }


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

int largest_integer(int *list_integers)
/**
Find the largest integer in the array
parameter 1: the address of the first entry in the array
*/

{
    int temp = *list_integers;
    int i;

    for (i = 0; i < 10; i++)
    {
        if (temp < *(list_integers + i))
        {
            temp = *(list_integers + i);
        }
    }

    return temp;
}

int smallest_integer(int *list_integers)
/**
Find the smallest integer in the array
parameter 1: the address of the first entry in the array
*/

{
    int temp = *list_integers;
    int i;

    for (i = 0; i < 10; i++)
    {
        if (temp > *(list_integers + i))
        {
            temp = *(list_integers + i);
        }
    }

    return temp;
}

int is_symmetrical(int *list_integers)
/**
Determine if the array is symmetrical
*/

{
    int i;

    for (i = 0; i < 5; i++)
    {
        if (*(list_integers + i) != *(list_integers + (9 - i))) // Compares first and last element, then second and second last element, etc.

        {
            return 0;
        }
    }

    return 1;
}
