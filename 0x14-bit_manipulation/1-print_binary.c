#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	/* Create a mask with only the leftmost bit set to 1 */
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	/* Flag to skip leading zeros */
	int flag = 0;

	/* If the number is 0, print '0' and return */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Iterate through each bit in the binary representation */
	while (mask > 0)
	{
		/* If the current bit is 1, print '1' and set the flag */
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		/* If the current bit is 0 and leading zeros have been passed, print '0' */
		else if (flag || mask == 1)
		{
			_putchar('0');
		}

		/* Shift the mask to the right (move to the next bit) */
		mask >>= 1;
	}
}
