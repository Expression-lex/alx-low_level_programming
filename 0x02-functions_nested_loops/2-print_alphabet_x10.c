#include "main.h"
/**
 * print_alphabet_x10 - Entry point to print alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int d;

	while (d <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		d += 1;
		_putchar('\n');
	}
}
