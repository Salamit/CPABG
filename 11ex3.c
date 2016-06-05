#include <stdio.h>

main()
{


	int prefer;

	printf("On a scale of 1 to 10, how happy are you?\n");
	scanf(" %d", &prefer);

	// Once the user's level of happiness is entered a series of if
	//statements test the number agains decreasing numbers.
	//Only one of the four will be executed.

	if (prefer >= 8)
	{
		printf("Great for you!\n");
		printf("Things are going well for you!\n");
	}
	else if (prefer >= 5)
	{
		printf("Better than average, right?\n");
		printf("Maybe things will get even better soon!\n");
	}
	else if (prefer >= 3)
	{
		printf("Sorry you're feeling not so great.\n");
		printf("Hope things turn around soon...\n");
	}
	else
	{
		printf("Hang in there--things have to improve, right?\n");
		printf("Always darkest before the dawn.\n");
	}
/*
//Newbie version after reading through the code in the book once.
//Added a condition for if the user enters a number below 0
//or above 10

	printf("How happy are you on a scale of 1 to 10\n");
	scanf(" %d", &prefer);

	if (prefer > 10)
	{
		printf("You just broke me. I have to quit\n");
	}

	else if (prefer >= 8)
	{
		printf("Life is good!\n");
		printf("Share some happiness with others!\n");
	}

	else if (prefer >= 5)
	{
		printf("Whatever you are going through now ");
		printf("only lasts for a short time.\n");
		printf("Go smell some roses!\n");
	}

	else if (prefer >= 3)
	{
		printf("Sorry about the difficulty you are going through.\n");
		printf("I am working on finding someone who answers with \n");
		printf("an 8 or above to share some happiness with you\n");

	}

	else if (prefer >= 0)
	{
		printf("Things must be really bad for you.\n");
		printf("I'll share a story with you about a time when my dad was having a hard time.\n");
		printf("Once my dad was sad because of a mistake\n");
		printf("I told my dad to embrace his mistakes\n");
		printf("He cried. Then he hugged my sister & me\n");
	}

	else
	{
		printf("Not reading instructions means screwing up several things at once.\n");
	}

*/
	return 0;
}