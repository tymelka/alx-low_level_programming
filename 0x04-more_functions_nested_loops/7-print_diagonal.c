#include "main.h"

/**
 *print_diagonal - print a line n times
 *@n: number if times to print diagonal
 *
 *Return: Returns Void
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
_putchar(95);
_putchar('\n');
}
}
}
