#include "main.h"

/**
 * main - Displays all the arguments passed into the program
 * @argc: The number of command line arguments
 * @argv: An array of al command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
