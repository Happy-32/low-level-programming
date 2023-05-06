#include "main.h"

/**
 * _print_rev_recursion - prints a text in the reverse direction
 * @s: pointer to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
