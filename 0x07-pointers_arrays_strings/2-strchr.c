#include "main.h"
/**
 * _strchr - Entry point
 * @s: input char
 * @c: input char
 * Return: Always void
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
