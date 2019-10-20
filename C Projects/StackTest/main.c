#include <stdio.h>
#include <stdlib.h>

struct stackNode
{
    int data;
    struct stackNode *nextPtr;
};

// Function prototypes
void push(struct stackNode **ptr, int value);
int pop(struct stackNode **ptr);
void peek(struct stackNode **ptr);
void printStack(struct stackNode *ptr);

int main()
{
    struct stackNode *topPtr = NULL;

    push(&topPtr, 3);
    printStack(topPtr);

    push(&topPtr, 15);
    printStack(topPtr);

    peek(&topPtr);

    push(&topPtr, 99);
    printStack(topPtr);

    peek(&topPtr);

    pop(&topPtr);
    printStack(topPtr);

    pop(&topPtr);
    printStack(topPtr);

    peek(&topPtr);

    pop(&topPtr);
    printStack(topPtr);

    return 0;
}

void push(struct stackNode **ptr, int value)
{
    struct stackNode *newPtr = malloc(sizeof(struct stackNode));

    if (newPtr != NULL)
    {
        newPtr->data = value;
        newPtr->nextPtr = *ptr;
        *ptr = newPtr;
    }
}

int pop(struct stackNode **ptr)
{
    struct stackNode *temp = *ptr;

    if (*ptr != NULL)
    {
        int value = temp->data;
        *ptr = temp->nextPtr;
        free(temp);
        return value;
    }
    else
    {
        return 0;
    }
}

void peek(struct stackNode **ptr)
{
    if (*ptr != NULL)
    {
        struct stackNode *temp = *ptr;
        int value = temp->data;

        printf("The value at the top of the stack is: %d\n", value);
    }
}

void printStack(struct stackNode *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->nextPtr;
    }

    printf("\n");
}
