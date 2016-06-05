//Example program #2 from Chapter 11 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter 11ex2.c 

/* This program asks the user for their birth year and 
calculates how old they will be in the current year.
(it also checks to make sure a future year has not been entered.)
It then tells the user if they were born in a leap year. */

#include <stdio.h>
#define CURRENTYEAR 2016


main()

{
	int yearBorn, age;

	printf("What year were you born?\n");
	scanf(" %d", &yearBorn);

	//This if statement can do some data validation, making sure
	//the year makes sense
	//The statements will only execute if the year is after the
	//current year

	if (yearBorn > CURRENTYEAR)
	{
		printf("Really? You haven't been born yet?\n");
		printf("Congratulaions on time travel!\n");
	}

	else
	{
		age = CURRENTYEAR - yearBorn;

		printf("\nSo this year you will turn %d on your birthday", age);

		// The second if statment uses the modulus operator to test
		//if the year of birth was a Leap year. Again, only if it
		//is will the code execute

		if ((yearBorn % 4) == 0)
		{
			printf("\nYou were born in a Leap Year cool!\n");
		}
	}

	/* 
	//My newbie version, constructed without looking at the code
	//in the book. The code begins below
	
	int age;
	int yearBorn;

	printf("What year were you born?\n");
	scanf(" %d", &yearBorn);

	if (yearBorn < CURRENTYEAR)
	{
		printf("You are %d\n", CURRENTYEAR - yearBorn);

	}

	else
	{
		printf("Congratulations on time travel!\n");
		printf("What year were you born?\n");
		scanf(" %d", &yearBorn);
	}

	if ((CURRENTYEAR % 4) == 0)
	{
		printf("Congrats, you were born in a leap year!\n");
	}

	*/

	return 0;	


}