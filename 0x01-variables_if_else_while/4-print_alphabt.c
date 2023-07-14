#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints alphabet except 'e' 'q' using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
}
putchar('\n');
return (0);
}
