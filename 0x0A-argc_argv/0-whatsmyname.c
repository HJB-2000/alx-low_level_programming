#include <stdio.h>

/**
 *main - A program that displays its name followed by a newline.
 *@argc: The count of arguments.
 *@argv: An array containing the arguments.
 *Return: Always returns 0.
*/


int main(int argc, char *argv[])
{
	(void)argc;


	printf("%s\n", argv[0]);

	return (0);
}
