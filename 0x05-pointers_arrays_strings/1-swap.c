#include "main.h"
/**
 * swap_int - Entry point
 * Description: This function id for swap
 * @a: Parameter to take first integer
 * @b: Parameter to take next integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}
