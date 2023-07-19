#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that returns the sum of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result of sum a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the subtract of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to subtract a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  a function that returns the multiply of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod -  a function that returns the moduel of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

/**
 * op_div - a function that returns the divide of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to a / b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
