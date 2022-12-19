#include "main.h"
/**
 * print_rev  - prints a string in reverse order
 * @s: the pointer to the string value
 * Return: none
 */

void print_rev(char *s)

{
int i;

while (*s != '\0')
{
i++;
}
while (i >= 0)
{
  _putchar(s[i]);
i--;
}
_putchar ('\n');
}
