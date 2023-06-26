#include "main.h"
/**
 * _strlen - Entry point
 * @s: Parameter to enter strings
 * Description: This is to count lenght of a sting in c
 * Return: Always 0
 */

int _strlen(char *s)
{
	int lent = 0;

	while (s[lent] != '\0')
		lent++;
	return (lent);
}
