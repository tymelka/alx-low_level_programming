#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
 * print_alphabet_x10: print alphabet ten times
 * @parameterx: (description of parameter x)?)*
 * 
 * Description: Description of function
*/

void print_alphabet_x10(void)
{
int i, n;
for (n = 1; n <= 10; n++)
{
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
}
