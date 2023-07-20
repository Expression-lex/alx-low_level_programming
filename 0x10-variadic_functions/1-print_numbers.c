#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - A function that print numbers followed by a new line
 * @separator: Seperators between numbers
 * @n: number of parameter
 * @...: Other parameters
 * Return: return all parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int lis;

	va_start(ap, n);
	for (; i < n; i++)
	{
		lis = va_arg(ap, int);
		printf("%d", lis);
		if (seperator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
