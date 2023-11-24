#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return:
 *   If little-endian - 1
 *   If big-endian - 0
 */
int get_endianness(void)
{
	unsigned int num = 1;

	/* Use bitwise AND to check the least significant byte */
	if (*(char *)&num)
		return (1); /* System is little-endian */
	else
		return (0); /* System is big-endian */
}

