#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

const double maxNorthCH = 47.808455;
const double minNorthCH = 45.817920;
const double maxEastCH = 10.492035;
const double min EastCH = 5.95591;


struct Geolocation
{
	double latitude;
	double longtitude;
};

//function prototypes
void printStudentPassByValue( struct Student *inputStudent);
void clamp( double* inputValue, double minValue, double maxValue);


int main( int argc, char *argv[])
{
	struct Student student1;

	printf("Enter name: ");
	fgets(student1.name, MAX_NAME_LENGTH, stdin);

	printf("Enter age: ");
	scanf("%lf", &student1.age);

	printStudentPassByValue( student1 );
	printStudentPassByReference( &student1 );


	return EXIT_SUCCESS;
}


void printStudentPassByReference( struct Student *inputStudent)
{
	printf("\nStudent information (by reference): \n");
	printf("----------------------------------\n");
	printf("Name: %s", inputStudent.name);
	printf("\nAge: %d\n", inputStudent.age);
}

void clamp( double* inputValue, double minValue, double maxValue)
{
	if( *intValue < minValue )
	{
		*inputValue = minValue;
	}
	if( *inputValue > maxValue )
	{
		*inputValue = maxValue;
	}
}


void checkStudentPositio(struct Student inputStudent)
{
	struct Geolocation *pStudentLocation = &inputStudent.currentLocation;

	printf("\n\n


