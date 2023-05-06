#include "main.h"

/**
 * *create_array - creates an array
 * @size: the size of the array
 * @c: the content of each cell in array
 *
 * Return: array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
		exit(1);
	}

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
