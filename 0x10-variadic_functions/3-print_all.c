#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char from variable list.
 *
 * @c: the variable list that holds the variables.
 *
 * Return: Nothing.
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - prints an integer from variable list.
 *
 * @c: the variable list that holds the variables.
 *
 * Return: Nothing.
 */
void print_integer(va_list c)
{
	printf("%d", va_arg(c, int));
}

/**
 * print_float - prints a float number from variable list.
 *
 * @c: the variable list that holds the variables.
 *
 * Return: Nothing.
 */
void print_float(va_list c)
{
	printf("%f", va_arg(c, double));
}

/**
 * print_string - prints a string from variable list.
 *
 * @c: the variable list that holds the variables.
 *
 * Return: Nothing.
 */
void print_string(va_list c)
{
	char *store = va_arg(c, char *);

	if (store == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", store);
}

/**
 * print_all - prints anything.
 *
 * @format: a string that holds the flags for the variables.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, o;
	va_list ptr;
	char *separator = "";
	print_handler funcs[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(ptr, format);
	i = 0;
	while (format && format[i])
	{
		o = 0;
		while (o < 4)
		{
			if (funcs[o].flag == format[i])
			{
				printf("%s", separator);
				funcs[o].func(ptr);
				separator = ", ";
			}
			o++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
