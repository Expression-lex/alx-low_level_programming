#include "main.h"
/**
 * _ islower - Checking lower caing
 * Return: 0 if lower or 1 if postive
 * @c : is collecting
 * Descrpition: No desc
 * Return: Always 0
 *
 */

int _islower(int c)
{
	char ca;

	for (ca = 'a'; ca <= 'z'; ca++)
	{
		return (ca == c ? '1' : '0');
	}
	return (0);
}
