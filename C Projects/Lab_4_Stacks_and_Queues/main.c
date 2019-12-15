#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void insertNode(int value);

// Node struct
struct node
{
    int data; // Data contained in the node
    struct node *nextPtr; // Pointer to the next node
};

typedef struct node Node;

int main()
{
    insertNode(2);

    return 0;
}

void insertNode(int value)
{
    Node* newPtr = malloc(sizeof(Node)); // Create node

    // Check if space available in memory
    if (newPtr != NULL)
    {
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        printf("\nA node containing the value %d has been successfully created\n", value);
    }
}
