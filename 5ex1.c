// Example program #1 from Chapter 5of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter5ex1.c 

/* This is a sample program that lists three kids and 
their school supply needs, as well as cost to buy the 
supplies */

#include <stdio.h>

main()
{
	// Set up the vairables, as well as define a few

	char firstInitial, middleInitial;
	int number_of_pencils;
	int number_of_notebooks;
	float pencils_unit_cost = 0.23;
	float notebooks_unit_cost = 2.89;
	float lunchbox = 4.99;

	//The information of the first child

	firstInitial = 'J';
	middleInitial = 'R';
	number_of_pencils = 7;
	number_of_notebooks = 4;

	printf("%c%c needs %d pencils and %d notebooks, and 1 lunchbox\n", 
		firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", number_of_pencils*pencils_unit_cost
	+ number_of_notebooks*notebooks_unit_cost + lunchbox);

	//This information is for the second child

	firstInitial = 'A';
	middleInitial = 'J';
	number_of_pencils = 10;
	number_of_notebooks = 3;

	printf("%c%c needs %d pencils and %d notebooks, and 1 lunchbox \n",
	firstInitial, middleInitial, number_of_pencils, number_of_notebooks);

	printf("The total cost is $%.2f\n\n", number_of_pencils*pencils_unit_cost 
		+ number_of_notebooks*notebooks_unit_cost + lunchbox);

	//This is information is for the third child

	firstInitial = 'M';
	middleInitial = 'T';
	number_of_pencils = 9;
	number_of_notebooks = 2;

	printf("%c%c needs %d pencils and %d notebooks, and 1 lunchbox \n",
	firstInitial, middleInitial, number_of_pencils, number_of_notebooks);

	printf("The total cost is $%.2f\n\n", number_of_pencils*pencils_unit_cost
	+ number_of_notebooks*notebooks_unit_cost + lunchbox);

	return 0;
}