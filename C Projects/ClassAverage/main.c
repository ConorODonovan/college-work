#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initialise variables
    int total = 0;
    int GradeCounter = 0; // Sum of grades
    int grade;

    printf("Please enter 10 grades\n");

    // for loop from 0 to 10 (not including 10)
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &grade);

        total += grade;
        GradeCounter += 1;
    }

    float average;
    average = (float)total/(float)GradeCounter;

    printf("Class average for the %d students is %.2f", GradeCounter, average);

    return 0;
}
