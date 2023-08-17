#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: the number of parameters.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *store;
	va_list ptr;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		store = va_arg(ptr, char *);
		if (store == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", store);
		}
		if ((i + 1) != n && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
