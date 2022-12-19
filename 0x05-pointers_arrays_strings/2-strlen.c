#include "main.h"
/**
 * int _strlen  - determine the length of a string
 * @s: the pointer to the string value
 * Return: length of the string on the param
 */

int _strlen(char *s)
{
int stlen;

stlen = 0;
while (*s != '\0')
{
stlen = stlen + 1;
s++;
}
return (stlen);
}
