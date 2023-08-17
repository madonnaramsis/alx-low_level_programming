#ifndef VAR_FUN
#define VAR_FUN
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print_all - struct that contains flags & it's functions.
 *
 * @flag: the data type flag.
 * @func: the correct function to print the data type.
 *
*/
typedef struct print_all
{
	char flag;
	void (*func)(va_list arg);
} print_handler;
#endif
