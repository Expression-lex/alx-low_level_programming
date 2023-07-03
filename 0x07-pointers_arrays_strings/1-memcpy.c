#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: char input for destination
 * @src: source for copy
 * @n: input string for count
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *new = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
