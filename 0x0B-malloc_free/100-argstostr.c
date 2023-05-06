#include "main.h"

/**
 * *argstostr - concatenates all command line arguments
 * for the program into a string
 * @ac: The argument count
 * @av: The argument vector
 * Return: A pointer to the new string OR
 * if ac == 0 || av == NULL Return NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			ac++;
	}

	str = malloc(sizeof(char) * ac + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}

	str[ac] = '\n';

	return (str);
}
