#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void print_alphabet_x10(void)
{
  int i;
  
  for (i = 97; i <= 122; i++)
    {
    putchar(i);
    }
    putchar('\n');

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int n;
    for (n=1; n<=10; n++)
    {
      print_alphabet_x10();
    }
  return (0);
}
