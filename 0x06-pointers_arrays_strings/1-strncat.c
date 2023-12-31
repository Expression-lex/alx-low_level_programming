#include "main.h"
/**
 * _strncat - Entry point
 * @dest: Input char
 * @src: input char
 * @n: input lenght
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *new_dest = dest;
	int i = 0, strlen = 0;

	while (*dest)
		dest++;

	if (*src)
	{
		src++;
		strlen++;
	}

	if (n > strlen)
		n = strlen;

	for (; i <= n; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (new_dest);
}
