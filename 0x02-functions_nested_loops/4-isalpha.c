#include "main.h"
/**
 * _isalpha - checks for higher casing
 * Return: 1 if alpha and 1 if postive
 * @c: is collecting
 * *Description: None yet
 *
 */

int _isalpha(int c)
{
	char alpha;

	if (_islower(c) == 1)
	{
		return (1);
	}
	else
	{
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
		{
			return (1);
		}
	}
	}

	return (0);
}
