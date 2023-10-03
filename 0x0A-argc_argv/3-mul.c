#include <stdio.h>
#include <stdlib.h>



/**
 * main - A program designed to perform multiplication on two numbers.
 * @argc: The quantity of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: Always returns 0 to signify successful execution.
*/



int main(int argc, char *argv[])
{
	int M = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}


	M = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", M);
	return (0);
}
