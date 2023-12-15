#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the decimal number
 * @index: index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Shift 1 to the left by the index to create a mask with the bit to set */
	unsigned long int mask = 1UL << index;
	/* Check if the index is out of bounds for the given number */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/* Set the bit at the given index to 1 using bitwise OR (|) */
	*n |= mask;

	return (1);
}
