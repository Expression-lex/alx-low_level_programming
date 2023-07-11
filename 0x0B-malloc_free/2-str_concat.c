#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer for the first string
 * @s2: An input pointer for the second string
 * Return: Concatenate string of NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str, *news1, *neww2;
	int i = 0, lens1 = 0, lens2 = 0;

	news1 = s1;
	news2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++
	}
	s1 = news1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = news2;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	news1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (news1);
}
