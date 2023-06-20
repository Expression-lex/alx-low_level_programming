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
	char alpha, lower;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		for (lower = 'a'; lower = 'z'; lower++)
		{
			if (c == alpha || c == lower)
			{
				return (1);
			}
		}
	}
	return (0);
}
