#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: the name of the file to put text into it.
 * @text_content: the string to be added.
 *
 * Return: (1) on success OR (-1) on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[len])
		len++;
	check = write(fd, text_content, len);
	if (check == -1)
		return (-1);
	close(fd);
	return (1);
}
