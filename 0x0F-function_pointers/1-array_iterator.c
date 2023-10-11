#include "function_pointers.h"

/**
 * array_iterator - Execute a specified function on each element of an array.
 * @array: The array to be processed.
 * @size: The size of the array.
 * @action: A function to apply to each array element.
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		/* Proceed with the code if both 'array' and 'action' are not NULL. */
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
