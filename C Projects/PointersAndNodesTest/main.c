#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void swap(int *a, int *b);

int main()
{
    int a = 3;
    int b = 5;

    int *aPtr = &a;
    int *bPtr = &b;

    printf("a: %d, b: %d\n\n", a, b);

    swap(aPtr, bPtr);

    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
