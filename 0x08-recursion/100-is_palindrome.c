#include "main.h"
int find_strlen(char *s);
int palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Finds the length of a string.
 * @s: The string being measured.
 *
 * Return: Length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * palindrome - Checks if a string is a palindrome.
 * @s: The string being checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (palindrome(s, len, index));
}

