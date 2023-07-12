#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: input
 * @src: input string
 * @n: number of integer
 * Return: A resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *new = dest, *start = src;
	int srclen = 0, i = 0;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (new);
}
