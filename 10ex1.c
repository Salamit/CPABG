//Example program #1 from Chapter 10 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter10ex1.c

/* This program increases a counter from 1 to 5,
printing updates and then countes it back down to 1. */

#include <stdio.h>

main()
{

	int ctr = 0;

	ctr = ctr + 1; // increases the counter to 1
	printf("The counter is at %d.\n", ctr);
	ctr = ctr + 1; // increases the counter to 2
	printf("The counter is at %d.\n", ctr);
	ctr = ctr + 1; // increases the counter to 3
	printf("The counter is at %d.\n", ctr);
	ctr = ctr + 1; // increases the counter to 4
	printf("The counter is at %d.\n", ctr);
	ctr = ctr + 1; // increases the counter to 5
	printf("The counter is at %d.\n", ctr);
	ctr = ctr - 1; // increases the counter to 4
	printf("The counter is at %d.\n", ctr);
	ctr = ctr - 1; // increases the counter to 3
	printf("The counter is at %d.\n", ctr);
	ctr = ctr - 1; // increases the counter to 2
	printf("The counter is at %d.\n", ctr);
	ctr = ctr - 1; // increases the counter to 1
	printf("The counter is at %d.\n", ctr);

	return 0;
}