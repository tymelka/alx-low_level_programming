#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_to_98 - add two integer numbers
 * @n: starting integer number
 * Return: nothing
 */
void print_to_98(int n)

{
  if (n < 98)
    {
      while (n <= 98)
	{
	  printf("%d", n);
	  if (n != 98)
	    {
	      printf(", ");
	    }
	  n++;
	}
    }
  else if (n > 98)
    {
      while (n >= 98)
	{
	  printf("%d", n);
	  if (n != 98)
	    {
	      printf(", ");
	    }
	  n--;
	}
    }
  else
    {
      printf("98");
    }
  printf("\n");
}
