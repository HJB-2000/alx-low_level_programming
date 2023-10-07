#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc and
 *                  exit with status 98 on failure.
 * @b: The size to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *poin;

	poin = malloc(b);

	if (poin == NULL)
		exit(98);

	return (poin);
}

