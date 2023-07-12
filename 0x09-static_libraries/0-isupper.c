#include "main.h"
/**
 * _isupper - A function that checks fot uppercase character
 * @c: An input character
 * Return: return uppercase
 */

int _isupper(int c)
{
	char up;
	int isupper = 0;

	for (up = 'A'; up <= 'Z'; up++)
	{
		if (c == up)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
