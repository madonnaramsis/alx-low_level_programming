#include<stdio.h>
#include<stdlib.h>
/**
 * main - print all possible combination of 3 nums while not equal.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48, b, c;

do {
b = 48;
do {
c = 48;
do {
if (a != b && a < b && b != c && b < c)
{
putchar(a);
putchar(b);
putchar(c);
if ((a + b + c) != 168)
{
putchar (',');
putchar (' ');
};
};
c++;
} while (c < 58);
b++;
} while (b < 58);
a++;
} while (a < 58);
putchar('\n');
return (0);
}
