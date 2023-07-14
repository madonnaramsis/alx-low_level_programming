#include<stdio.h>
#include<stdlib.h>
/**
 * main - print nums from 0 to 9 using putchar with ASCII code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;

do {
putchar(a);
if (a < 57)
{
putchar(',');
putchar(' ');
}
a++;
} while (a < 58);
putchar('\n');
return (0);
}
