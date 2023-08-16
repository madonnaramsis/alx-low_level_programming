#include "3-calc.h"

/**
 * main - simple shell calculator.
 *
 * @argc: the number of elements entered while excuting.
 * @argv: a 2D array that holds the elements values.
 *
 * Return: 0 if success OR (98, 99, 100) if it fails.
 */
int main(int argc, char *argv[])
{
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		return (99);
	}
	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
