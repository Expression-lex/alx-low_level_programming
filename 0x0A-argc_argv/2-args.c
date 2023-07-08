#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: count of argumrent
 * @argv: count of char in the argument
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("s\n", *argv++);
	}
	return (0);
}
