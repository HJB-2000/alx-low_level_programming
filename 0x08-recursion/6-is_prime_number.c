#include "main.h"

/**
 * prime_helper - Checks if a number is prime recursively.
 * @n: The number to be checked for primality.
 * @divisor: The divisor being tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int prime_helper(int n, int divisor)
{
	if (n == divisor)
		return (1);
	else if (n % divisor == 0)
		return (0);
	return (prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The integer to be checked for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}

