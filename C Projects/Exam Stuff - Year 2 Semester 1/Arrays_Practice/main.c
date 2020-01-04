#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];

    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("i: %d | ", i);
        numbers[i] = i;
        printf("numbers[i] = %d |\n", numbers[i]);
        printf("numbers[0] = %d |\n", numbers[0]);
    }

    printf("\nnumbers[0]: %d", numbers[0]);

    printf("\nNumbers:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d", numbers[i]);
    }

    return 0;
}
