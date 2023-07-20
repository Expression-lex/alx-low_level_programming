#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that suns all its parameters
 * @n: number of parameter
 * @...: Other parameters
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (sum);
	}
	for (; i < n; i = va_arg(ap, int))
		sum += i;
	va_end(ap);
	return (sum);
}
