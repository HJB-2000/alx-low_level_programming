#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: 0 on success, 98 on failure
 *
 * Description: This program multiplies two positive numbers and
 *  performs input validation and argument validation.
 * If the input is invalid, it prints an error message and
 *  exits with a status of 98. If the input is valid, it multiplies
 * the two numbers and prints the result followed by a new line.
 */



int main(int argc, char **argv)
{
	int i, j;
	int num1 = 0, num2 = 0, result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (98);
		}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
