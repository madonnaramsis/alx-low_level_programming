#include "main.h"

/**
 * read_textfile - reads a text file,
 * and prints it to the POSIX standard output.
 *
 * @filename: the name of the file to read.
 * @letters: the number of chars to read.
 *
 * Return: the actual number of letters it could read and print OR 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t count, chars;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	chars = read(fd, buffer, letters);
	count = write(STDOUT_FILENO, buffer, chars);
	free(buffer);
	close(fd);
	return (count);
}
