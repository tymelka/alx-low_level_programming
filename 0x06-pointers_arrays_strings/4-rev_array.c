/**
 * reverse_array - compares two strings
 * @a: parameter
 * @n: Number of array elements
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{
int i;
int temp;

i = 0;
n = n - 1;
while (i < n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
