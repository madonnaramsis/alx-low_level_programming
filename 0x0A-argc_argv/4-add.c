#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 *
 * @argc: the number of arguments entered while excution.
 * @argv: array of the arguments
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	int sum, i, n;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		n = 0;
		if (argv[i][0] == '-')
		{
			n++;
		}
		while (argv[i][n] != '\0')
		{
			if (isdigit(argv[i][n]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
