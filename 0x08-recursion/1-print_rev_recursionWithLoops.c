#include "main.h"

/**
 * _print_rev_recursion - prints a text in the reverse direction
 * @s: pointer to the string
 */
 
void _print_rev_recursion(char *s)
{
	char revstr[20];
	char *rev = revstr;
	int i = -1;
	while (*s)
	{
		s++;
		i++;
	}
	
	while (i >= 0)
	{
		s--;
		*rev = *s;
		rev++;
		--i;
		_putchar(*s);
	}
	
} 
