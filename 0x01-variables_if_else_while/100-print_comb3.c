#include <stdio.h>
/**
 * main - Entry point
 *
 * Function: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);

			if (i != '9' || j != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
