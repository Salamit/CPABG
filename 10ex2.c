/* Example program #2 from Chapter 10 of 
Absolute Beginner's Guide to C, 3rd Edition
File Chapter10ex2.c */

/* This program also increases a counter from 1 to 5, 
priting updates and then counts it back down to 1. 
However, it uses compound operator */

#include <stdio.h>

main()
{
	int ctr = 0;

	ctr += 1; //increases counter to 1
	printf("Counter is at %d.\n", ctr);
	ctr += 1; //increases counter to 2
	printf("Counter is at %d.\n", ctr);


	//increases counter to 3
	printf("Counter is at %d.\n", ctr += 1);
	//increases counter to 4
	ctr += 1;
	printf("Counter is at %d.\n", ctr);
	//increases counter to 5
	printf("Counter is at %d.\n", ctr += 1 );

	ctr -= 1; //Decreases counter to 4
	printf("Counter is at %d.\n", ctr);
	//Decreases counter to 3
	printf("Counter is at %d.\n", ctr -= 1);
	//Decreases counter to 2
	printf("Counter is at %d.\n", ctr -= 1);
	//Decreases counter to 1
	printf("Counter is at %d.\n", ctr -= 1);

	return 0; 





}