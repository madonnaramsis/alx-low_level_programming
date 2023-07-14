#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints alphabet in reverse using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char z;

for (z = 'z'; z >= 'a'; z--)
{
putchar(z);
}
putchar('\n');
return (0);
}
