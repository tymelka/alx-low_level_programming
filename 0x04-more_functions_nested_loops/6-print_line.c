#include "main.h"

/**
 * print_line - print a line n times
 *@n: number if times to _
 *
 *Return: Returns Void
 */

void print_line(int n)

{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
_putchar(95);
}
_putchar('\n');
}
