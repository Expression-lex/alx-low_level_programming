#include "main.h"
/**
 * puts2 - Entry point
 * @str: Parameter input
 * Description: Print someting on the even side
 * Return: Always 0
 */

void puts2(char *str)
{
	int i = 1;

	while (str[i] != '\0')
	{
		if (i % 2 != 1)
			continue;
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
