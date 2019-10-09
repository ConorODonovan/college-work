#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct employee {
        int employeeNum;
        char initial;
        int salary;
    };

    struct node {
        struct employee Emp;
        struct node *nextPtr;
    };

    typedef struct node listNode;

    listNode* newPtr = malloc(sizeof(listNode));

    if (newPtr!= NULL)
    {
        newPtr->Emp.employeeNum = 55654;
        newPtr->Emp.initial = 'B';
        newPtr->Emp.salary = 30000;
        newPtr->nextPtr = NULL;
    }

    printf("Employee Number: %d\n", newPtr->Emp.employeeNum);
    printf("Employee Initial: %c\n", newPtr->Emp.initial);
    printf("Employee Salary: %d\n", newPtr->Emp.salary);

    return 0;
}
