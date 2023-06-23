#include "main.h"
/**
 * print_triangle - Entry point
 * @size: enter parameter
 * Description: drawing triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j = 0;

	if (size > 0)
	{
		for (; j < size; j++)
		{
			for (i = 0; i < size - j ; i++)
			{
				_putchar (' ');
			}
			_putchar ('#');
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
