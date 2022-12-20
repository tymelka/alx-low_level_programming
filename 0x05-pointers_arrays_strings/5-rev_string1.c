#include "main.h"
/**
 * reverse_string - a function that reverses the string
 * @a: content
 * @n: elements of content
 * Return: Always 0 (Success)
 */

void reverse_string(char *s)
{

  int i,len,tmp;

  len = 0;

  while (*s != '\0')
    {
      len = len + 1;
      s = s + 1;
    }
  

  for(i = 0;i < len/2; i++)
    {
      tmp=s[i];
      s[i]=s[len];
      string[length--]=tmp;
    }
}
