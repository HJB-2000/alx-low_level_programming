#include <stdio.h>
#include <math.h>

/* Function declarations */
int is_prime(long int n);
long int biggest_factor(long int a);

/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number;

	number = 612852475143;

	if (is_prime(number) == 1)
	{
		printf("%ld\n", number);
	}
	else
	{
		printf("%ld\n", biggest_factor(number));
	}
	return (0);
}

/**
 * is_prime - analyzes if a number is prime or not
 * @n: number to check
 * Return: 1 if it is prime, 0 if not
 */
int is_prime(long int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}

/**
 * biggest_factor - returns the biggest prime factor of a number
 * @a: number to check
 * Return: biggest factor
 */
long int biggest_factor(long int a)
{
	long int i, factor;

	factor = a;
	for (i = 2; i <= factor; i++)
	{
		if (is_prime(factor) == 1)
		{
			break;
		}
		else
		{
			if ((factor % i == 0) && (is_prime(i) == 1))
			{
				factor = factor / i;
				continue;
			}
			else
			{
				factor = factor;
			}
		}
	}
	return (factor);
}
