#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point for Function
 * Description: This function would print intergers from 1..9 except 2, 4
 * Return: Always return void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar (i);
	}
	_putchar ('\n');
}
