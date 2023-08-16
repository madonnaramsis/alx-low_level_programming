#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: the name to  print.
 * @f: a function pointer to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
