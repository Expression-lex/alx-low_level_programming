#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of argument
 * @argv: count of char
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, mul = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i])
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}