#include "main.h"
/**
 * _islower - Checking lower caing
 * Return: 0 if lower or 1 if postive
 * @c : is collecting
 * Descrpition: No desc
 *
 */

int _islower(int c)
{
	char ca;

	for (ca = 'a'; ca <= 'z'; ca++)
	{
		if (c == ca)
		{
			return (1);
		}
	}
	return (0);
}
