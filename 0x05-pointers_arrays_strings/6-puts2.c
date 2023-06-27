#include "main.h"
/**
 * puts2 - Entry point
 * @str: Parameter input
 * Description: Print someting on the even side
 * Return: Always 0
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
		i++;

	for (; len <= i - 1; len += 2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
