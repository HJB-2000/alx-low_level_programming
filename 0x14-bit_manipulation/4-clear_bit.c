#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the decimal number
 * @index: index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Shift 1 to the left by the index to create a mask with the bit to clear */
	unsigned long int mask = 1UL << index;
	/* Check if the index is out of bounds for the given number */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);



	mask = ~mask;

	/* Clear the bit at the given index to 0 using bitwise AND (&) */
	*n &= mask;

	return (1);
}
