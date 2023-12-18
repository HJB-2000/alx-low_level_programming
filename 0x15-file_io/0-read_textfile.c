#include "main.h"

/**
* read_textfile - Reads a text file and prints its content
* @filename: Pointer to the name of the file
* @letters: Number of letters to read and print
*
* Description: This function reads a text file specified by @filename and
* prints its content to the POSIX standard output. It reads up to @letters
* number of letters.
*
* Return: The actual number of letters read and printed, 0 otherwise.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, a, b;
	char *t;

	t = malloc(letters);
	if (t == NULL)
		return (0);

	if (filename == NULL)
	{
		free(t);
		return (0);
	}
	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(t);
		return (0);
	}
	a = read(f, t, letters);

	if (a == -1)
	{
		free(t);
		close(f);
		return (0);
	}
	b = write(STDOUT_FILENO, t, a);

	if (b == -1 || b != a)
	{
		free(t);
		close(f);
		return (0);
	}
	free(t);
	close(f);
	return (a);
}
