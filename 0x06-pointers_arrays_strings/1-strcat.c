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

	while (*dest)
		dest++;

	for (int i = 0; i <= n ; i++)
	{
		if (*src)
			*dest++ = *src++;
	}
	*dest++ = '\0';
	return (new_dest);
}
