#include "main.h"
#include <stdio.h>
/**
 * send_divisible - a helper to avoid global vars.
 *
 * @n: the given number.
 * @i: the divisible number.
 * Return: 1 for prime or 0 composite
 */
int send_divisible(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (send_divisible(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0.
 *
 * @n: the given number.
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (send_divisible(n, 1));
}
