/**
DT249 - Computer Technology 2 - Lab 3
Conor O'Donovan
A program to illustrate passing structure values to a function.
The program reads data for a student and displays it
*/

#include <stdio.h>
#define MAX_STUDENTS 5

struct student_rec // Global structure template
{
  int number;
  char name[26];
  int age;
  int scores[5];
};

typedef struct student_rec STUDENT;

// Initialise array of student objects
struct student_rec StudentsList[MAX_STUDENTS];

// Function prototypes
void display_student_data(struct student_rec);
void get_student_data(struct student_rec *);
int menu();
void add_student_record(STUDENT []);
void display_student_record(STUDENT []);
int find_student_record(STUDENT []);

int main()
{
    int menu_choice;

	do
	{
		menu_choice = menu();

		switch (menu_choice)
		{
			case 1 :
						add_student_record(StudentsList);
						break;
			case 2 :
						display_student_record(StudentsList);
						break;
			case 3 :;
                        int entryPosition = find_student_record(StudentsList);
						if (entryPosition == -1)
                        {
                            printf("\nStudent record does not exist\n");
                        }
                        else
                        {
                            printf("\nThis student record is at position %d\n", entryPosition);
                        }
						break;
		}
	}
	while ( menu_choice != 0) ;

	return 0;
}

int menu()
{
	int choice;

	// Display the menu
	printf("\n\n 1. Add a Student Record\n\n");
	printf(" 2. Display a Student Record\n\n");
	printf(" 3. Search for a Student Record\n\n");
	printf(" 0. Quit\n\n");
	printf("Please enter your choice (0 to 3)\n");

	// Get the option
	do
		scanf( "%d", &choice );
	while ( choice <0 || choice > 3 );

	return (choice);
}


void display_student_data (struct student_rec stud)
/**
Function: display_student_data() - displays student data
Argument 1: the student structure
*/

{
	int i;

	printf( "\n\nThe data in the student structure is:" );
	printf( "\nnumber is %d" , stud.number );
	printf( "\nname is %s" , stud.name );
	printf( "\nage is %d" , stud.age );
	printf( "\nscores are: " );

	for ( i= 0; i < 5; i++ )
    {
        printf( " %d " , stud.scores[i] );
    }

	printf( "\n" );
}

void get_student_data( struct student_rec *ptr)
/**
Function: get_student_data() - This function reads student data
Argument 1: a pointer to the student structure
*/

{
	int i;

	printf( "Student Number: ");
	scanf( "%d" , &(ptr->number));

	printf( "Student Name: ");
	scanf( "%25s" , ptr->name);

	printf( "Age: ");
	scanf( "%d" , &(ptr->age) );

	printf( "5 Test Scores: " );

	for ( i= 0 ; i < 5 ; i++ )
    {
        scanf( "%d" , &(ptr->scores[i]) );
    }
}

void add_student_record(STUDENT StudentsList[])
/**
Function: Add a student record to the array
Argument 1: array of student records
*/

{
    int i = 0;

    while (i < MAX_STUDENTS)
    {
        if (StudentsList[i].number != 0)
        {
            i++;
        }
        else
        {
            get_student_data(&StudentsList[i]);
            break;
        }
    }

    if (i == MAX_STUDENTS)
    {
        printf("\nThe array is full! You cannot add a new record!\n");
    }
}

void display_student_record(STUDENT StudentsList[])
/**
Function: Display the selected record in the array
Argument 1: array of student records
*/

{
    int num;
    printf("\nPlease enter an index position:\n");
    scanf("%d", &num);

    struct student_rec recordToDisplay = StudentsList[num];
    display_student_data(recordToDisplay);
}

int find_student_record(STUDENT StudentsList[])
/**
Function: Searches the array for a record based on Student Number and returns the position in the array if it exists
Argument 1: array of student records
*/

{
    int num;
    printf("\nPlease enter a Student Number:\n");
    scanf("%d", &num);

    int i = 0;

    while (i < MAX_STUDENTS)
    {
        if (StudentsList[i].number == num)
        {
            return i;
        }

        i++;
    }

    return -1;
}
