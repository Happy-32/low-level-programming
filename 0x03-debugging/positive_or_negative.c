#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: This program generates a random number
 * and lets you now weather it is positive or negative.
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	
}
