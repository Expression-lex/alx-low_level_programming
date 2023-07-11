#include "main.h"
#include <stdlib.h>
/**
 * _strdup - The pointer should point to a newly allocated space
 * @str: Enter str input
 * Return: Return char pointer
 *
 */
char *_strdup(char *str)
{
	char *new_str, *first;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	first = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = first;
	new_str = malloc(sizrof(char) * (len + 1));
	first = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
