#include "main.h"

/**
 * create_file - Creates a new file.
 * @filename: Pointer to the name of the file to be created
 * @text_content: Content to be written to the file
 * Description: This function creates a new file with the specified @filename
 * and writes the content given by @text_content to it.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int a, f;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (a = 0; text_content[a] != '\0'; a++)
	{

	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	write(f, text_content, a);
	close(f);
	return (1);
}
