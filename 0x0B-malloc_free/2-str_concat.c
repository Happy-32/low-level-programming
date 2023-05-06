#include "main.h"

/**
 * str_concat - joins or concatenates two strings
 * @s1: One of the two strings
 * @s2: another one of the two strings
 *
 * Return: A pointer to the newly allocated
 * space in memory with the joined strings
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	int index, concat_ind, len;

	concat_ind = 0;
	len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_string = malloc(sizeof(char) * len);

	if (concat_string == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_string[concat_ind++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_string[concat_ind++] = s2[index];

	return (concat_string);
}
