#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 *
 * @argc: the number of arguments entered while excution.
 * @argv: array of the arguments
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
