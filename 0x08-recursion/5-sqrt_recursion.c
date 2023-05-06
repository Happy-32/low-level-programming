#include "main.h"

int Sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * Sqrt - Finds the square root of any number.
 * @num: The number to whose sqrt is to be found.
 * @root: tested root.
 *
 * Return: the square root -If the number has a square root.
 *         If the number does not have a natural square root - -1.
 */
int Sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (Sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the square root of a number.
 * @n: The number whose root is to be found.
 *
 * Return: If n has a quare root - the quare root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (Sqrt(n, root));
}
