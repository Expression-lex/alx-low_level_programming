#include "main.h"
/**
 * _isdigit - A funtion that checks for a digit
 * @c: An input integer
 * Return: 1 if c is digit
 */

int _isdigit(int c)
{
	char i;
	int isdigit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
