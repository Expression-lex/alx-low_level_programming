#include "main.h"
/**
 * _memset - Entry point
 * @s: input character
 * @b: input next character
 * @n: input number
 * Return: Always char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *new = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (new);
}
