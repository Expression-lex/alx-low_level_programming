#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry point to upper check
 * @c: input alphabet
 * Description: check if c is upper  and return 1 else 0
 * Return: Always 0
 */

int _isupper(int c)
{
	char cha;
	int numb = 0;

	for (cha = 'A'; cha <= 'Z'; cha++)
	{
		if (c == cha)
		{
			numb = 1;
		}
	}
	return (numb);
}
