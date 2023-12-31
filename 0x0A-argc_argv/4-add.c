#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that add postive number
 * @argc: The argument counter
 * @argv: The argument values
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int total = 0, num, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		total += num;
	}
	printf("%d\n", total);
	return (0);
}
