#include "main.h"
#include <stdlib.h>
#include <stdio.h>



/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for @ptr.
 * @new_size: The new size, in bytes, of the memory block.
 *
 * Description:
 * This function reallocates a memory block pointed to by @ptr to a new size
 * specified by @new_size. It copies the contents from the original memory
 * block up to the minimum of the old and new sizes to the newly allocated
 * space. If @new_size is greater than @old_size, the added memory is not
 * initialized.
 *
 * Return:
 * -On success, a pointer to the reallocated memory block is returned.
 * -If @ptr is NULL, the call is equivalent to malloc(@new_size), and a pointer
 *   to the newly allocated memory is returned.
 * -If @new_size is zero, and @ptr is not NULL, the call is equivalent to
 *   free(@ptr), and NULL is returned.
 * -If @new_size equals @old_size, no reallocation is performed, and @ptr is
 *   returned unchanged.
 * -If memory allocation using malloc fails, NULL is returned, and @ptr remains
 *   unchanged.
 *
 * Note:
 * -The caller is responsible for freeing the memory allocated by this function
 *   using free() when it is no longer needed to avoid memory leaks.
 * -The function provides similar functionality to the standard library realloc
 *   function but with added conditions for handling edge cases.
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		nptr[x] = ((char *) ptr)[x];
	}

	free(ptr);
	return (nptr);
}
