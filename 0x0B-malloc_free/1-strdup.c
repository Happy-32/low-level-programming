#include "main.h"

/**
 * *_strdup - creates an string
 * @str: the size of the string
 *
 * Return: dupe.
 */
char *_strdup(char *str)
{
	char *dupe;
	int index, len;

	len = 0;


	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dupe = (char *)malloc(sizeof(char) * (len + 1));

	if (dupe == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dupe[index] = str[index];

	dupe[len] = '\0';

	return (dupe);
}
