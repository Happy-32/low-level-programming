#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number to evaluate
 * @index: the index of the bit to return
 *
 * Return: value of bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	if (mask & n)
		return (1);
	else
		return (0);
}
