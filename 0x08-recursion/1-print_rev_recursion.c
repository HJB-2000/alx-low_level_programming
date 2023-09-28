#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: The string to be printed in reverse.
 *
 * Return: Void (No return value).
 *
 * This function prints the characters of the input string 's' in reverse
 * order using recursion. It does not return a value.
*/


void _print_rev_recursion(char *s)
{

	if (*s == '\0')

	{
		return;
	}

	_print_rev_recursion(s + 1);

	_putchar(*s);
}

