#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Pointer to the name of the file
 * @text_content: Content to be appended to the file
 *
 * Description: This function appends the specified @text_content to the end
 * of the file specified by @filename.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	for (; text_content[i] != '\0'; i++)
	{
	}
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	close(file);

	return (1);
}
