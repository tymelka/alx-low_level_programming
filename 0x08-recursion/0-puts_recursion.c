/**
 * _puts_recursion - function like puts();
 * @s: variable for address of the string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
