#include<stdio.h>
#include<stdlib.h>
/**
 * main - print all possible combination of nums with space between first two.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48, b, c, d;

for (a = 48; a < 58; a++)
{
for (b = 48; b < 58; b++)
{
for (c = 48; c < 58; c++)
{
for (d = 48; d < 58; d++)
{
if ((a == c && b < d) || a < c)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if ((a + b + c + d) != 227 || a != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
