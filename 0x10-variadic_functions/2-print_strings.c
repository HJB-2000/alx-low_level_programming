#include "variadic_functions.h"



/**
 * print_strings - Print a series of strings followed by a separator and a new
 *                 line.
 * @separator: The string to be printed between strings (or NULL if not to be
 *             printed).
 * @n: The number of strings to be printed.
 * ...: A variable number of string arguments to be printed.
 *
 * Description: This function takes a separator,
 *  the number of strings (n), and a variable number
 *  of string arguments as parameters. It prints the strings, with
 *  "(nil)" printed for any NULL strings, separated by the specified
 *  separator (if not NULL), and appends a new line at the end.
 */





void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
