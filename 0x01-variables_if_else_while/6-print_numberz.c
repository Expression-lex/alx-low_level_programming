#include <stdio.h>
/**
 * main : Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		/* added the 0 for Ascii convertion*/
	}
	putchar('\n');
	return (0);
}
