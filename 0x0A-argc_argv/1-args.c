#include <stdio.h>

/**
 * main - A program that displays the count of arguments passed to it.
 * @argc: The quantity of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
