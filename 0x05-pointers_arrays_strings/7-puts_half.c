#include "main.h"
/**
 * puts_half  - prints half of a string
 * @s: the pointer to the string value
 * Return: none
 */

void puts_half(char *s)

{

  int h, len, i;

  len = 0;
  while (*s != '\0')
{
len = len + 1;
s = s + 1;
    }
  if ((len  % 2) == 0)
    {
    h = (len / 2);
    }
  else
    {
    h = (len + 1) / 2;
    }

for (i = h; i < len; i++)
{
_putchar(s[i]);
}
  _putchar('\n');
}
