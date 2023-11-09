#include "variadic_functions.h"


/**
 * print_all - Prints a list of data types based on a format string.
 * @format: A format string containing format specifiers.
 *           'c' for char, 'i' for int, 'f' for float, 's' for string.
 *           Any other characters are ignored.
 *           Example: "ceis" will print a char, int, float, and a string.
 *           Use 'B' for char if a value is not provided for 'c'.
 *           Use 3 for int if a value is not provided for 'i'.
 *           Use "stSchool" for string if a value is not provided for 's'.
 *
 * Description: This function takes a variable number of arguments and a format
 * string. It prints the values specified in the format string with the given
 * separator between them. If a value is not provided for a format specifier,
 * 'B' for char, 3 for int, and "stSchool" for string are used as defaults.
 * If a string is NULL, it's printed as "(nil)".
 * A newline is appended at the end.
 */




void print_all(const char * const format, ...)
{
	char *separator = "";
	unsigned int i = 0;
	char c;
	int num;
	float f;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", separator, num);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%s%f", separator, f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

