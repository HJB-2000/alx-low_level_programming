#include "main.h"

/**
 * get_length - Obtain the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int get_length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + get_length(str + 1));
}

/**
 * compare_strings - Compare a string with its reverse.
 * @str: The string to compare.
 * @length: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int compare_strings(char *str, int length)
{
	if (*str != *(str + length))
		return (0);
	else if (*str == '\0')
		return (1);
	return (compare_strings(str + 1, length - 2));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to evaluate.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	length = get_length(s);
	return (compare_strings(s, length - 1));
}
