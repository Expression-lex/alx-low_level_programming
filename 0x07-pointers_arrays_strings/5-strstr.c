#include "main.h"
#include <stdio.h>
/**
 * _strstr - Entry point
 * @haystack: input the haystack
 * @needle: input for needlw
 * Return: Always return void
 */

char *_strstr(char *haystack, char *needle)
{
	char *find = needle, *pool = haystack;

	while (*haystack)
	{
		find = needle;
		pool = haystack;
		while (*haystack == *needle)
		{
			haystack++;
			needle;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = pool + 1;
	}
	return (NULL);
}
