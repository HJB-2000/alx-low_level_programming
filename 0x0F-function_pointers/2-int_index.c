#include "function_pointers.h"


/**
 * int_index - Search for an integer in an array.
 * @array: Pointer to an array containing elements.
 * @size: The number of elements in the array.
 * @cmp: A function used to compare values.
 *
 * Return:
 *   - The index of the first corresponding element.
 *   - -1 if no element matches the criteria or when size is less than zero.
 */


int int_index(int *array, int size, int (*cmp)(int))
{

	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);

}

