#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: the number of arguments entered while excution.
 * @argv: array of the arguments
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
