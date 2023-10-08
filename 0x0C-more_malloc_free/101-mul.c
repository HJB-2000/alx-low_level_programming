#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isAllDigits - checks if a string consists of digits.
 * @str: Pointer to the string to be checked.
 *
 * Return: 1 if not all digits, 0 if all digits.
 */
int isAllDigits(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return 1;
		i++;
	}
	return 0;
}

/**
 * customAtoi - converts a string of ASCII digits to an integer.
 * @s: Pointer to the source string.
 *
 * Return: Integer value of the digits.
 */
int customAtoi(char *s)
{
	int i = 0;
	int result = 0;

	while (s[i])
	{
		if (isdigit(s[i]))
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return result;
}

/**
 * main - entry point of the program.
 * @argc: Argument count.
 * @argv: 2D array of arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}

	if (isAllDigits(argv[1]) || isAllDigits(argv[2]))
	{
		printf("Error\n");
		return 98;
	}

	result = customAtoi(argv[1]) * customAtoi(argv[2]);
	printf("%d\n", result);

	return 0;
}
