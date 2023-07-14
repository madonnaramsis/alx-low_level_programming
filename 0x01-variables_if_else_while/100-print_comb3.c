#include<stdio.h>
#include<stdlib.h>
/**
 * main - print all possible combination of 2 nums while not equal.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48, b;

do {
b = 48;
do {
if (a != b && a < b)
{
putchar(a);
putchar(b);
if ((a + b) != 113)
{
putchar (',');
putchar (' ');
};
}
b++;
} while (b < 58);
a++;
} while (a < 58);
putchar('\n');
return (0);
}
