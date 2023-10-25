#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string recursively
 * @s: The string to be measured
 *
 * Return: The length of the string.
 *
 * This function calculates and returns the length of the input string 's'
 * by recursively counting its characters until the null terminator is reached.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

