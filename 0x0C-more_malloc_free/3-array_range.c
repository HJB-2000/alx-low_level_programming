#include "main.h"
#include <stdlib.h>




/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive) for the array.
 * @max: The maximum value (inclusive) for the array.
 *
 * Description:
 * This function creates an array of integers containing all values from @min
 * to @max, inclusive. The values in the array are ordered from @min to @max.
 * It returns a pointer to the newly created array. If @min is greater than
 * @max, or if memory allocation using malloc fails, it returns NULL.
 *
 * Return:
 * - On success, a pointer to the newly created array is returned.
 *-If @min is greater than @max or if memory allocation fails,NULL is returned.
 *
 * Note:
 * The caller is responsible for freeing the memory allocated by this function
 * using free() when it is no longer needed to avoid memory leaks.
 */



int *array_range(int min, int max)
{
	int *C, x = 0;

	if (min > max)
		return (NULL);

	C = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (C == NULL)
		return (NULL);

	while (min <= max)
	{
		C[x] = min;
		x++;
		min++;
	}

	return (C);
}

