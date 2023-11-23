#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: decimal number
 * @index: index of the bit to retrieve
 *
 * Return: the value of the bit at the given index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{

	/* Shift 1 to the left by the index to isolate the desired bit */
	unsigned long int mask = 1UL << index;
	/* Check if the index is out of bounds for the given number */
	if (index >= sizeof(n) * 8)
		return (-1);
	/* Check if the bit at the given index is 1 or 0 */
	return ((n & mask) ? 1 : 0);
}
