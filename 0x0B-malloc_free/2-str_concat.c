#include "main.h"
#include <stdio.h>
#include <stdlib.h>




/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */


char *str_concat(char *s1, char *s2)
{
	char *str1 = NULL;

	unsigned int x;

	int y;
	int z;
	int co;

	co = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (y = 0; s1[y] != '\0'; y++)
		;
	for (z = 0; s2[z] != '\0'; z++)
		;
	str1 = (char *)malloc((y + z + 1) * sizeof(char));

	if (str1 == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		str1[x] = s1[x];

	for (; s2[co] != '\0'; x++)
	{
		str1[x] = s2[co];
		co++;
	}


	return (str1);
}
