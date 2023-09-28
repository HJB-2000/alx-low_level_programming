/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if 'n' is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}
	else if (n <= 3)
	{
		return (1); /* 2 and 3 are prime numbers */
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0); /* Numbers divisible by 2 or 3 are not prime */
	}

	else

	{
		int i = 5;

		while (i * i <= n)

		{
			if (n % i == 0 || n % (i + 2) == 0)

			{
				return (0); /* If divisible by i or i+2, not prime */
			}

			i += 6; /* Optimized for checking prime candidates */
		}
		return (1); /* It's a prime number */
	}
}
