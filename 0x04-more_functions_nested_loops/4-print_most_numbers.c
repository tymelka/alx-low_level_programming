#include "main.h"
/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Description: Prints numbers excpet 2 and 4
 * Return: The numbers since 0 up to 9
 */
void print_most_numbers(void)
{
int x;

for (x = 0; x <= 9; x++)
{
if (x != 2 && x != 4)
{
_putchar(x + '0');
}
}
_putchar('\n');

}
