#include "main.h"
/**
 * string_toupper - convert all lowercase of a strinf
 * @s: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	char *new = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (new);
}
