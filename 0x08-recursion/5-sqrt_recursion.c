#include "main.h"

/**
 * _sqrt_helper - Recursively calculates the natural square root of a number.
 * @n: The numeric value for which the square root is being computed.
 * @guess: The current estimation for the square root.
 *
 * Return: The natural square root of 'n'. If 'n' does not have a natural
 *         square root, returns -1.
 */
int _sqrt_helper(int n, int guess);

/**
*_sqrt_recursion-Computes the squareroot of a given number using recursion.
* @n: The numeric value for which the square root is being determined.
*
*Return:The square root of 'n' if it existsnaturally;otherwise,it returns -1.
 */
int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n < 0)
	{
		/* Return -1 to indicate an error for negative input */
		return (-1);
	}

	return (_sqrt_helper(n, guess));
}

/**
 * _sqrt_helper - A supporting function that recursively computes
 *                the square root naturally.
 * @n: The numeric value for which the square root is being computed.
 * @guess: The current estimation for the square root.
 *
 * Return: The natural square root of 'n'. If 'n' does not have a natural
 *         square root, returns -1.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		/* Found the square root */
		return (guess);
	}
	else if (guess * guess > n)
	{
		/* 'n' lacks a natural square root */
		return (-1);
	}
	else
	{
		/* Increment the guess and continue recursion */
		return (_sqrt_helper(n, guess + 1));
	}
}
