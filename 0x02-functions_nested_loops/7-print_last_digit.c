#include "main.h"
/**
 * print_last_digit - Prints last digit
 * Description: Print last number
 * @a: integer value
 * Return: last digits
 */

int print_last_digit(int a)
{
	int work;

	work = a < 0 ? (a % 10) * -1 : a % 10;
	_putchar((work % 10) + '0');
	return (work % 10);
}
