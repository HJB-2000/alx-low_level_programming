#include "main.h"

/**
 *_puts_recursion - Recursively prints a string followed by a newline character
 *@s: string
 *Return: On success 1.
 *On error, -1 is returned, and error is set appropriately.
*/

void _puts_recursion(char *s)
{
/*Check if the current character is the null terminator (end of the string)*/
	if (*s == 0)
	{
/*If it is, print a newline character and return*/
		_putchar('\n');
		return;
	}
/*Print the current character*/
	_putchar(*s);
/*Move to the next character in the string and continue the recursion*/
	_puts_recursion(s + 1);
}

