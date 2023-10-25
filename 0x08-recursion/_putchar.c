#include <unistd.h>
#include "main.h"


/**
 * _putchar - Outputs a character to the standard output (stdout)
 * @c: The character to be printed
 *
 * This function writes the character 'c' to the standard output (stdout).
 *
 * Return: On success, it returns 1.
 * On error, it returns -1, and sets the errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


