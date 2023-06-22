#include <stdio.h>
#include "main.h"
/**
 * main -  Entry point
 * Return: void
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			_putchar (' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			_putchar (' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			_putchar (' ');
		}
		else
		{
			printf("%d", i);
			_putchar (' ');
		}
	}
	return (0);
}
