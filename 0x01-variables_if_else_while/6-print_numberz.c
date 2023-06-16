#include <stdio.h>
/**
 * main : entry point
 *
 * Return: Return 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		/* added the 0 for Ascii convertion*/
	}
	putchar('\n');
	return (0);
}
