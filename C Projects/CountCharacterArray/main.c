#include <stdio.h>
#include <stdlib.h>

/**
DT249 - Computer Technology 2 - Lecture 3 Homework
Conor O'Donovan

Write a C program that reads in string into a character array
and calls a function that counts and displays the number of characters
in the string (using char pointers) and returns the number of characters
back to function main.
*/

// Function prototypes
int countCharacters(char* ptrString);

int main()
{
    char *ptr = "Conor O'Donovan"; // *ptr points to first character in string

    int stringLen = countCharacters(ptr);

    printf("There are %d characters in this string\n", stringLen);

    return 0;
}

int countCharacters(char* ptrString)
/**
Function: Counts the number of characters in a string
Argument 1: The address of the first character in the string
*/

{
    int counter = 0;

    while (*ptrString != '\0') // Checks that we're not at the end of the string
    {
        ptrString++; // Moves the pointer to the next address in the array
        counter++; // For counting the characters
    }

    return counter;
}
