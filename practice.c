#include <stdio.h>

int main()
{
	int age; // Defines a regular integer
	int *pAge; // Defines a pointer to an integer
	age = 19; //Stores 19 in age
	pAge = &age; //Links up the pointer

	printf("%i\n", *pAge);
}