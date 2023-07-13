#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: second integer
 * Return: pointer to newly allocated memory
 */

int *array_range(int min, int max)
{
	int i, l;
	int *new;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	new = malloc(sizeof(int) * 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < l; i++, m++)
	{
		new[i] = min;
	}
	return (new);
}
