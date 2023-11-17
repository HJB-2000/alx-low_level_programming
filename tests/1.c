#include "main.h"

/**
 * call_flag - Calculates active flags based on a formatted string.
 * @format: Formatted string in which to print the arguments.
 * @position: Parameter used in the calculation.
 *
 * This function calculates and returns active flags based on the formatted
 * string (@format) and an additional parameter (@i). The result represents the
 * flags that influence printing behavior.
 * 
 * Return: Active flags determined from the provided format.
 */

int call_flag(const char *format, int *position)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {MINUS_FLAG, PLUS_FLAG, ZERO_FLAG, HASH_FLAG, SPACE_FLAG, 0};

	for (curr_i = *position + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*position = curr_i - 1;

	return (flags);
}
