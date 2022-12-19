#include "main.h"
/**
 * _puts  - prints a string in a standard output
 * @str: the pointer to the string value
 * Return: none
 */

void _puts(char *str)

{

while (*str != '\0')
{
_putchar (*str);
str++;
}
_putchar ('\n');
}
