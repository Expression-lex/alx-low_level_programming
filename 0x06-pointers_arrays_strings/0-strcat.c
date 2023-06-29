#include "main.h"

/**
 * _strcat - Entry Point
 * @dest: This is the destination point
 * @src: This is the source
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	char *new_dest = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (new_dest);
}
