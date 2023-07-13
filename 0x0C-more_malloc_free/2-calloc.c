#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  a function that allocates memory for an array
 * @nmemb: Enter the row number
 * @size: Enter the column number
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		new[i] = 0;
	return (new);
}
