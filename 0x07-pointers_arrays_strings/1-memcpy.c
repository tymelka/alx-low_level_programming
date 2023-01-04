/**
 * _memcpy - prints buffer in hexa
 * @src: the address of memory to print
 * @n: the size of the memory to write into
 * @dest: tthe constant to be written into s address
 *
 * Return: the memory address
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);

}
