// Example program #2 from Chapter 14 of Absolute Beginner's Guide
// to C, 3rd Edition
// File 14ex2.c 

/* This program will multiply two numbers and display the result for 
for as long as the user wants. Answering 'N' will break the loop. */

#include <stdio.h>

main()
{
	float num1, num2, result;
	char choice;

	do {
		printf("Enter your first number to multiply: ");
		scanf(" %f", &num1);

		printf("Enter your number to multiply: ");
		scanf(" %f", &num2);

		result = num1 * num2;

		printf("%.2f times %.2f is %.2f\n", num1, num2, result);

		printf("Would you like to enter and another pair of ");
		printf("numbers to multiply?\n");
		printf("Y/N: \n");
		scanf(" %c", &choice);
		//If the user enters a lowercase n, this if statement will 
		//convert it to an N
		if (choice == 'n')
			{ 
				choice = 'N';
			}

		if (choice == 'y')
			{ 
				choice = 'Y';
			}


	} while ( choice == 'Y'); //avoided the if not

	return 0;
}