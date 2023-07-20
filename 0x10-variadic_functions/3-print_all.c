#include "varidaic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - function prints anything
 * @format: A list of type of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *new;
	int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(ap, int));
			break;
		case 'i':
			printf("d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(ap, double));
			break;
		case 's':
			new = va_arg(ap, char*);
			if (new != NULL)
			{
				printf("%s", new);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
