#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string which is to be measured.
 *
 * Return: Length.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
