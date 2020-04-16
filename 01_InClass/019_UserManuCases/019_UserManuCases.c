#include <stdio.h>
#include <stdlib.h>

int PrintUserMenu( void );

int main( int argc, char *argv[] )
{
	int menuSelection = 0, runMenuPromt = 1;

	while(runMenuPromt)
	{
		menuSelection = PrintUserMenu();

		switch(menuSelection)
		{

			case 1:
				printf("Thomas 1\n");
				break;
			
			case 2:
				printf("1 + 1 = 2.5\n");
				break;

			case 3:
				printf("Exciting. Goodbye.\n");
				runMenuPromt = 0;
				break;

			default:
				printf("Invalid menu selection.\n");
				break;
		} //switch(menuSelection)
	} //while(runMenuPrompt)
	return EXIT_SUCCESS;
}



/*	prints the user menu and returns the selected item
 * 	Inputs: None.
 * 	Outputs: int selectedMenuItem
 *  Error behavior: returns zero for all invalid menu item selections
 */	
int PrintUserMenu( void ) {
	int selectedMenuItem = 0;
	printf("\n------------------------------------\n");
	printf("* * * * Welcome to CoolCode! * * * *\n");
	printf("------------------------------------\n");
	printf("Select from the following options:\n");
	printf("1: Print Coder Name\n");
	printf("2: Calculate 1+1:\n");
	printf("3: Exit");
	scanf("%d", &selectedMenuItem );
	return selectedMenuItem;
}	


