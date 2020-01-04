#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    int *ptr1;
    int **ptr2;

    num = 5;

    ptr1 = &num;
    ptr2 = &ptr1;

    printf("The value of num is %d\n", num);
    printf("The value of ptr1 is %p\n", ptr1);
    printf("The value at the address stored in ptr1 is %d\n", *ptr1);
    printf("The value of ptr2 is %p\n", ptr2);
    printf("The value at the address stored in ptr2 is %p\n", *ptr2);
    printf("And finally, when we dereference ptr2 twice, we get %d\n", **ptr2);

    return 0;
}
