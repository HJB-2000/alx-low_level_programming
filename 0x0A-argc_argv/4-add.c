#include <stdio.h>
#include <stdlib.h>



/**
 * main - A program designed to sum positive integers.
 * @argc: The count of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: Always returns 0 to indicate successful execution.
 */


int main(int argc, char *argv[])
{
	int x, su = 0, re = 0;
	char c[] = "Error", *b;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			b = argv[x];
			while (*b != 0)
			{
				if (*b < 47 || *b > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				b++;
			}
			re = atoi(argv[x]);
			su += re;
		}
		printf("%d\n", su);
	}
	else
		printf("%d\n", 0);
	return (0);
}
