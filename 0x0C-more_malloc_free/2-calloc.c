#include "main.h"
#include <stdlib.h>



/**
 * _calloc - Allocates memory for an array, initializing it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size, in bytes, of each element.
 *
 * Description:
 * This function allocates memory for an array of @nmemb elements, each of
 * @size bytes, and initializes the memory to zero. It returns a pointer to
 * the allocated memory. If @nmemb or @size is 0, it returns NULL. If the
 * memory allocation fails, NULL is also returned.
 *
 * Return:
 * - On success, a pointer to the allocated memory is returned.
 * - If @nmemb or @size is 0, or if memory allocation fails, NULL is returned.
 *
 * FYI:
 * The standard library provides a different function called calloc, which
 * serves a similar purpose. You can refer to the man page for calloc to learn
 * more about its usage and differences from this custom _calloc function.
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *poin;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	poin = malloc(y);

	if (poin == NULL)
		return (NULL);

	while (x < y)
	{
		poin[x] = 0;
		x++;
	}

	return (poin);
}
