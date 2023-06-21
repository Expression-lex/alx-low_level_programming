#include "main.h"
/**
 * times_table - This is the function
 *
 * Return: This is void
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\t');
	}
}
