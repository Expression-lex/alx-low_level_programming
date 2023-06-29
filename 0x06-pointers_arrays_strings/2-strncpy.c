#incude "main.h"
/**
 * _strncpy - a function that copy the string
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;
	char *temp = dest;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
