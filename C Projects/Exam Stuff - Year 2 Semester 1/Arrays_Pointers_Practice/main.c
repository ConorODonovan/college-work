#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *myString = "Conor";

    printf("myString: %s\n", myString);
    printf("myString, position 2: %c\n", myString[2]);

    char *myArray[3] = {"Zero", "One", "Two"};

    printf("myArray, position 1: %s\n", myArray[1]);

    return 0;
}
