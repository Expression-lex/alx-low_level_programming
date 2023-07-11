#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - A function that creates an array of chars
 * @size: The size of the array
 * @c: initialized an array
 * Return: A pointer to the array of Null
 */

char *create_array(unsigned int size, char c)
{
	char *new;
	unsigned int i = 0;

	new = malloc(size * sizeof(char));

	if (new == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		new[i] = c;
		i++;
	}
	return (new);
}
