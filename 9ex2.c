// Example program #2 from Chapter 9 of Absolute
//Beginner's Guide to 
//C, 3rd Edition
//File Chapter9ex2.c 


/* This program asks the user for a number of tires
and price per tire. It then calculates a total
cost, adding sale tax */

/* If you find you use a sales tax rate that may change,
use #define to set it in one place */

/* Changed the variable netSales(used in the book)
to netCost because netCost is less confusing than netSales */

#include <stdio.h>
#define SALESTAX .07

main()
{
	//Variables for the number of tires purchased
	//price, a before-tax total, and a total cost
	//with tax

	int numTires;
	float tirePrice, beforeTax, totalCost;

	/* Get the number of tires purchased and the
	price per tire. */
	printf("How many tires did you purchase? ");
	scanf(" %d", &numTires);

	printf("What was the cost per tire (enter in $XX.XX format)? ");
	scanf(" $%f", &tirePrice);

	/* Compute the price */

	beforeTax = tirePrice * numTires;
	totalCost = beforeTax + (beforeTax * SALESTAX);

	printf("%You spent $%.2f on your tires\n\n\n", totalCost);

	return 0;
}

