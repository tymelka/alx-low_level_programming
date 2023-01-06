#include "main.h"

/**
 * _sqrt - compute square root
 * @n: input
 * @rem: input1
 * Return: the square root
 */

int _sqrt(int rem, int n)
{
if (rem <= n / 2)
{
if (n == 1)
return (n);
if (rem * rem != n)
return (_sqrt(rem + 1, n));
return (rem);
}
return (-1);
}
/**
 * _sqrt_recursion - compute square root
 * @n: input
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
return (_sqrt(0, n));
}
