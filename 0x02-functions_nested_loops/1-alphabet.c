#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int _putchar(int c);

void print_alphabet(void)
{
  int i;

  for (i = 97; i <= 122; i++)
    {
      putchar(i);
    }
      putchar('\n');

}
