#include "main.h"

/**
 * main - displays the product of the first two
 * integer arguments passed into the program
 * @argc: The number of command line arguments
 * @argv: An array of al command line arguments
 * Return: Not enough arguments? Print 1. Else print 0.
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
