#include <stdio.h>
/**
 * main - prints all arguments it receives.
 *
 * @argc: the number of arguments entered while excution.
 * @argv: array of the arguments
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
