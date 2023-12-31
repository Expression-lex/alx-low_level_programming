#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Pointer shall to a newly allocated space
 * @s1: first character
 * @s2: second character
 * @n: Enter number
 * Return: Return char when concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *new;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	new = malloc(sizeof(char) * (i + j + 1));
	if (new == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		new[k] = s1[k];
	for (k = 0; k < j; k++)
		new[k + i] = s2[k];
	new[i + j] = '\0';
	return (new);
}
