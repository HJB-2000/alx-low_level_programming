#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to standard output.
 * @c: The character to be printed.
 *
 * Description: This function writes a single character to the standard output.
 *              If successful, it returns 1; otherwise, it returns -1 and sets
 *              errno appropriately.
 *
 * Return: On success, returns 1. On error, returns -1, and sets errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}