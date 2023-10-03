#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * creates_an_array_of_chars -nitializes it with a specific char.
 * @si: size of the array
 * @ch: character
 * * Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int si, char ch)
{
	char *array = NULL;
	unsigned int x;

	if (si == 0)
		return (NULL);
	if (si != 0)
	{
		array = (char *)malloc(si * sizeof(char));
		if (array != NULL)
		{
			for (x = 0; x < si; x++)
				array[x] = ch;
		}
	}
	return (array);
}
