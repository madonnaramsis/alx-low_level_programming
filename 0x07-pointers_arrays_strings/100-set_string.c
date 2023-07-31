#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: a pointer of the main string.
 * @to: a pointer of the string to set the main one to it.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
