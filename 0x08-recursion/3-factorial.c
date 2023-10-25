#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which the factorial is calculated.
 *
 * Return: The factorial of 'n'. If 'n' is less than 0, returns -1.
 *         Factorial of 0 is defined as 1.
 */
int factorial(int n)
{
	/* Check for invalid input (negative number) */
	if (n < 0)
	{
		return (-1); /* Return -1 to indicate an error */
	}

	/* Base case: Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

/*
 * Recursive case: Calculate factorial using recursion
 * Multiply 'n' by the factorial of 'n - 1'
*/
	return (n * factorial(n - 1));
}
