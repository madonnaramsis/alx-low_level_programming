#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints alphabet using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
