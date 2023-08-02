#include "main.h"
#include <stdio.h>
/**
 * avoid_global_vars - the whole idea is to avoid global vars error
 * but now it's everything.
 *
 * @n: the given number.
 * @i: the square root var.
 * @o: flow control var.
 * Return: the natural square root of a number.
 */

int avoid_global_vars(int n, int i, int o)
{
	if (o == 0)
	{
		i = 1;
	}
	if (n / i != i && i * i > n)
	{
		o = 0;
		return (-1);
	}
	else if (n / i != i && i * i < n)
	{
		i++;
		o = 1;
		return (n / avoid_global_vars(n, i, o));
	}
	else if (i * i == n)
	{
		o = 0;
		return (i);
	}
	else
	{
		o = 0;
		return (-n);
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the given number.
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (avoid_global_vars(n, 1, 1));
}
