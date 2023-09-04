#include "main.h"

/**
 * main - copies the content of a file to another file.
 *
 * @ac: number of arguments.
 * @av: arguments vector.
 *
 * Return: (0) if success OR (97,98,99,100) if fails.
 */
int main(int ac, char **av)
{
	int from, to, len, check;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	len = 1024;
	while (len == 1024)
	{
		len = read(from, buffer, 1024);
		if (len == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		check = write(to, buffer, len);
		if (check == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	check = close(from);
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", from), exit(100);
	check = close(to);
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", to), exit(100);
	return (0);
}
