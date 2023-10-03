#include <stdio.h>
#include <stdlib.h>


/**
 *main - A program that prints the minimum
 *       number of coins to make change for an amount of money.
 * @argc: The count of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: Always returns 0 to indicate successful execution.
*/




int main(int argc, char *argv[])
{
	int x = 0, co = 0;
	char e[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", e);
		return (1);
	}
	x = atoi(argv[1]);
	while (x >= 25)
	{
		x -= 25;
		co++;
	}
	while (x >= 10)
	{
		x -= 10;
		co++;
	}
	while (x >= 5)
	{
		x -= 5;
		co++;
	}
	while (x >= 2)
	{
		x -= 2;
		co++;
	}
	if (x == 1)
		co++;
	printf("%d\n", co);
	return (0);
}

