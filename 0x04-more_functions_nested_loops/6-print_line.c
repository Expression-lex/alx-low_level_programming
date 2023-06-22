#include "main.h"
/**
 * print_line - Entry point
 * @n: use to enter number of integer
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar ('_');
	}
	_putchar('\n')
}
