// Example program #1 from Chapter 13 of Absolute Beginner's Guide
// to C, 3rd Edition
// File 13ex1.c

/* This program asks for a number between 1 and 100 and tells 
if the number is divisible by 2 through 9. */

#include <stdio.h>

main()
{
	//Define the integer to hold the user's guess and then get it
	//from the user

	int numPick;
	printf("Pick an integer between 1 and 100 \n");
	printf("(The higher the better!)\n");
	scanf(" %d", &numPick); // remember that for an int, you do need the &

	printf("%d %s divisible by 2.\n", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 3.\n", numPick, (numPick % 3 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 4.\n", numPick, (numPick % 4 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 5.\n", numPick, (numPick % 5 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 6.\n", numPick, (numPick % 6 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 7.\n", numPick, (numPick % 7 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 8.\n", numPick, (numPick % 8 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 9.\n", numPick, (numPick % 9 == 0) ? ("is") : ("is not"));

	return 0;

}