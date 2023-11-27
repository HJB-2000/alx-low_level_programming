#include "main.h"

/**
* read_textfile - Reads a text file and prints its content
* @filename: Pointer to the name of the file
* @letters: Number of letters to read and print
* Description: This function reads a text file specified by @filename and
* prints its content to the POSIX standard output. It reads up to @letters
* number of letters.
*
* Return: The actual number of letters read and printed, 0 otherwise.
*/

ssize_t read_textfile(const char *filename, size_t letters);
{
	ssize_t file, let, w, total_written = 0;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(letters);
	if (text == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}

	while ((let = read(file, text, letters)) > 0)
	{
		w = write(STDOUT_FILENO, text, let);
		if (w == -1)
		{
			free(text);
			close(file);
			return (0);
		}
		total_written += w;
	}

	close(file);
	free(text);

	return (total_written);
}
