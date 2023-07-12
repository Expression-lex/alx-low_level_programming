#include "main.h"
/**
 * _memset - a function that fills memory
 * @s: location to fill
 * @b: char to fill location
 * @n: number of byte to fill
 * Return: returns pointer to location filled
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
