#include "variadic_functions.h"


/**
 *print_numbers - Print numbers separated by a separator and a new line.
 *
 *@separator: The string between numbers (or NULL if not to be printed).
 *@n: The number of integers to be printed.
 *...: A variable number of integer arguments to be printed.
 *
 *Description: This function takes a separator, the number of integers (n), and
 *a variable number of integers as arguments. It prints the integers, separated
 *by the specified separator (if not NULL), and appends a new line at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);



	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}


