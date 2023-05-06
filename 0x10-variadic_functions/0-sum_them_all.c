#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all the
 *function paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: n == 0? Return 0.
 *         Otherwise Return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
