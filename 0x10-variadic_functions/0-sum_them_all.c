#include "variadic_functions.h"



/**
 * sum_them_all- This function calculates the sum of its input parameters.
 *
 * @n: The number of items to be added.
 *
 * Return: Returns the sum of all input parameters.
 *         If n is 0, it returns 0.
 */


int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

