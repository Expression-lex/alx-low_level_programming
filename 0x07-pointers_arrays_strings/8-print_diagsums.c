#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: Input int a
 * @size: Input size of the array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, first = 0, second = 0;


	for (; i < max - 1; i += size + 1)
		first += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		second += a[i];

	printf("%d, %d\n", first, second);
}
