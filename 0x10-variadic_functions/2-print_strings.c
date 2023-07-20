#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: An input string to br printed between numbers
 * @n: number of parameters
 * @...: other parameters
 * Return: Nothing
 */

oid print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *string;

	va_start(ap, n);
	for (; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
