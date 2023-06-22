#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Entry to check for digit
 * @c: input digit
 * Description: looks at the inputs and see if its 1..9 return 1 else 0
 * Return: Always return 0
 */

int _isdigit(int c)
{
	int i, j = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			j = 1;
			break;
		}
	}
	return (j);
}
