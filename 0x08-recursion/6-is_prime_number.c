#include "main.h"

/**
 * is_prime_number - checks if prime numer
 * @n: number to be verified
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)

{
  int i = 2;
  
  if (n <= 2)
    {
      return (0);
    }
  else if  (n % i == 0)
    {
      is_prime_number(n);
      i++;
    }
}
