// Example program #2 from Chapter 13 of Absolute 
// Beginner's Guide to C, 3rd Edition
// File 13ex2.c 

/* This program increases a counter from 1 to 5, printing updates
a dn then counts it back down to 1. However, it uses the increment and decrement operators */

//Shows the difference between postfix and prefix operators

#include <stdio.h>

main()
{
	int ctr = 0;



	//Using postfix operators

	printf("Let the counting begin...\n");
	printf("Counter is at %d.\n", ctr++);
	printf("Counter is at %d.\n", ctr++);
	printf("Counter is at %d.\n", ctr++);
	printf("Counter is at %d.\n", ctr++);
	printf("Counter is at %d.\n", ctr++);

	printf("The count down begins...\n");
	printf("Counter is at %d.\n", ctr--);
	printf("Counter is at %d.\n", ctr--);
	printf("Counter is at %d.\n", ctr--);
	printf("Counter is at %d.\n", ctr--);

	//Using prefix operators

	printf("Let the counting begin...\n");
	printf("Counter is at %d.\n", ++ctr);
	printf("Counter is at %d.\n", ++ctr);
	printf("Counter is at %d.\n", ++ctr);
	printf("Counter is at %d.\n", ++ctr);
	printf("Counter is at %d.\n", ++ctr);

	printf("The count down begins...\n");
	printf("Counter is at %d.\n", --ctr);
	printf("Counter is at %d.\n", --ctr);
	printf("Counter is at %d.\n", --ctr);
	printf("Counter is at %d.\n", --ctr);


	return 0;
}