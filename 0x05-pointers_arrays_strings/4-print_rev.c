#include "main.h"
/**
 * print_rev  - prints a string in reverse order
 * @s: the pointer to the string value
 * Return: none
 */

void print_rev(char *s)
 
{
  int len;

  len = 0;
  
  while (*s != '\0')
    {
      len = len + 1;
      s = s + 1;
    }
  while (len <= 0)
    {
      _putchar(s[len]);
    len--;
    }
  _putchar('\n');
}
  
