#include "main.h"
/**
 * main - Entry point
 * print_alphabet - entry point to print alphabet
 * Return: always return 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
