#include "main.h"
/**
 * main - Program that copies the content of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings representing the command-line arguments.
 *
 * Description: This program copies the content of a source file to a
 * destination file specified by the command-line arguments.
 *
 * Return: 0 on success, non-zero on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int a = 1024, b = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	}
	while (a == 1024)
	{
		a = read(file_from, buffer, 1024);
		if (a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		b = write(file_to, buffer, a);
		if (b < a)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
