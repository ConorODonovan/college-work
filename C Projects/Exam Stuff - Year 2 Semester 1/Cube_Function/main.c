#include <stdio.h>
#include <stdlib.h>

// Function prototype
int cube(int i);

int main()
{
    int n, nCubed;
    n = 3;
    nCubed = cube(n); // Function call
    printf("The value of %d cubed is %d\n", n, nCubed);

    return 0;
}

// Function definition
int cube(int i)
{
    return i * i * i;
}
