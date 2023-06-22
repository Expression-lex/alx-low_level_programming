#include "main.h"
#include <stdio.h>

/**
 * print_numbers - this function would putchar 0..9
 * Description: This function takes no args
 * Return: Always retun void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
