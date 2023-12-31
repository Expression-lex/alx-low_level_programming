#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A fuction that concatenates all argments of your program
 * @ac: number of argments
 * @av: array containing arguments
 * Return: Apointer to string containing all argments
 */
char *argstostr(int ac, char **av)
{
	char *new;
	int len = 0, i = 0, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	len++;
	new = malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new[k] = av[i][j];
			k++;
		}

		new[k] = '\n';
		k++;
	}

	new[k] = '\0';
	return (new);
}
