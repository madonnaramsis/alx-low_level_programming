#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: the name of the file to create.
 * @text_content: the string to be written.
 *
 * Return: (1) on success OR (-1) on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, check, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[len])
		len++;
	check = write(fd, text_content, len);
	if (check == -1)
		return (-1);
	close(fd);
	return (1);
}
