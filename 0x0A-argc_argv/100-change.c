#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: the number of arguments entered while excution.
 * @argv: array of the arguments.
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	int cents, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		i++;
	}
	printf("%d\n", i);
	return (0);
}
