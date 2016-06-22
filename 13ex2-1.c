// sizeof(int) example from Chapter 13 of Absolute Beginner's 
// Guide to C. 
// Filename 13ex2-1

// Shows the amount of memory used to store a data type

#include <stdio.h>

main()
{




	int i = sizeof(int); // Puts the size of integers into i.
	float f = sizeof(float); //Puts the size of floats into i.
	char c = sizeof(char); //Puts the size of characters into i.
	long l = sizeof(long); //Puts the size of longs into i.
	short s = sizeof(short); //Puts the size of shorts into i. 
	double d = sizeof(double); //Puts the size of doubles into i.

	printf("The size of an int is %d\n", i);
	printf("The size of a float is %d\n", f);
	printf("The size of a character is %d\n", i);
	printf("The size of a long is %d\n", l);
	printf("The size of a short is %d\n", s);
	printf("The size of a double is %d\n", d);


}