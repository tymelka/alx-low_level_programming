/**
 * *_strncpy - copies a string
 * @dest: destination string to be copied to
 * @src: source of string to concatenate from
 * @n: number of times
 *
 * Return: concatenated strings
 */

char *_strncpy(char *dest, char *src, int n)

{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
