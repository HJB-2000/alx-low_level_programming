#include "main.h"
#include <stdio.h>
#include <stdlib.h>




/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *str1 = NULL;

	unsigned int x;

	int y;

	if (str == NULL)

		return (NULL);

	for (y = 0; str[y] != '\0'; y++)
		;

	str1 = (char *)malloc(y + 1 * sizeof(char));
	if (str1 != NULL)
	{

		for (x = 0; str[x] != '\0'; x++)
			str1[x] = str[x];
	} else
	{

		return (NULL);
	}
	str1[x] = '\0';

	return (str1);
}
