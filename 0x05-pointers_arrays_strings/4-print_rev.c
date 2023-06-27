#include "main.h"
/**
 * print_rev - Entry point
 * @s: Parameter Entry
 * Description: This function is to reverse sting
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
