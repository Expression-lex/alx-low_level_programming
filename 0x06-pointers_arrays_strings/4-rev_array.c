#include "main.h"
/**
 * reverse_array - to reverse an array
 * @a: input a array
 * @n: input interger
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
