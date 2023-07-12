#include "main.h"
/**
 * _strcat - a function that concatenates
 * @dest: destination
 * @src: source
 * Return: Combined string
 */

char *_strcat(char *dest, char *src)
{
	char *new = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (new);
}
