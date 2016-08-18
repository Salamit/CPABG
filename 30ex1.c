// Example program #1 from Chapter 30 of Absolute Beginner's Guide 
// to C, 3rd Edition
// File Chapter30ex1.c 

//My notes: Absolute Beginner's Guide to C has typos. In this exercise
//I have changed what I believe were typos so that the program works

/* The program is a simple demonstration of the difference between
global variables and local variables. */

#include <stdio.h>
int g1 = 10;

int prAgain();

int main()
{
	float ii;
	ii = 9.0;

	printf("%d %.2f\n", g1, ii); // prints the lst global and first
	// local variable
	prAgain(); //calls our first function
	return 0; 
}

float g2 = 19.0;

int prAgain()
{
	int iii = 5;

	//Can't print 11--it is local to main
	printf("%d %.2f %d\n", iii, g2, g1);
	return 0;
}