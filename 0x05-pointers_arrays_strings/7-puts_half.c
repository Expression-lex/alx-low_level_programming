#include "main.h"
/**
 * puts_half - Entry point
 * @str: Parameter function
 * Description: This would print median
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len = 0, i = 0, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
		n = (len + 1) / 2;
	else
		n = len / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
