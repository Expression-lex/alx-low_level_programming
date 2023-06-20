#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *c = "_putchar";
	int i;
	char d = '\n';

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar(d);
	return (0);
}
