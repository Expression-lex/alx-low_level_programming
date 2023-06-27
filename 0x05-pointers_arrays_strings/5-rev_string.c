#include "main.h"
/**
 * rev_string - Entry point
 * @s: Parameter entry
 * Description: This is reverse
 * Return: Alwaya void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char new;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		new = s[i];
		s[i++] = s[len];
		s[len] = new;
	}
}
