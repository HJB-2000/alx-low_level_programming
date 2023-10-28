#include <stdio.h>



/**
 * main - A program that displays all of its received arguments.
 * @argc: The count of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: Always returns 0 to signify successful execution.
 */


int main(int argc, char *argv[])
{
	int x = 0;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
