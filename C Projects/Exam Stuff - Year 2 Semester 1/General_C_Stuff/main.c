#include <stdio.h>
#include <stdlib.h>

int square(int *numPtr);

int main()
{
    int num;
    int *ptr;
    num = 5;
    ptr = &num;

    printf("num: %d\n", num);
    printf("ptr: %p\n", ptr);

    char name = 'C';
    char str1[] = {'H', 'e', 'l', 'l', 'o'};
    char *strPtr = "Hello";

    printf("name: %c\n", name);
    printf("str1: %s\n", str1);
    printf("strPtr: %p\n", strPtr);

    num = square(&num);

    printf("Answer is %d\n", num);

    return 0;
}

int square(int *numPtr)
{
    printf("numPtr: %p\n", numPtr);

    int i = *numPtr;

    return i * i;
}
