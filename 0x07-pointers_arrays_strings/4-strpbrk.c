#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Entry point
 * @s: input char
 * @accept: input accept
 * Return: Always void
 */

char *_strpbrk(char *s, char *accept)
{
	char *new = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = new;
		s++;
	}
	return (NULL);
}
