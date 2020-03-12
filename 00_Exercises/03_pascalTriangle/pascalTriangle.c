#include <stdio.h>
#include <stdlib.h>

void PrintUsageMessage(void);
void PrintPascalTriangle(int);

const int lowerLimit = 1;
const int upperLimit = 20;

int main( int argc, char* argv[] )
{
	int inputValue = 0;
	if( argc != 2 ){
		PrintUsageMessage();
		return 0;
	}
	else
	{
		inputValue = atoi(argv[1]);
		if( inputValue >= lowerLimit && inputValue <= upperLimit )
		{
			PrintPascalTriangle( inputValue );
		}
		else
		{
			// no valid input
			PrintUsageMessage();
			return 0;
		}

	}
	return 0;
}

void PrintUsageMessage(void){
	printf("Usage: PascalTriangle wholeNumber\n\t \
		wholeNumber: integer on the interval [%d,%d]\n",
		lowerLimit, upperLimit);
}

void PrintPascalTriangle( int pascalLimit ){
	int coef = 1, space;
	for(int i = 0; i < pascalLimit; i++)
	{
		for(space = 1; space <= pascalLimit - i; space++)
			printf("  ");
		for(int j = 0; j <= i; j++)
		{
			if (j==0 || i==0)
				coef = 1;
			else
				coef = coef*(i-j+1)/j;
			printf("%4d", coef);
			
		}
		printf("\n");
	}
}

