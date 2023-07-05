#include "main.h"
/**
 * _pow_recursion - Entry Point
 * @x: the base
 * @y: the power
 * Return: return 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);

	return (x *= _pow_recursion(x, y - 1));
}
