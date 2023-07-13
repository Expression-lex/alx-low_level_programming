#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point to return allocated memory
 * @b: Enter integer
 * Return: Return void
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
