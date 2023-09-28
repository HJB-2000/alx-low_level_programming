#include "main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y. If y is less than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
		/* Return -1 to indicate an error */
	}

	if (y == 0)
	{
		return (1);
		/* Base case: Any number raised to the power of 0 is 1 */
	}

	return (x * _pow_recursion(x, y - 1));
	/* Recursive case: Calculate x^y using recursion */
}
