#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: parameter input for array
 * @n: Parameter for list
 * Description: list out an array
 * Result: Always 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(",");
	}
	_putchar('\n');
}
