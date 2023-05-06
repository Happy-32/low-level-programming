#include "main.h"

/**
 * main - displays the number of command line
 * arguments used for the program
 * @argc: The number of command line arguments
 * @argv: An array of al command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0; *argv; i++, argv++)
		{
			;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}
