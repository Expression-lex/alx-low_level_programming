#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: input char s
 * Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
