#include "main.h"
/**
 * _puts - print out an out put of string
 * @str: Parameter for string
 * Description: This is for a simple print
 * Return: Always 0
 */

oid _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
