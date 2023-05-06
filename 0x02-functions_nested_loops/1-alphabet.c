#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
