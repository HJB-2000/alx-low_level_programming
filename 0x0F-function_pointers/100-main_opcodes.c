#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the opcodes of its own main function.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 *
 * Return: 1 in case of error, 2 for negative byte count, or 0 for success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int byteCount = atoi(argv[1]);
	char *funcPtr = (char *)main;

	if (byteCount < 0)
	{
		printf("Error\n");
		return (2);
	}

	int i; /* Declare 'i' outside the loop */

	for (i = 0; i < byteCount; i++)
	{
		unsigned char opcode = *funcPtr;

		printf("%.2x", opcode);

		if (i < byteCount - 1)
		{
			printf(" ");
		}

		funcPtr++;
	}

	printf("\n");

	return (0);
}
