#include "3-calc.h"

/**
 * op_add - sum 2 numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: Result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference of 2 numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: Result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: Result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the division of 2 numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: Result or exit with 100 if second number = 0.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of 2 numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: Result or exit with 100 if second number = 0.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
