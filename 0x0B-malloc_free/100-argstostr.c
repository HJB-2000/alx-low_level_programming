#include "main.h"
#include <stdio.h>
#include <stdlib.h>




/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to a new concatenated string
 */




char *argstostr(int ac, char **av)
{
	int f;
	int g;
	char *h = NULL;
	int j;
	int k;

	j = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (f = 0; f < ac; f++)
	{
		for (g = 0; av[f][g] != '\0'; g++)
		{
			k++;
		}
	}


	h = (char *)malloc(k + ac + 1 * sizeof(char));
	if (h == NULL)
		return (NULL);
	for (f = 0; f < ac; f++)
	{
		for (g = 0; av[f][g] != '\0'; g++)
		{
			h[j] = av[f][g];
			j++;

		}

		h[j] = '\n';
		j++;
	}

	h[j] = '\0';
	return (h);
}
